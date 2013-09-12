#include "stdafx.h"
#include "iostream"
using namespace std;

int size_arr(int *arr)
{
	cout<<"数组的长度是："<<_msize(arr)/sizeof(arr[0])<<endl;
	return _msize(arr)/sizeof(arr[0]);
}