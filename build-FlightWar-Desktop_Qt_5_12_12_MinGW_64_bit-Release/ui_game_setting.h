/********************************************************************************
** Form generated from reading UI file 'game_setting.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAME_SETTING_H
#define UI_GAME_SETTING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Game_Setting
{
public:
    QFrame *frame;
    QGridLayout *gridLayout;
    QPushButton *start;
    QPushButton *lookhistory;
    QFormLayout *formLayout;
    QLabel *Label;
    QLineEdit *name;
    QLabel *Label_2;
    QComboBox *level;
    QSpacerItem *verticalSpacer_2;
    QPushButton *close;
    QPushButton *clearhistory;
    QLineEdit *lineEdit;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QWidget *Game_Setting)
    {
        if (Game_Setting->objectName().isEmpty())
            Game_Setting->setObjectName(QString::fromUtf8("Game_Setting"));
        Game_Setting->resize(800, 800);
        Game_Setting->setMinimumSize(QSize(800, 800));
        Game_Setting->setMaximumSize(QSize(800, 800));
        frame = new QFrame(Game_Setting);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setEnabled(true);
        frame->setGeometry(QRect(0, 0, 800, 800));
        frame->setMinimumSize(QSize(800, 800));
        frame->setMaximumSize(QSize(800, 800));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        start = new QPushButton(frame);
        start->setObjectName(QString::fromUtf8("start"));
        QFont font;
        font.setPointSize(15);
        start->setFont(font);

        gridLayout->addWidget(start, 5, 1, 1, 2);

        lookhistory = new QPushButton(frame);
        lookhistory->setObjectName(QString::fromUtf8("lookhistory"));
        lookhistory->setFont(font);

        gridLayout->addWidget(lookhistory, 7, 1, 1, 1);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        Label = new QLabel(frame);
        Label->setObjectName(QString::fromUtf8("Label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(30);
        sizePolicy.setHeightForWidth(Label->sizePolicy().hasHeightForWidth());
        Label->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(16);
        Label->setFont(font1);
        Label->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(0, QFormLayout::LabelRole, Label);

        name = new QLineEdit(frame);
        name->setObjectName(QString::fromUtf8("name"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(30);
        sizePolicy1.setHeightForWidth(name->sizePolicy().hasHeightForWidth());
        name->setSizePolicy(sizePolicy1);
        name->setFont(font1);

        formLayout->setWidget(0, QFormLayout::FieldRole, name);

        Label_2 = new QLabel(frame);
        Label_2->setObjectName(QString::fromUtf8("Label_2"));
        sizePolicy.setHeightForWidth(Label_2->sizePolicy().hasHeightForWidth());
        Label_2->setSizePolicy(sizePolicy);
        Label_2->setFont(font1);
        Label_2->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(1, QFormLayout::LabelRole, Label_2);

        level = new QComboBox(frame);
        level->addItem(QString());
        level->addItem(QString());
        level->addItem(QString());
        level->addItem(QString());
        level->addItem(QString());
        level->setObjectName(QString::fromUtf8("level"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(30);
        sizePolicy2.setHeightForWidth(level->sizePolicy().hasHeightForWidth());
        level->setSizePolicy(sizePolicy2);
        level->setFont(font1);

        formLayout->setWidget(1, QFormLayout::FieldRole, level);


        gridLayout->addLayout(formLayout, 3, 1, 1, 2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 2, 1, 1, 1);

        close = new QPushButton(frame);
        close->setObjectName(QString::fromUtf8("close"));
        close->setFont(font);

        gridLayout->addWidget(close, 6, 1, 1, 2);

        clearhistory = new QPushButton(frame);
        clearhistory->setObjectName(QString::fromUtf8("clearhistory"));
        clearhistory->setFont(font);

        gridLayout->addWidget(clearhistory, 7, 2, 1, 1);

        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setEnabled(false);
        QFont font2;
        font2.setPointSize(40);
        lineEdit->setFont(font2);
        lineEdit->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lineEdit, 1, 1, 1, 2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 3, 3, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 4, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 0, 1, 1, 1);


        retranslateUi(Game_Setting);

        QMetaObject::connectSlotsByName(Game_Setting);
    } // setupUi

    void retranslateUi(QWidget *Game_Setting)
    {
        Game_Setting->setWindowTitle(QApplication::translate("Game_Setting", "\345\274\200\345\247\213\346\270\270\346\210\217", nullptr));
        start->setText(QApplication::translate("Game_Setting", "\345\274\200\345\247\213\346\270\270\346\210\217", nullptr));
        lookhistory->setText(QApplication::translate("Game_Setting", "\346\237\245\347\234\213\345\216\206\345\217\262", nullptr));
        Label->setText(QApplication::translate("Game_Setting", "\345\220\215\345\255\227\357\274\232", nullptr));
        Label_2->setText(QApplication::translate("Game_Setting", "\347\255\211\347\272\247\357\274\232", nullptr));
        level->setItemText(0, QApplication::translate("Game_Setting", "1", nullptr));
        level->setItemText(1, QApplication::translate("Game_Setting", "2", nullptr));
        level->setItemText(2, QApplication::translate("Game_Setting", "3", nullptr));
        level->setItemText(3, QApplication::translate("Game_Setting", "4", nullptr));
        level->setItemText(4, QApplication::translate("Game_Setting", "5", nullptr));

        close->setText(QApplication::translate("Game_Setting", "\345\205\263\351\227\255\346\270\270\346\210\217", nullptr));
        clearhistory->setText(QApplication::translate("Game_Setting", "\346\270\205\347\251\272\345\216\206\345\217\262", nullptr));
        lineEdit->setText(QApplication::translate("Game_Setting", "\351\243\236\346\234\272\345\244\247\346\210\230", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Game_Setting: public Ui_Game_Setting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAME_SETTING_H
