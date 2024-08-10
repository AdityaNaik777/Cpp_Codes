//To Swap alternate elements 
//e.g. arr[6]={1,2,3,4,5,6}
//ans  arr[6]={2,1,4,3,6,5}

#include<iostream>

using namespace std;
void PrintArray(int arr[],int size)
{
	cout<<endl<<"Array elements are as follows : ";
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<"  ";
	}
}

void ReverseArray_alternate(int arr[],int size)
{
	int start=0;
	int next=1;
	while(next<=size-1)
	{
		swap(arr[start],arr[next]);
		start=++next;
		next++;
	}
	PrintArray(arr,size);
}
int main()
{
	int arr[100]={10,40,0,20,50,30};
	int arr2[100]={1,4,0,2,5,3,11,65};
	
	PrintArray(arr,6);
	PrintArray(arr2,8);
	
	cout<<endl<<endl<<"Reverse array elements : ";
	
	ReverseArray_alternate(arr,6);
	ReverseArray_alternate(arr2,8);
	return 0;
}
