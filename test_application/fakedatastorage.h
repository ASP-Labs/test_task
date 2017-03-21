#ifndef FAKEDATASTORAGE_H
#define FAKEDATASTORAGE_H

#include <QString>
#include <QList>

class FakeDataStorage
{
    QList<QString> objects;
public:
    FakeDataStorage();

    QList<QString> getObjects() const;
};

#endif // FAKEDATASTORAGE_H
