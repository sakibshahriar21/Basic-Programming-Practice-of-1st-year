#include<iostream>
using namespace std;
int main () 
{
	int num,sum=0,LD,temp;
	cout<<"Enter a number: ";
	cin>>num;
	temp=num;
	while(temp!=0)
	{
		LD=temp%10;
		sum=sum+(LD*LD*LD);
		temp=temp/10;
	}
	if(sum==num)
	{
		cout<<num<<" is an Armstrong number";
	}
	else
	{
		cout<<num<<" is not an Armstrong number";
	}
	getchar ();
	getchar ();
	return 0;
}