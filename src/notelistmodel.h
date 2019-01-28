#ifndef NOTELISTMODEL_H
#define NOTELISTMODEL_H

#include <QAbstractListModel>
#include <QJsonArray>
#include <QJsonObject>

class FlyNote;

class NoteListModel : public QAbstractListModel
{
    Q_OBJECT

public:
    static NoteListModel *getInstance();
    // Header:
    QVariant headerData(int section, Qt::Orientation orientation, int role = Qt::DisplayRole) const override;
    // Basic functionality:
    int rowCount(const QModelIndex &parent = QModelIndex()) const override;
    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override;
    // Editable:
    bool setData(const QModelIndex &index, const QVariant &value, int role = Qt::EditRole) override;
    Qt::ItemFlags flags(const QModelIndex& index) const override;
    // Manage data:
    void insertNote(int row, FlyNote *note);
    void removeNote(int row);
    bool removeNote(FlyNote *note);
    int notePosition(FlyNote *note);

public slots:
    void updateNote(FlyNote *note);

private:
    static NoteListModel *instance;
    explicit NoteListModel(QObject *parent = nullptr);
    ~NoteListModel() override;

    QJsonArray noteArray;


};

#endif // NOTELISTMODEL_H