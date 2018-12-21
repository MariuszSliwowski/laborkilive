#include "pch.h"
#include "CTable.h"
#include <iostream>
using namespace std;
template <class T>
CTable<T>::CTable(T f)
{
	//pc_test = new T(f);
	cout << f << endl;
}//CTable::CTable()
template <class T>
void CTable<T>::vAdd(int iVal)
{
	//*pc_test += iVal;
}//void CTable<T>::vAdd(int iVal)
template class CTable<int>;
template class CTable<float>;
