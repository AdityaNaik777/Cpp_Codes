//Linear Search
#include<iostream>

using namespace std;
bool search(int arr[],int size,int key)
{
	int i;
	for(i=0;i<size;i++)
	{
		if(arr[i]==key)
		{
			return 1;
		}
	}
	return 0;
}
int main()
{
	int a[100]={5,7,-2,10,22,-2,0,5,22,1};
	int key;
	int size=20;
	cout<<"Enter the element which you want to search : ";
	cin>>key;
	bool found=search(a,size,key);
	if(found)
	{
		cout<<"Element found";
	}
	else
	{
		cout<<"Element not Found";
	}
	return 0;
}
