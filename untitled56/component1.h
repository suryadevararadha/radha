#ifndef COMPONENT1_H
#define COMPONENT1_H
#include<QListView>
#include <QMainWindow>
#include<QStringListModel>
#include<QJsonObject>
namespace Ui {
class Component1;
}

class Component1 : public QMainWindow
{
    Q_OBJECT

public:
    explicit Component1(QWidget *parent = nullptr);
    ~Component1();
signals:
     void listclicked(QJsonObject obj);

public slots:
    void on_pushButton_2_clicked();
    void on_listView_clicked(const QModelIndex &index);

QListView *getListView();

public:
    Ui::Component1 *ui;
    QStringListModel *model;
    QMap<QString,QJsonObject> map;
};

#endif // COMPONENT1_H
