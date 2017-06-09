#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <QObject>
#include "db_setup.h"
#include <QDebug>

bool inQStringList(QString, QStringList);

int searchIdByNameInModel(QString, QSqlQueryModel*, int, int);

bool check_string(QString);

void showMess(QString , QString );

#endif // FUNCTIONS_H

