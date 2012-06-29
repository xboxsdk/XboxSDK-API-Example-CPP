/********************************************************************************
** Form generated from reading UI file 'xboxsdk.ui'
**
** Created: Fri Jun 29 12:23:56 2012
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
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QTabWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_XboxSDK
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGroupBox *groupBox_2;
    QLineEdit *txtPassword;
    QPushButton *btnLogin;
    QLineEdit *txtUsername;
    QPushButton *btnReset;
    QGroupBox *grpLoginInfo;
    QPushButton *btnLogout;
    QLabel *lblUsername;
    QLabel *lblEmail;
    QWidget *tab_2;
    QWidget *tab_3;
    QPushButton *pushButton;
    QGroupBox *groupBox;
    QListWidget *dbgOut;

    void setupUi(QMainWindow *XboxSDK)
    {
        if (XboxSDK->objectName().isEmpty())
            XboxSDK->setObjectName(QString::fromUtf8("XboxSDK"));
        XboxSDK->resize(569, 361);
        centralWidget = new QWidget(XboxSDK);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(8, 8, 553, 225));
        tabWidget->setTabPosition(QTabWidget::South);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setElideMode(Qt::ElideLeft);
        tabWidget->setMovable(true);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        groupBox_2 = new QGroupBox(tab);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(8, 8, 529, 65));
        txtPassword = new QLineEdit(groupBox_2);
        txtPassword->setObjectName(QString::fromUtf8("txtPassword"));
        txtPassword->setGeometry(QRect(152, 24, 137, 20));
        txtPassword->setMaxLength(32767);
        txtPassword->setEchoMode(QLineEdit::PasswordEchoOnEdit);
        btnLogin = new QPushButton(groupBox_2);
        btnLogin->setObjectName(QString::fromUtf8("btnLogin"));
        btnLogin->setGeometry(QRect(296, 24, 75, 23));
        txtUsername = new QLineEdit(groupBox_2);
        txtUsername->setObjectName(QString::fromUtf8("txtUsername"));
        txtUsername->setGeometry(QRect(8, 24, 137, 20));
        txtUsername->setMaxLength(32767);
        btnReset = new QPushButton(groupBox_2);
        btnReset->setObjectName(QString::fromUtf8("btnReset"));
        btnReset->setGeometry(QRect(376, 24, 75, 23));
        grpLoginInfo = new QGroupBox(tab);
        grpLoginInfo->setObjectName(QString::fromUtf8("grpLoginInfo"));
        grpLoginInfo->setEnabled(true);
        grpLoginInfo->setGeometry(QRect(8, 80, 529, 105));
        grpLoginInfo->setFlat(false);
        grpLoginInfo->setCheckable(false);
        btnLogout = new QPushButton(grpLoginInfo);
        btnLogout->setObjectName(QString::fromUtf8("btnLogout"));
        btnLogout->setGeometry(QRect(440, 72, 75, 23));
        lblUsername = new QLabel(grpLoginInfo);
        lblUsername->setObjectName(QString::fromUtf8("lblUsername"));
        lblUsername->setGeometry(QRect(8, 24, 289, 16));
        lblEmail = new QLabel(grpLoginInfo);
        lblEmail->setObjectName(QString::fromUtf8("lblEmail"));
        lblEmail->setGeometry(QRect(8, 48, 265, 16));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        pushButton = new QPushButton(tab_3);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(72, 88, 75, 23));
        tabWidget->addTab(tab_3, QString());
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(8, 239, 553, 113));
        dbgOut = new QListWidget(groupBox);
        dbgOut->setObjectName(QString::fromUtf8("dbgOut"));
        dbgOut->setGeometry(QRect(8, 16, 537, 89));
        dbgOut->setAutoScroll(true);
        dbgOut->setAutoScrollMargin(3);
        dbgOut->setEditTriggers(QAbstractItemView::NoEditTriggers);
        dbgOut->setProperty("showDropIndicator", QVariant(false));
        dbgOut->setDragDropMode(QAbstractItemView::NoDragDrop);
        dbgOut->setAlternatingRowColors(true);
        dbgOut->setMovement(QListView::Free);
        dbgOut->setFlow(QListView::TopToBottom);
        XboxSDK->setCentralWidget(centralWidget);

        retranslateUi(XboxSDK);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(XboxSDK);
    } // setupUi

    void retranslateUi(QMainWindow *XboxSDK)
    {
        XboxSDK->setWindowTitle(QApplication::translate("XboxSDK", "XboxSDK", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("XboxSDK", "User Credentials", 0, QApplication::UnicodeUTF8));
        txtPassword->setInputMask(QString());
        txtPassword->setText(QString());
        txtPassword->setPlaceholderText(QApplication::translate("XboxSDK", "Password", 0, QApplication::UnicodeUTF8));
        btnLogin->setText(QApplication::translate("XboxSDK", "Login", 0, QApplication::UnicodeUTF8));
        txtUsername->setInputMask(QString());
        txtUsername->setText(QString());
        txtUsername->setPlaceholderText(QApplication::translate("XboxSDK", "Username", 0, QApplication::UnicodeUTF8));
        btnReset->setText(QApplication::translate("XboxSDK", "Reset", 0, QApplication::UnicodeUTF8));
        grpLoginInfo->setTitle(QApplication::translate("XboxSDK", "User Info", 0, QApplication::UnicodeUTF8));
        btnLogout->setText(QApplication::translate("XboxSDK", "Logout", 0, QApplication::UnicodeUTF8));
        lblUsername->setText(QApplication::translate("XboxSDK", "Username:", 0, QApplication::UnicodeUTF8));
        lblEmail->setText(QApplication::translate("XboxSDK", "Email:", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("XboxSDK", "Example Login", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("XboxSDK", "Example Profiles", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("XboxSDK", "Query API", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("XboxSDK", "Example Download", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("XboxSDK", "API Output", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class XboxSDK: public Ui_XboxSDK {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XBOXSDK_H
