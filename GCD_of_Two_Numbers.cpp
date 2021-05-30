#include<iostream>
using namespace std;
int main () 
{
	int num1,num2,gcd;
	
	cout<<"Enter the 1st number: "<<endl;
	cin>>num1;
	cout<<"Enter the 2nd number: "<<endl;
	cin>>num2;

	for(int i=1;i<=num1 && i<=num2;i++)
	{
		if(num1%i==0 && num2%i==0)
		{
			gcd=i;
		}
	}
	cout<<"The Greatest Common Divisior is: "<<gcd<<endl;
	getchar ();
	getchar ();
	return 0;
}