#ifndef GAME_DATA_H
#define GAME_DATA_H

#include "db_game_data_global.h"
#include "../Info.h"
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QVector>

class DB_GAME_DATA_EXPORT Game_data
{
public:
    Game_data();
    ~Game_data();
    bool create_table(QString name);
    bool insert_data(QString id, QString name, int score, int level);
    bool delete_data(QString id);
    QVector<RecordInfo*>& select_data();
    bool clear_data();
    bool isTableExist(QString name);
    bool isDataExist(QString id);
    const QSqlDatabase &getDb() const;

private:
    QSqlDatabase db;
    QVector<RecordInfo*> vec_info;
};

#endif // GAME_DATA_H
