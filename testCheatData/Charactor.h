#ifndef __CHARACTOR__H
#define __CHARACTOR__H
#pragma once

#include <QObject>
class Charactor;
class CharactorData
{
	friend Charactor;
private:
	int _data1{1};
	int _data2{2};
	int _data3{3};
	int _data4{4};
};
class Charactor :public QObject
{
private:
	CharactorData data{};
public slots:
	void addData1(int );
	void addData2(int );
	void addData3(int );
	void addData4(int );
};
#endif

