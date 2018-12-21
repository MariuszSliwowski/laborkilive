#include "pch.h"
#include "CPunkt.h"
#include <iostream>



CPunkt::CPunkt(int tmpx, int tmpy)
{
	x = new int(tmpx);
	y = new int(tmpy);
}

CPunkt::CPunkt(CPunkt & other)
{
	

			x = new int(*other.x);
	y = new int(*other.y);
	
}

CPunkt & CPunkt::operator=(const CPunkt & other)
{
	x = new int(other.getX());
	y = new int(other.getY());
	return *this;
}


CPunkt::~CPunkt()
{ 
	
	delete x;
	delete y;
	
}

void CPunkt::setX(int tmpx)
{

	*x = tmpx;
}

void CPunkt::setY(int tmpy)
{	
	*y = tmpy;
}

int CPunkt::getX()const
{
	return *x ;
}

int CPunkt::getY()const
{
	return *y;
}
