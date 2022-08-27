#ifndef DB_GAME_DATA_GLOBAL_H
#define DB_GAME_DATA_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(DB_GAME_DATA_LIBRARY)
#  define DB_GAME_DATA_EXPORT Q_DECL_EXPORT
#else
#  define DB_GAME_DATA_EXPORT Q_DECL_IMPORT
#endif

#endif // DB_GAME_DATA_GLOBAL_H
