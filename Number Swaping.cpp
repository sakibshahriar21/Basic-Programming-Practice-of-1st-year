#include<iostream>
using namespace std;
int main ()
{
	int a,b;
	cout<<"Enter the tow integers"<<endl;
	cin>>a>>b;

	cout<<"Before swapping: "<<endl;
	cout<<"1st Number= "<<a<<endl<<"2nd Number= "<<b<<endl;;

	a=a+b;
	b=a-b;
	a=a-b;

	cout<<"After swapping: "<<endl;
	cout<<"1st Number= "<<a<<endl<<"2nd Number= "<<b;


	getchar ();
	getchar();
	return 0;
}

	
