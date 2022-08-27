/********************************************************************************
** Form generated from reading UI file 'scoreboard.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCOREBOARD_H
#define UI_SCOREBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Scoreboard
{
public:
    QFrame *frame;
    QGridLayout *gridLayout;
    QTableWidget *scoreTable;
    QPushButton *ok;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *retry;
    QSpacerItem *horizontalSpacer_3;
    QLabel *ranking;

    void setupUi(QWidget *Scoreboard)
    {
        if (Scoreboard->objectName().isEmpty())
            Scoreboard->setObjectName(QString::fromUtf8("Scoreboard"));
        Scoreboard->resize(600, 450);
        Scoreboard->setMinimumSize(QSize(600, 450));
        Scoreboard->setMaximumSize(QSize(600, 450));
        frame = new QFrame(Scoreboard);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 600, 450));
        frame->setMinimumSize(QSize(600, 450));
        frame->setMaximumSize(QSize(600, 450));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        scoreTable = new QTableWidget(frame);
        if (scoreTable->columnCount() < 2)
            scoreTable->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        scoreTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        scoreTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        if (scoreTable->rowCount() < 10)
            scoreTable->setRowCount(10);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setTextAlignment(Qt::AlignCenter);
        scoreTable->setItem(0, 0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setTextAlignment(Qt::AlignCenter);
        scoreTable->setItem(0, 1, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setTextAlignment(Qt::AlignCenter);
        scoreTable->setItem(1, 0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        __qtablewidgetitem5->setTextAlignment(Qt::AlignCenter);
        scoreTable->setItem(1, 1, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        __qtablewidgetitem6->setTextAlignment(Qt::AlignCenter);
        scoreTable->setItem(2, 0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        __qtablewidgetitem7->setTextAlignment(Qt::AlignCenter);
        scoreTable->setItem(2, 1, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        __qtablewidgetitem8->setTextAlignment(Qt::AlignCenter);
        scoreTable->setItem(3, 0, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        __qtablewidgetitem9->setTextAlignment(Qt::AlignCenter);
        scoreTable->setItem(3, 1, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        __qtablewidgetitem10->setTextAlignment(Qt::AlignCenter);
        scoreTable->setItem(4, 0, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        __qtablewidgetitem11->setTextAlignment(Qt::AlignCenter);
        scoreTable->setItem(4, 1, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        __qtablewidgetitem12->setTextAlignment(Qt::AlignCenter);
        scoreTable->setItem(5, 0, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        __qtablewidgetitem13->setTextAlignment(Qt::AlignCenter);
        scoreTable->setItem(5, 1, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        __qtablewidgetitem14->setTextAlignment(Qt::AlignCenter);
        scoreTable->setItem(6, 0, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        __qtablewidgetitem15->setTextAlignment(Qt::AlignCenter);
        scoreTable->setItem(6, 1, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        __qtablewidgetitem16->setTextAlignment(Qt::AlignCenter);
        scoreTable->setItem(7, 0, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        __qtablewidgetitem17->setTextAlignment(Qt::AlignCenter);
        scoreTable->setItem(7, 1, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        __qtablewidgetitem18->setTextAlignment(Qt::AlignCenter);
        scoreTable->setItem(8, 0, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        __qtablewidgetitem19->setTextAlignment(Qt::AlignCenter);
        scoreTable->setItem(8, 1, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        __qtablewidgetitem20->setTextAlignment(Qt::AlignCenter);
        scoreTable->setItem(9, 0, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        __qtablewidgetitem21->setTextAlignment(Qt::AlignCenter);
        scoreTable->setItem(9, 1, __qtablewidgetitem21);
        scoreTable->setObjectName(QString::fromUtf8("scoreTable"));
        scoreTable->setEnabled(true);
        QFont font;
        font.setPointSize(10);
        scoreTable->setFont(font);
        scoreTable->setRowCount(10);
        scoreTable->horizontalHeader()->setCascadingSectionResizes(false);
        scoreTable->horizontalHeader()->setMinimumSectionSize(32);
        scoreTable->horizontalHeader()->setDefaultSectionSize(236);
        scoreTable->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        scoreTable->horizontalHeader()->setStretchLastSection(true);
        scoreTable->verticalHeader()->setProperty("showSortIndicator", QVariant(false));
        scoreTable->verticalHeader()->setStretchLastSection(false);

        gridLayout->addWidget(scoreTable, 1, 0, 1, 5);

        ok = new QPushButton(frame);
        ok->setObjectName(QString::fromUtf8("ok"));
        QFont font1;
        font1.setPointSize(12);
        ok->setFont(font1);

        gridLayout->addWidget(ok, 2, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 2, 2, 1, 1);

        retry = new QPushButton(frame);
        retry->setObjectName(QString::fromUtf8("retry"));
        retry->setFont(font1);

        gridLayout->addWidget(retry, 2, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 2, 4, 1, 1);

        ranking = new QLabel(frame);
        ranking->setObjectName(QString::fromUtf8("ranking"));
        QFont font2;
        font2.setPointSize(20);
        ranking->setFont(font2);
        ranking->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(ranking, 0, 0, 1, 5);


        retranslateUi(Scoreboard);

        QMetaObject::connectSlotsByName(Scoreboard);
    } // setupUi

    void retranslateUi(QWidget *Scoreboard)
    {
        Scoreboard->setWindowTitle(QApplication::translate("Scoreboard", "\347\247\257\345\210\206\346\246\234", nullptr));
        QTableWidgetItem *___qtablewidgetitem = scoreTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Scoreboard", "\345\220\215\345\255\227", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = scoreTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Scoreboard", "\345\210\206\346\225\260", nullptr));

        const bool __sortingEnabled = scoreTable->isSortingEnabled();
        scoreTable->setSortingEnabled(false);
        scoreTable->setSortingEnabled(__sortingEnabled);

        ok->setText(QApplication::translate("Scoreboard", "\347\273\223\346\235\237\346\270\270\346\210\217", nullptr));
        retry->setText(QApplication::translate("Scoreboard", "\351\207\215\346\226\260\345\274\200\345\247\213", nullptr));
        ranking->setText(QApplication::translate("Scoreboard", "\346\232\202\346\227\240\344\277\241\346\201\257", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Scoreboard: public Ui_Scoreboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCOREBOARD_H
