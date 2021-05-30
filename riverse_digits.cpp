#include<iostream>
using namespace std;
int main ()
{
	int num,reverse=0,right_digit;

	cout<<"Enter a number " ;
	cin>>num;
	while(num!=0)
	{
		right_digit=num%10;
		reverse=(reverse*10)+right_digit;
		num=num/10;
	}

	cout<<"Reverse Number: "<<reverse;
	getchar ();
	getchar ();
	return 0;
}
