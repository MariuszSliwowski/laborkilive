#pragma once
#include "CPunkt.h"
#include <iostream>
using namespace std;
class CProstokat
{
public:
	
	CProstokat(CPunkt tmp1, CPunkt tmp2);
	CProstokat(int x, int y,int x2,int y2);
	~CProstokat();
	CProstokat  operator+(CProstokat	& other);
	
	friend ostream& operator << (ostream& wyjscie, CProstokat& other);
	
	void setMinMax();
	CPunkt p1;
	CPunkt p2;
};

