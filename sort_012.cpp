//sort 012
#include<iostream>
using namespace std;
int PrintArray(int arr[],int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
}

//method-1
int sort_012(int arr[],int size)
{
	int temp;
	for(int i=0;i<size;i++)
	{
		for(int j=i+1;j<size;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	cout<<endl<<"Array after sorting : ";
	PrintArray(arr,size);
}

//You can use the two-pointer approach...
int main()
{
	int arr[8]={0,2,2,1,0,1,1};
	cout<<"Array : ";
	PrintArray(arr,7);
	sort_012(arr,7);
	
	return 0;
}
