//Triplet Sum Pair
//A target number is given the sum of two numbers from the array must equal to target
//And first value should be less than second value
//e.g. arrr[4]={1,2,3,4,5,6,7,} target=7 ans=1,2,4 
#include<iostream>
using namespace std;

void PrintArray(int arr[],int size)
{
	cout<<"Array : ";
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<"  ";
	}
}
void Triplet_Sum_pair(int arr[],int size,int target)
{
	int i,j,k;
	cout<<endl<<"Sum-Pair Elements : "<<endl;
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			for(k=j+1;k<size;k++)
			{
				if(arr[i]+arr[j]+arr[k]==target)
				{
					cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
				}
			}
		}
	}
	
}
int main()
{
	int arr[8]={1,2,3,4,5,6,7,8};
	int T;//(target)
	PrintArray(arr,8);	
	T=10;
	Triplet_Sum_pair(arr,8,T);
	return 0;
}
