#ifndef XBOXSDK_H
#define XBOXSDK_H

#include <QMainWindow>
#include <QtGui>
#include <QtNetwork>
#include <QCryptographicHash>
#include <QJson/Parser>

namespace Ui {
    class XboxSDK;
}

class XboxSDK : public QMainWindow
{
    Q_OBJECT
    
public:
    QVariantMap m_res;
    explicit XboxSDK(QWidget *parent = 0);
    ~XboxSDK();
    void parse_jsondata(QByteArray);
    void query_api(QString);

public slots:
    void requestFinsihed(QNetworkReply*);
    
private slots:
    void on_btnLogin_clicked();

private:
    Ui::XboxSDK *ui;
    QNetworkAccessManager *m_manager;
    QJson::Parser *m_parser;
    bool m_authed;

};

#endif // XBOXSDK_H
