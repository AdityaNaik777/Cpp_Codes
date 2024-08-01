#include <iostream>

using namespace std;

int main()
{
	//to print first 10 numbers in fibonacci series
	int num1 = 0,num2 = 1,n;
	cout<<"Fibonacci Series of first 10 numbers ";
	cout << num1 <<endl;
	cout << num2 << endl;
	for (int i=3;i<=10;i++)
	{
		n=num1+num2;
		num1=num2;
		num2=n;
		cout<<n<<endl;
	}
}

