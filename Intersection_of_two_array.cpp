//Find intersection of array
#include<iostream>
using namespace std;

void PrintArray(int arr[],int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<"  ";
	}
}
void intersection_array(int arr1[],int arr2[],int size1, int size2)
{
	int i,j;
	cout<<endl<<"Intersection elements : ";
	i=0;
	j=0;
	while(i<size1)
	{
		if(arr1[i]==arr2[j])
		{
			cout<<arr1[i]<<"  ";
			i++;
			j++;
		}
		else if(arr1[i]>arr2[j])
		{
			j++;
		}
		else
		{
			i++;
		}
	}
}
int main()
{
	int arr1[6]={1,2,2,2,3,4};
	int arr2[4]={2,2,3,3};
	cout<<endl<<"Array 1 : ";
	PrintArray(arr1,6);
	cout<<endl<<"Array 2 : ";
	PrintArray(arr2,4);
	intersection_array(arr1,arr2,6,4);
	return 0;
}
