#pragma once
class CPunkt
{
public:
	
	CPunkt(int tmpx,int  tmpy);
	CPunkt(CPunkt &other);
	CPunkt & operator = (const CPunkt & other);
	~CPunkt();

	void setX(int tmpx);
	void setY(int tmpy);
	int getX()const;
	int getY()const;

	int* x;
	int* y;
};

