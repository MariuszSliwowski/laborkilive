#include "pch.h"
#include "CProstokat.h"
#include <cmath>
#include <algorithm>
using namespace std;


CProstokat::CProstokat(CPunkt tmp1, CPunkt tmp2) :p1(tmp1),p2(tmp2)
{
	
	setMinMax();
}

CProstokat::CProstokat(int x, int y, int x2, int y2):p1(x,y),p2(x2,y2)
{
	setMinMax();
}



CProstokat::~CProstokat()
{
}



CProstokat  CProstokat::  operator+(CProstokat& other)
{
	

	CPunkt tmp1(min(p1.getX(), other.p1.getX()),min(p1.getY(), other.p1.getY()));
 CPunkt tmp2(max(p2.getX(), other.p2.getX()), max(p2.getY(), other.p2.getY()));
	CProstokat prosto(tmp1,tmp2);

	return prosto;
}

void CProstokat::setMinMax()
{
	int x1 = p1.getX();
	int x2 = p2.getX();
	int y1 = p1.getY();
	int y2 = p2.getY();
		p1.setX(min(x1,x2));
		p1.setY(min(y1,y2));
		p2.setX(max(x1,x2));
		p2.setY(max(y1, y2));
	
}
 ostream & operator<<(ostream & wyjscie, CProstokat & other)
{
	return wyjscie << other.p1.getX() << " " << other.p1.getY() << " " << other.p2.getX() << " " << other.p2.getY();
}
