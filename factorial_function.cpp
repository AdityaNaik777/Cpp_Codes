//Factorial Function
#include<iostream>

using namespace std;

int fact(int n)
{
	int fact=1;
	for(int i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	return fact;
}
int main()
{
	int no,ans;
	cout<<"Enter any number : ";
	cin>>no;
	ans=fact(no);
	cout<<"Factorial of "<<no<<" is "<<ans;
	return 0;
}
