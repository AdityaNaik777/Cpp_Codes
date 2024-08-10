//Array contains all numbers unique except one
//unique numbers are size-1 and rest one is duplicate
//Find that duplicate number
#include<iostream>
using namespace std;
void PrintArray(int arr[],int size)
{
	cout<<endl<<"Array : ";
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<"  ";
	}
}
void duplicate_ele_1(int arr[],int size)
{
	int ans=0,j;
	for(int i=0;i<size;i++)
	{
		ans=ans^arr[i];
	}
	for(j=1;j<size;j++)
	{
		ans=ans^j;
	}
	PrintArray(arr,size);
	cout<<endl<<"Duplicate item in array is : "<<ans;
}
int main()
{
	int arr[5]={1,2,4,3,3};
	duplicate_ele_1(arr,5);
	int arr2[9]={1,2,3,4,6,5,6,7,8};
	duplicate_ele_1(arr2,9);
	return 0;
}
