//when we pass array through functions then actual array is passed and not the copy
//if wanna see then check by changing value from the function

#include<iostream>

using namespace std;

void PrintArray(int arr[],int size)
{
	cout<<"Array elements are as follows : ";
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<"  ";
	}
}

void getMax(int arr[],int size)
{
	int maxi=INT_MIN;
	for(int i=0;i<size;i++)
	{
		maxi=max(maxi,arr[i]);
	}
	cout<<endl<<"Largest element from the array is : "<<maxi<<endl;
}

void getMin(int arr[],int size)
{
	int mini=INT_MAX;
	for(int i=0;i<size;i++)
	{
		mini=min(mini,arr[i]);
	}
	cout<<"Smallest element from the array is : "<<mini;
}
int main()
{
	int arr[100];
	int size;
	cout<<"Enter the size of array : ";
	cin>>size;
	cout<<"Enter the array elements : ";
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	PrintArray(arr,size);
	getMax(arr,size);
	getMin(arr,size);
	return 0;
}
