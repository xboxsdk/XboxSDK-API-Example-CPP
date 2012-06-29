/********************************************************************************
** Form generated from reading UI file 'xboxsdk.ui'
**
** Created: Thu Jun 28 22:00:34 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XBOXSDK_H
#define UI_XBOXSDK_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QListWidget>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_XboxSDK
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QListWidget *listWidget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *XboxSDK)
    {
        if (XboxSDK->objectName().isEmpty())
            XboxSDK->setObjectName(QString::fromUtf8("XboxSDK"));
        XboxSDK->resize(572, 263);
        centralWidget = new QWidget(XboxSDK);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(8, 8, 75, 23));
        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(8, 40, 553, 177));
        XboxSDK->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(XboxSDK);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 572, 21));
        XboxSDK->setMenuBar(menuBar);
        mainToolBar = new QToolBar(XboxSDK);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        XboxSDK->addToolBar(Qt::TopToolBarArea, mainToolBar);

        retranslateUi(XboxSDK);

        QMetaObject::connectSlotsByName(XboxSDK);
    } // setupUi

    void retranslateUi(QMainWindow *XboxSDK)
    {
        XboxSDK->setWindowTitle(QApplication::translate("XboxSDK", "XboxSDK", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("XboxSDK", "PushButton", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class XboxSDK: public Ui_XboxSDK {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XBOXSDK_H
