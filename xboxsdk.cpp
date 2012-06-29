#include "xboxsdk.h"
#include "ui_xboxsdk.h"

XboxSDK::XboxSDK(QWidget *parent) : QMainWindow(parent), ui(new Ui::XboxSDK), m_manager(new QNetworkAccessManager(this))
{
    ui->setupUi(this);
}

XboxSDK::~XboxSDK()
{
    delete ui;
}

void XboxSDK::on_pushButton_clicked()
{
    // connect our signal for our finished slot
    connect(m_manager, SIGNAL(finished(QNetworkReply*)), this, SLOT(requestFinsihed(QNetworkReply*)));

    // build our uri
    QUrl uri("http://sandbox.xboxsdk.com/api/user/TEST_KEY");

    // make our web request
    m_manager->get(QNetworkRequest(uri));
}

void XboxSDK::requestFinsihed(QNetworkReply *reply)
{
    // read our reply data
    //QString json_data( reply->readAll() );
    QByteArray json_data = reply->readAll();

    // parse our json XboxSDK API response
    parse_jsondata(json_data);
}

void XboxSDK::parse_jsondata(QByteArray jsondata)
{
    // create our json parser
    QJson::Parser parser;

    // bool to make sure parse was successfull
    bool parse_ok;

    // try and parse our json data
    QVariantMap res = parser.parse(jsondata, &parse_ok).toMap();

    // check to make sure parse was successfull
    if (!parse_ok)
    {
        QMessageBox::critical(this, "Error", "Unable to parse json data.");
        exit(1);
    }

    // now that data is checked we ca see what the API said!
    if (!(res.value("success").toBool()))
    {
        QMessageBox::warning(this, "Error", res.value("error").toString());
        exit(1);
    }

    QVariantMap data_items = res["data"].toMap();
    foreach (QString key, data_items.keys())
        ui->listWidget->addItem( QString("%1:\t\t %2").arg(key, data_items.value(key).toString()) );

}
