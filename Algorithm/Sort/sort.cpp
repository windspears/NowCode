#include<bits/stdc++.h>
using namespace std;
//1.Bubble Sort
function bubbleSort(arr)
{
	int len = arr.length();
	for(int i=0;i<len;i++)
	{
		for(int j=0;j<len-1;j++)
		{
			if(arr[j]>arr[j+1])
				swap(arr[j],a[j+1]);
		}
	}
	return arr;
}


//2.Selection Sort

function selectionSort(arr)
{
	int len = arr.length();
	for(int i=0;i<len;i++)
	{
		minIndex=arr[i];	
		for(int j=i+1;j<len;j++)
		{
			if(mex<arr[j])
				minIndex = j;
		}
		swap(mex,arr[j]);
	}
	return arr;
}

//3.Insertion Sort

function Sort(arr)
{
	int len = arr.length();
	int preIndex,current;
	for(int i=1;i<len;i++)
	{
		preIndex = i-1;
		current = arr[i];
		while(preIndex>=0&&arr[i]<arr[preIndex])
		{
			arr[preIndex+1] = arr[preIndex];
			preIndex--;
		}
		arr[preIndex+1] = current;
	}
	return arr;
}

//4.Shell Sort

function Sort(arr)
{
	int len = arr.length();
	int gap = 1;
	while(gap<len/2)
	{
		gap = gap*3 +1;
	}
	for(int gap;gap>0;gap=floor(gap/3))
	{
		for(int i = gap;i<len;i++)
		{
			temp = arr[i];
			for(int j = i-gap;j>0&&arr[j]>temp;j-=temp)
			{
				arr[j+gap] = arr[j];
			}
		}
		arr[j+gap] = temp;
	}
	return arr;
}


//5.Merge Sort

function MergeSort(arr) 
{
	int len = arr.length();
	if(len<2) return arr;
	for(int )
}


