#ifndef DLISTMODEL_H
#define DLISTMODEL_H

#include <QObject>
#include <QStringListModel>

class DListModel : public QStringListModel
{
    Q_OBJECT
public:
    explicit DListModel(QObject *parent = nullptr)
        : QStringListModel(parent)
    {

        setStringList({"Apple", "Pineapple"});
    }
};

#endif // DLISTMODEL_H
