#include "xboxsdk.h"
#include "ui_xboxsdk.h"

/**
 * construct
 */
XboxSDK::XboxSDK(QWidget *parent) : QMainWindow(parent), ui(new Ui::XboxSDK), m_manager(new QNetworkAccessManager(this)), m_parser(new QJson::Parser)
{
    ui->setupUi(this);
    ui->grpLoginInfo->hide();

    // connect our signal for our finished slot
    connect(m_manager, SIGNAL(finished(QNetworkReply*)), this, SLOT(requestFinsihed(QNetworkReply*)));
}
// -------------------------------------------------------------------------------

/**
 * destruct
 * pick up after yourself!
 */
XboxSDK::~XboxSDK()
{
    delete m_parser;
    delete m_manager;
    delete ui;
}
// -------------------------------------------------------------------------------

// ===============================================================================
//  PUBLIC SLOTS
// ===============================================================================

/**
 * requestFinished()
 */
void XboxSDK::requestFinsihed(QNetworkReply *reply)
{
    // read our reply data
    //QString json_data( reply->readAll() );
    QByteArray json_data = reply->readAll();

    // debug output
    ui->dbgOut->addItem( QString("response: %1").arg( QString(json_data) ) );

    // parse our json XboxSDK API response
    parse_jsondata(json_data);
}
// -------------------------------------------------------------------------------

// ===============================================================================
//  PUBLIC FUNCTIONS
// ===============================================================================

/**
 * query_api()
 * function sets up the API URI and makes the call
 */
void XboxSDK::query_api(QString uri_string)
{
    // build our query uri
    QUrl uri(uri_string);

    // debug output
    ui->dbgOut->addItem(QString("API Call: %1").arg(uri_string));

    // run our web request
    QNetworkReply *reply = m_manager->get(QNetworkRequest(uri));
    reply->ignoreSslErrors();
}
// -------------------------------------------------------------------------------

/**
 * parse_jsondata()
 * function will do two main things, first it will make sure the data we have gotten back can be parsed as json
 * next it will then break the data into the first pass "success", "data" and/or "error"
 *
 * parsed data is stored in m_res a public variable of type QVariantMap
 */
void XboxSDK::parse_jsondata(QByteArray jsondata)
{
    // bool to make sure parse was successfull
    bool parse_ok;

    // try and parse our json data
    m_res = m_parser->parse(jsondata, &parse_ok).toMap();

    // check to make sure parse was successfull
    if (!parse_ok)
    {
        QMessageBox::critical(this, "Error", "Unable to parse json data.");
        exit(1);
    }

    // now that data is checked we ca see what the API said!
    if (!(m_res.value("success").toBool()))
    {
        QMessageBox::warning(this, "Error", m_res.value("error").toString());
    }

    // debug output
    ui->dbgOut->addItem("Json response from API parsed successfully.");
    ui->dbgOut->addItem("-------------------------------------------");
    ui->dbgOut->addItem("");
}
// -------------------------------------------------------------------------------

// ===============================================================================
//  PRIVATE SLOTS
// ===============================================================================

/**
 * on_btnLogin_clicked()
 */
void XboxSDK::on_btnLogin_clicked()
{
    // uri for this via the api is
    // https://xboxsdk.com/api/login/<username>/<password>/[type]/[hashed]

    QString username = ui->txtUsername->text();
    QString password = QString( QCryptographicHash::hash(ui->txtPassword->text().toAscii(), QCryptographicHash::Sha1) ).toAscii().toHex();

    // query the API
    query_api( QString("https://xboxsdk.com/api/login/%1/%2/xboxsdk/true").arg(username, password) );
}
// -------------------------------------------------------------------------------

// ===============================================================================
//  PRIVATE FUNCTIONS
// ===============================================================================



