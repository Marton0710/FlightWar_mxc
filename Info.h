#pragma once
#include <QObject>

struct RecordInfo{
    RecordInfo(QString _name, QString _score):
        name(_name), score(_score){};   //初始化列表
    QString name;
    QString score;
};
