//Find ncr value using function
//where, ncr=n!/r!+(n-r)!

#include<iostream>

using namespace std;
int fact(int no)
{
	int i,ans;
	if(no>0)
	{
		int fact = 1;
		for(i=1;i<=no;i++)
		{
			fact=fact*i;
			ans=fact;
		}
	}
	else
	{
		ans=1;
	}
	return ans;
	
}
int ncr(int n, int r)
{
	//So, for finding factorial i am writing another function
	
	int numerator,denominator;
	numerator=fact(n);
	denominator=fact(r)*8fact(n-r);
	return numerator/denominator;
}
int main()
{
	int n,r,res;
	cout<<"Enter the number whoes ncr you want "<<"n and r : "<<endl;
	cin>>n>>r;
	res=ncr(n,r);
	cout<<"ncr is : "<<res;
	return 0;
}
