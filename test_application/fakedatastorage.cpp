#include "fakedatastorage.h"


FakeDataStorage::FakeDataStorage()
{

    for (int i=0; i<1000; ++i)
        objects.append(QString("{\"name%1\": \"ff\", \"id\": %1}").arg(i)); //Fake json string

}

QList<QString> FakeDataStorage::getObjects() const
{
    return objects;
}
