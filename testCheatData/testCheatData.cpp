#include "testCheatData.h"
#include <QStandardItemModel>
#include <QItemDelegate>
#include <string>

class A
{
protected:
    int i = 1;
    int b = 3;
public:
    virtual void Init() 
    {
    
    };
    void f() {};

};
class Astr:public A
{
    int ci = 11;
public:
    void Init()
    {
        A::i = 22;
    }
    
};


class P
{
private:
    A* _pa{};
public:
    P(A* pa) :_pa(pa) {}
    A* operator ->()
    {
        return _pa;
    }
};

void Test()
{
    A a{};
    Astr astr{};
    auto size = sizeof astr;

    P p(&a);
    p->Init();
    p->f();
}

testCheatData::testCheatData(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    BindData();
    InitTable();

    Test();
}

void testCheatData::BindData()
{
    /*connect(ui.addCharactor, &QPushButton::clicked, [this]()
        {
            _charactors.push_back(std::make_shared<Charactor>());
        });*/
    connect(ui.newCharactor, &QPushButton::clicked, [this]() 
        {
            _charactor = std::make_shared<Charactor>();
        });
    connect(ui.deleteCharactor, &QPushButton::clicked, [this]()
        {
            _charactor.reset();
        });
    connect(ui.pushButton, &QPushButton::clicked, [this]() 
        {
            _charactor->addData1(1);
        });
    connect(ui.pushButton_2, &QPushButton::clicked, [this]()
        {
            _charactor->addData2(2);
        });
    connect(ui.pushButton_3, &QPushButton::clicked, [this]()
        {
            _charactor->addData3(3);
        });
    connect(ui.pushButton_4, &QPushButton::clicked, [this]()
        {
            _charactor->addData4(4);
        });
}
void testCheatData::InitTable()
{
    QStandardItemModel* model = new QStandardItemModel();
    const unsigned int columnCount = 4;
    model->setColumnCount(columnCount);
    model->setHorizontalHeaderItem(0,new QStandardItem("data1"));
    model->setHorizontalHeaderItem(1,new QStandardItem("data2"));
    model->setHorizontalHeaderItem(2,new QStandardItem("data3"));
    model->setHorizontalHeaderItem(3,new QStandardItem("data4"));

    QStandardItem* item00 = new QStandardItem("00");
    QStandardItem* item01 = new QStandardItem("01");
    QStandardItem* item02 = new QStandardItem("02");
    QStandardItem* item03 = new QStandardItem("03");
    QList<QStandardItem*> items0{ item00,item01,item02,item03 };
    model->appendRow(items0);

    ui.tableView->setModel(model);

   /* QAbstractItemDelegate* delegate = new QItemDelegate();
    ui.tableView->setItemDelegate(delegate);*/
}