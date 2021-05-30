#include<iostream>
using namespace std;
int main () 
{
	int year,c1,c2,c3;
	cout<<"Enter The Year: "<<endl;
	cin>>year;

	c1=year%4;
	c2=year%100;
	c3=year%400;

	if((c1==0&&c2!=0)||c3==0)
	{
		cout<<year<<" is Leap year"<<endl;
	}
	else
	{
		cout<<year<<" is not Leap year"<<endl;
	}

	getchar ();
	getchar();
	return 0;
}