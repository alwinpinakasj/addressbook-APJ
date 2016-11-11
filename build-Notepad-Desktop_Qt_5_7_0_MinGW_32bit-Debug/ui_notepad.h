/********************************************************************************
** Form generated from reading UI file 'notepad.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTEPAD_H
#define UI_NOTEPAD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Notepad
{
public:
    QAction *actionOpen_2;
    QAction *actionSave_2;
    QWidget *centralWidget;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;
    QPushButton *quitButton;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Notepad)
    {
        if (Notepad->objectName().isEmpty())
            Notepad->setObjectName(QStringLiteral("Notepad"));
        Notepad->resize(400, 300);
        actionOpen_2 = new QAction(Notepad);
        actionOpen_2->setObjectName(QStringLiteral("actionOpen_2"));
        actionSave_2 = new QAction(Notepad);
        actionSave_2->setObjectName(QStringLiteral("actionSave_2"));
        centralWidget = new QWidget(Notepad);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(40, 10, 258, 223));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        textEdit = new QTextEdit(widget);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        verticalLayout->addWidget(textEdit);

        quitButton = new QPushButton(widget);
        quitButton->setObjectName(QStringLiteral("quitButton"));

        verticalLayout->addWidget(quitButton);

        Notepad->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Notepad);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        Notepad->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Notepad);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Notepad->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Notepad);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Notepad->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuFile->addAction(actionOpen_2);
        menuFile->addAction(actionSave_2);

        retranslateUi(Notepad);

        QMetaObject::connectSlotsByName(Notepad);
    } // setupUi

    void retranslateUi(QMainWindow *Notepad)
    {
        Notepad->setWindowTitle(QApplication::translate("Notepad", "Notepad", 0));
        actionOpen_2->setText(QApplication::translate("Notepad", "Open", 0));
        actionSave_2->setText(QApplication::translate("Notepad", "Save", 0));
        quitButton->setText(QApplication::translate("Notepad", "Quit", 0));
        menuFile->setTitle(QApplication::translate("Notepad", "File", 0));
    } // retranslateUi

};

namespace Ui {
    class Notepad: public Ui_Notepad {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTEPAD_H
