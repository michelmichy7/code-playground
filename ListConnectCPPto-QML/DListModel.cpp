#include "DListModel.h"

void DListModel::handleItemClick(int index) {
    QString clickedItem = stringList().at(index);
    qDebug() << "CLicked: " << clickedItem;
}
