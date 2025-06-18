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
        setStringList(QStringList({"Apple", "Pineapple", "s"}));
    }
    Q_INVOKABLE void handleItemClick(int index);

};

#endif // DLISTMODEL_H
