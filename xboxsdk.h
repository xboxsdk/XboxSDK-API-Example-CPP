#ifndef XBOXSDK_H
#define XBOXSDK_H

#include <QMainWindow>
#include <QtGui>
#include <QtNetwork>

#include <QJson/Parser>

namespace Ui {
class XboxSDK;
}

class XboxSDK : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit XboxSDK(QWidget *parent = 0);
    ~XboxSDK();
    void parse_jsondata(QByteArray);

public slots:
    void requestFinsihed(QNetworkReply*);
    
private slots:
    void on_pushButton_clicked();

private:
    Ui::XboxSDK *ui;
    QNetworkAccessManager *m_manager;

};

#endif // XBOXSDK_H
