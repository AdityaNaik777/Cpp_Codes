//Write a function to calculate the power of any number to any number
#include<iostream>
#include<math.h>
using namespace std;

int power(int a, int b)
{
	return pow(a,b);
}

int main()
{
	int x,y;
	cout<<"Enter the two number for finding x raise to y : ";
	cin>>x>>y;
	int res=power(x,y);
	cout<<x<<" raise to "<<y<<" is : "<<res;
	return 0;
}


