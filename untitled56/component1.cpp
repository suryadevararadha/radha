#include "component1.h"
#include "ui_component1.h"
#include <QtCore/QUrl>
#include <QtNetwork/QNetworkRequest>
#include <QtNetwork/QNetworkReply>
#include <QJsonDocument>
#include <QJsonObject>
#include<QJsonArray>

Component1::Component1(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Component1)
{
    ui->setupUi(this);
}

Component1::~Component1()
{
    delete ui;
}

void Component1::on_pushButton_2_clicked()
{
    QStringList list;
    model = new QStringListModel(this);
    QEventLoop eventLoop;
        QNetworkAccessManager mgr;
        QObject::connect(&mgr, SIGNAL(finished(QNetworkReply*)), &eventLoop, SLOT(quit()));
        QNetworkRequest req( QUrl( QString("http://jsonplaceholder.typicode.com/users") ) );
        QNetworkReply *reply = mgr.get(req);
        eventLoop.exec();

        if (reply->error() == QNetworkReply::NoError) {
            QString strReply = (QString)reply->readAll();
            QJsonDocument jsonResponse = QJsonDocument::fromJson(strReply.toUtf8());
           // qDebug()<<jsonResponse.array();

            QJsonArray jsonArray = jsonResponse.array();


            foreach (const QJsonValue & value, jsonArray) {
                QJsonObject obj = value.toObject();
                map.insert(obj["name"].toString(),obj);
                list<<obj["name"].toString();
                qDebug()<<"name : "<<obj["name"].toString()<<"  Phone :"<<obj["phone"].toString();
                //propertyKeys.append(obj["key"].toString());
            }
            delete reply;
        }
        else {
            qDebug() << "Failure" <<reply->errorString();
            delete reply;
        }
         model->setStringList(list);
         ui->listView->setModel(model);
        // ui->listView->

}

void Component1::on_listView_clicked(const QModelIndex &index)
{
    const QVariant var = model->data(index);
            // next you need to convert your `var` from `QVariant` to something that you show from your data with default (`Qt::DisplayRole`) role, usually it is a `QString`:
            const QString selectedItemString = var.toString();
            qDebug()<<selectedItemString;
            QJsonObject obj = map[selectedItemString];
            emit listclicked(obj);
}


QListView* Component1::getListView()
{
    return ui->listView;
}
