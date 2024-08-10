//Binary Search
#include<iostream>
using namespace std;
int binary_search(int arr[],int size, int key)
{
	int start=0;
	int end=size-1;
	
	int mid;
	//mid=start+end/2; this goes wrong
	
	//when start=2 raise to 32-1 and end is also same
	//so here mid value value will cross the INT_MAX
	//So use below one:
	
	mid=start+(end-start)/2;
	
	while(start<=end)
	{
		if(arr[mid]==key)
		{
			return mid;
		}
		if(key<=arr[mid])
		{
			end=mid-1;
		}
		else
		{
			start=mid+1;
		}
		mid=start+(end-start)/2;
	}
	return -1;
}
int main()
{
	//arrays must be in sorted order
	int arr_even[8]={1,3,4,8,10,15,19,24};
	int arr_odd[5]={11,18,45,90,101};
	
	int ans_even=binary_search(arr_even,8,15);
	int ans_odd=binary_search(arr_odd,5,18);
	
	cout<<"Even array : Index of element is "<<ans_even<<endl;
	cout<<"Odd array : Index of element is "<<ans_odd;
	return 0;
}
