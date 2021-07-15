#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_testCheatData.h"
#include "charactor.h"
#include <vector>
#include <memory>

class testCheatData : public QMainWindow
{
    Q_OBJECT

public:
    testCheatData(QWidget *parent = Q_NULLPTR);

private:
    Ui::testCheatDataClass ui;
    std::vector<std::shared_ptr<Charactor>> _charactors;
    std::shared_ptr<Charactor> _charactor;

private:
    void BindData();
    void InitTable();
};
