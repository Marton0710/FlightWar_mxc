#include "game_data.h"
#include <QDebug>

Game_data::Game_data()
{
    //创建数据库
    if(QSqlDatabase::contains("qt_sql_default_connection")){
        db = QSqlDatabase::database("qt_sql_default_connection");
    } else {
        db = QSqlDatabase::addDatabase("QSQLITE");
        db.setDatabaseName("FlightWar_data.db");
        db.setUserName("admin");
        db.setPassword("123321");
    }
}

Game_data::~Game_data()
{
    db.close();
}

bool Game_data::create_table(QString name)
{
    QSqlQuery query;
    //打开数据库
    if(!db.open()){
        qDebug() << "Open sql may be impossible:" << db.lastError();
        return false;
    } else if(!isTableExist(name)) {
        QString sql("CREATE TABLE %1 (id varchar(64) primary key, name varchar(30), score int, level int)");
        query.prepare(sql.arg(name));
        if(!query.exec()){
            qDebug() << "Create table may be impossible:" << db.lastError();
            return false;
        }
    }
    return true;
}

bool Game_data::insert_data(QString id, QString name, int score, int level)
{
    QSqlQuery query;
    QString sql("INSERT INTO %1 (id, name, score, level) VALUES(:id, :name, :score, :level)");
    query.prepare(sql.arg("game"));
    query.addBindValue(id);
    query.addBindValue(name);
    query.addBindValue(score);
    query.addBindValue(level);
    if(!query.exec()){
        qDebug() << "Insert values may be impossible:" << db.lastError();
        return false;
    }
    return true;
}

bool Game_data::delete_data(QString id)
{
    QSqlQuery query;
    QString sql("DELETE FROM %1 where id = ?");
    query.prepare(sql.arg("game"));
    query.addBindValue(id);
    if(!query.exec()){
        qDebug() << "Delete this data may be impossible:" << db.lastError();
        return false;
    }
    return true;
}

QVector<RecordInfo*>& Game_data::select_data()
{
    vec_info.clear();
    QSqlQuery query;
    QString sql("SELECT %1, %2 from %3");
    query.prepare(sql.arg("name").arg("score").arg("game"));
    if(!query.exec()){
        qDebug() << "Select this data may be impossible:" << db.lastError();
        return vec_info;
    } else {
        while(query.next()){
            QString name = query.value(0).toString();
            QString score = query.value(1).toString();
            vec_info.push_back(new RecordInfo(name, score));
        }
    }
    return vec_info;
}

bool Game_data::clear_data()
{
    QSqlQuery query;
    QString sql("DELETE FROM %1");
    query.prepare(sql.arg("game"));
    if(!query.exec()){
        qDebug() << "Clear all datas may be impossible:" << db.lastError();
        return false;
    }
    return true;
}

bool Game_data::isTableExist(QString name)
{
    QSqlQuery query;
    QString sql("SELECT * from sqlite_master where name='%1'");
    query.exec(sql.arg(name));
    return query.next();
}

const QSqlDatabase &Game_data::getDb() const
{
    return db;
}

//bool Game_data::isDataExist(QString id)
//{
//    QSqlQuery query;
//    QString sql("SELECT id from %1");
//    query.prepare(sql.arg("game"));
//    if(query.exec()){
//        while(query.next()){
//            int check_id = query.value(0).toInt();
//            if(check_id == id)
//                return true;
//        }
//    }
//    return false;
//}
