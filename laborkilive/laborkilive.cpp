
#include "pch.h"
#include <iostream>
#include "CProstokat.h"
#include "CPunkt.h"
#include "CTable.h"
using namespace std;
int main()
{
	
	CTable<int> f(5.5);
	CProstokat g(5,10,2,8);
	CProstokat g2(2, 9, 7, 12);
	CProstokat we(5, 5, 5, 5);
	
	CProstokat ff(1, 1, 1, 1);
	ff = g + g2;
	cout <<ff<< endl;;
	
	
	

}

