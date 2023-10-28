/********************************************************************************
** Form generated from reading UI file 'table.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABLE_H
#define UI_TABLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_table
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QTableWidget *tableWidget;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QWidget *page_3;
    QTableWidget *tableWidget_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineEditNum;
    QLineEdit *lineEditDate;
    QLineEdit *lineEditMat;
    QLineEdit *lineEditNom;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QWidget *page_4;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QLineEdit *lineEditD;
    QLineEdit *lineEditNumC;
    QLineEdit *lineEditDpro;
    QLineEdit *lineEditProduit;
    QLineEdit *lineEditQtes;
    QLineEdit *lineEditDefaut;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLineEdit *lineEditRem;
    QLineEdit *lineEditMtricule;
    QWidget *page_2;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *table)
    {
        if (table->objectName().isEmpty())
            table->setObjectName(QString::fromUtf8("table"));
        table->resize(1324, 600);
        centralwidget = new QWidget(table);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(30, 0, 1271, 551));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        tableWidget = new QTableWidget(page);
        if (tableWidget->columnCount() < 13)
            tableWidget->setColumnCount(13);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(9, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(10, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(11, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(12, __qtablewidgetitem12);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(0, 10, 1291, 501));
        pushButton = new QPushButton(page);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(1110, 520, 83, 29));
        pushButton_3 = new QPushButton(page);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(70, 520, 83, 29));
        stackedWidget->addWidget(page);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        tableWidget_2 = new QTableWidget(page_3);
        if (tableWidget_2->columnCount() < 14)
            tableWidget_2->setColumnCount(14);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(0, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(1, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(2, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(3, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(4, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(5, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(6, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(7, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(8, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(9, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(10, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(11, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(12, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(13, __qtablewidgetitem26);
        tableWidget_2->setObjectName(QString::fromUtf8("tableWidget_2"));
        tableWidget_2->setGeometry(QRect(30, 60, 1221, 411));
        label = new QLabel(page_3);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 0, 63, 20));
        label_2 = new QLabel(page_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(340, 30, 91, 20));
        label_3 = new QLabel(page_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(810, 30, 81, 20));
        label_4 = new QLabel(page_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(70, 30, 63, 20));
        lineEditNum = new QLineEdit(page_3);
        lineEditNum->setObjectName(QString::fromUtf8("lineEditNum"));
        lineEditNum->setGeometry(QRect(160, 0, 113, 28));
        lineEditDate = new QLineEdit(page_3);
        lineEditDate->setObjectName(QString::fromUtf8("lineEditDate"));
        lineEditDate->setGeometry(QRect(160, 30, 113, 28));
        lineEditMat = new QLineEdit(page_3);
        lineEditMat->setObjectName(QString::fromUtf8("lineEditMat"));
        lineEditMat->setGeometry(QRect(470, 30, 181, 28));
        lineEditNom = new QLineEdit(page_3);
        lineEditNom->setObjectName(QString::fromUtf8("lineEditNom"));
        lineEditNom->setGeometry(QRect(970, 30, 221, 28));
        pushButton_4 = new QPushButton(page_3);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(982, 500, 201, 29));
        pushButton_5 = new QPushButton(page_3);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(110, 500, 201, 29));
        pushButton_6 = new QPushButton(page_3);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(460, 500, 201, 29));
        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        pushButton_8 = new QPushButton(page_4);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(150, 450, 181, 41));
        pushButton_9 = new QPushButton(page_4);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(990, 460, 181, 41));
        lineEditD = new QLineEdit(page_4);
        lineEditD->setObjectName(QString::fromUtf8("lineEditD"));
        lineEditD->setGeometry(QRect(560, 20, 481, 41));
        lineEditNumC = new QLineEdit(page_4);
        lineEditNumC->setObjectName(QString::fromUtf8("lineEditNumC"));
        lineEditNumC->setGeometry(QRect(560, 270, 481, 41));
        lineEditDpro = new QLineEdit(page_4);
        lineEditDpro->setObjectName(QString::fromUtf8("lineEditDpro"));
        lineEditDpro->setGeometry(QRect(560, 220, 481, 41));
        lineEditProduit = new QLineEdit(page_4);
        lineEditProduit->setObjectName(QString::fromUtf8("lineEditProduit"));
        lineEditProduit->setGeometry(QRect(560, 70, 481, 41));
        lineEditQtes = new QLineEdit(page_4);
        lineEditQtes->setObjectName(QString::fromUtf8("lineEditQtes"));
        lineEditQtes->setGeometry(QRect(560, 170, 481, 41));
        lineEditDefaut = new QLineEdit(page_4);
        lineEditDefaut->setObjectName(QString::fromUtf8("lineEditDefaut"));
        lineEditDefaut->setGeometry(QRect(560, 120, 481, 41));
        label_5 = new QLabel(page_4);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(340, 30, 191, 31));
        label_6 = new QLabel(page_4);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(340, 70, 191, 31));
        label_7 = new QLabel(page_4);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(340, 120, 191, 31));
        label_8 = new QLabel(page_4);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(340, 170, 191, 31));
        label_9 = new QLabel(page_4);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(340, 220, 191, 31));
        label_10 = new QLabel(page_4);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(340, 270, 191, 31));
        label_11 = new QLabel(page_4);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(340, 390, 191, 31));
        label_12 = new QLabel(page_4);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(340, 330, 191, 31));
        lineEditRem = new QLineEdit(page_4);
        lineEditRem->setObjectName(QString::fromUtf8("lineEditRem"));
        lineEditRem->setGeometry(QRect(560, 330, 481, 41));
        lineEditMtricule = new QLineEdit(page_4);
        lineEditMtricule->setObjectName(QString::fromUtf8("lineEditMtricule"));
        lineEditMtricule->setGeometry(QRect(560, 390, 481, 41));
        stackedWidget->addWidget(page_4);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        pushButton_2 = new QPushButton(page_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(530, 380, 83, 29));
        stackedWidget->addWidget(page_2);
        table->setCentralWidget(centralwidget);
        menubar = new QMenuBar(table);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1324, 25));
        table->setMenuBar(menubar);
        statusbar = new QStatusBar(table);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        table->setStatusBar(statusbar);

        retranslateUi(table);

        stackedWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(table);
    } // setupUi

    void retranslateUi(QMainWindow *table)
    {
        table->setWindowTitle(QCoreApplication::translate("table", "table", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("table", "Numero", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("table", "matricule", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("table", "nom", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("table", "c.Medicale", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("table", "j.ferie", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("table", "conge/autorisation", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("table", "retard", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("table", "reclamation", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("table", "document", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->horizontalHeaderItem(9);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("table", "dimanche", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->horizontalHeaderItem(10);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("table", "H sup 15min\n"
"", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget->horizontalHeaderItem(11);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("table", "Remarque\n"
"", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget->horizontalHeaderItem(12);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("table", "Prime\n"
"", nullptr));
        pushButton->setText(QCoreApplication::translate("table", "edit", nullptr));
        pushButton_3->setText(QCoreApplication::translate("table", "add", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget_2->horizontalHeaderItem(0);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("table", "Date", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget_2->horizontalHeaderItem(1);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("table", "H. Entr\303\251e\n"
"", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget_2->horizontalHeaderItem(2);
        ___qtablewidgetitem15->setText(QCoreApplication::translate("table", "H. Sortie\n"
"", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidget_2->horizontalHeaderItem(3);
        ___qtablewidgetitem16->setText(QCoreApplication::translate("table", "Objectif\n"
"", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidget_2->horizontalHeaderItem(4);
        ___qtablewidgetitem17->setText(QCoreApplication::translate("table", "C.Medical /\n"
"Autorisation", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = tableWidget_2->horizontalHeaderItem(5);
        ___qtablewidgetitem18->setText(QCoreApplication::translate("table", "J.F\303\251ri\303\251\n"
"", nullptr));
        QTableWidgetItem *___qtablewidgetitem19 = tableWidget_2->horizontalHeaderItem(6);
        ___qtablewidgetitem19->setText(QCoreApplication::translate("table", "Conge\n"
"", nullptr));
        QTableWidgetItem *___qtablewidgetitem20 = tableWidget_2->horizontalHeaderItem(7);
        ___qtablewidgetitem20->setText(QCoreApplication::translate("table", "Retard\n"
"", nullptr));
        QTableWidgetItem *___qtablewidgetitem21 = tableWidget_2->horizontalHeaderItem(8);
        ___qtablewidgetitem21->setText(QCoreApplication::translate("table", "Reclamation\n"
"", nullptr));
        QTableWidgetItem *___qtablewidgetitem22 = tableWidget_2->horizontalHeaderItem(9);
        ___qtablewidgetitem22->setText(QCoreApplication::translate("table", "Document\n"
"", nullptr));
        QTableWidgetItem *___qtablewidgetitem23 = tableWidget_2->horizontalHeaderItem(10);
        ___qtablewidgetitem23->setText(QCoreApplication::translate("table", "Dimanche\n"
"", nullptr));
        QTableWidgetItem *___qtablewidgetitem24 = tableWidget_2->horizontalHeaderItem(11);
        ___qtablewidgetitem24->setText(QCoreApplication::translate("table", "H sup 15min\n"
"", nullptr));
        QTableWidgetItem *___qtablewidgetitem25 = tableWidget_2->horizontalHeaderItem(12);
        ___qtablewidgetitem25->setText(QCoreApplication::translate("table", "Remarque\n"
"", nullptr));
        QTableWidgetItem *___qtablewidgetitem26 = tableWidget_2->horizontalHeaderItem(13);
        ___qtablewidgetitem26->setText(QCoreApplication::translate("table", "Prime\n"
"", nullptr));
        label->setText(QCoreApplication::translate("table", "Numero : ", nullptr));
        label_2->setText(QCoreApplication::translate("table", "matricule     :", nullptr));
        label_3->setText(QCoreApplication::translate("table", "Nom          :", nullptr));
        label_4->setText(QCoreApplication::translate("table", "Mois      :", nullptr));
        pushButton_4->setText(QCoreApplication::translate("table", "edit", nullptr));
        pushButton_5->setText(QCoreApplication::translate("table", "show", nullptr));
        pushButton_6->setText(QCoreApplication::translate("table", "add", nullptr));
        pushButton_8->setText(QCoreApplication::translate("table", "cancel", nullptr));
        pushButton_9->setText(QCoreApplication::translate("table", "add", nullptr));
        lineEditD->setPlaceholderText(QCoreApplication::translate("table", "Date", nullptr));
        lineEditNumC->setPlaceholderText(QCoreApplication::translate("table", "Num de carton", nullptr));
        lineEditDpro->setPlaceholderText(QCoreApplication::translate("table", "Date de production", nullptr));
        lineEditProduit->setPlaceholderText(QCoreApplication::translate("table", "Produit", nullptr));
        lineEditQtes->setPlaceholderText(QCoreApplication::translate("table", "Quanties", nullptr));
        lineEditDefaut->setPlaceholderText(QCoreApplication::translate("table", "D\303\251faut", nullptr));
        label_5->setText(QCoreApplication::translate("table", "Date", nullptr));
        label_6->setText(QCoreApplication::translate("table", "Produit", nullptr));
        label_7->setText(QCoreApplication::translate("table", "D\303\251faut", nullptr));
        label_8->setText(QCoreApplication::translate("table", "Qtes", nullptr));
        label_9->setText(QCoreApplication::translate("table", "Date de production", nullptr));
        label_10->setText(QCoreApplication::translate("table", "Num de carton", nullptr));
        label_11->setText(QCoreApplication::translate("table", "Matricule", nullptr));
        label_12->setText(QCoreApplication::translate("table", "Remarque", nullptr));
        lineEditRem->setPlaceholderText(QCoreApplication::translate("table", "Remarque", nullptr));
        lineEditMtricule->setPlaceholderText(QCoreApplication::translate("table", "Matricule", nullptr));
        pushButton_2->setText(QCoreApplication::translate("table", "show", nullptr));
    } // retranslateUi

};

namespace Ui {
    class table: public Ui_table {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABLE_H
