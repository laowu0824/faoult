// Find.cpp : 定义控制台应用程序的入口点。
//
#include "stdafx.h"
#include "iostream"
using namespace std;
void insert_sort(int*);
int _tmain(int argc, _TCHAR* argv[])
{
	int arr[]={1,2,3,4,5};
	cout<<sizeof(arr)<<endl;
	const char str[]="12345";
	cout<<sizeof(str)<<endl;
	while(1)
	{
		int num;
		cin>>num;
		int *array = new int[num];
		while(--num>=0)
			cin>>array[num];
		insert_sort(array);
	}
	return 0;
}

