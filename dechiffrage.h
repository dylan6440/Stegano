#ifndef DECHIFFRAGE_H
#define DECHIFFRAGE_H
#include "paql.h"
#include <QThread>
#include <iostream>
using namespace std;

class dechiffrage : public QThread
{
    Q_OBJECT
public:
    explicit dechiffrage(QObject *parent = nullptr);
    void dechiffre(QString s_PathDirectory, QString s_ImagePath, QString s_PassWord);
    QString message(QString s_PathDirectory);
    string s_Cesar(string s_str, int32_t s32_shift);

signals:
    void sig(int32_t s32_number);

private:
};

#endif // DECHIFFRAGE_H
