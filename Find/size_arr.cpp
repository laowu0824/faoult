#include "stdafx.h"
#include "iostream"
using namespace std;

int size_arr(int *arr)
{
	cout<<"����ĳ����ǣ�"<<_msize(arr)/sizeof(arr[0])<<endl;
	return _msize(arr)/sizeof(arr[0]);
}