#include "stdafx.h"
#include "iostream"
using namespace std;
int size_arr(int*);
void swap(int &,int&);
void insert_sort(int *arr)
{
	int a_size = size_arr(arr);
	
	for(int i = 0;	i < a_size;	i++)
		for(int j = 0;	j < a_size-i-1;	j++)
			if (arr[j] > arr[j+1])
				swap(arr[j],arr[j+1]);
	for(int i =0;i<a_size;i++)
		cout<<arr[i]<<" ";
}