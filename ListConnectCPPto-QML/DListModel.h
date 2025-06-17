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


        }        QHash<int, QByteArray> roleNames() const override {
            QHash<int, QByteArray> roles;
            roles[Qt::DisplayRole] = "display";  // Standard role
            roles[Qt::EditRole] = "edit";        // Standard role
            roles[Qt::UserRole] = "modelData";   // Commonly used in QML
            return roles;
    }
};

#endif // DLISTMODEL_H
