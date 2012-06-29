#include <QtGui/QApplication>
#include "xboxsdk.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    XboxSDK w;
    w.show();
    
    return a.exec();
}
