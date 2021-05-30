#include<iostream>
using namespace std;
int main ()
{
	int num1,num2,r,sum=0;
	cout<<"Find the sum of digits of a given number: "<<endl;
	cout<<"-------------------------------------------"<<endl;
	cout<<"Enter a number: ";
	cin>>num1;
	num2=num1;
	while(num1>0)
	{
		r=num1%10;
		sum=sum+r;
		num1=num1/10;
	}
	cout<<"The sum of digits of: "<<num2<<" is "<<sum<<endl;
	getchar ();
	getchar ();
	return 0;
}