//sum of elements in an array
#include<iostream>

using namespace std;

void array_sum(int arr[],int size)
{
	int i,sum=0;
	for(i=0;i<size;i++)
	{
		sum+=arr[i];
	}
	cout<<"Sum of all elements in an array is : "<<sum;
}
int main()
{
	int arr[100],size;
	cout<<"Enter the size of array : ";
	cin>>size;
	cout<<"Enter the array elements : ";
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	array_sum(arr,size);
	return 0;
}
