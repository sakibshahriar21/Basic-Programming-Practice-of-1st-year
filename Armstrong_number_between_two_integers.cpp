#include<iostream>
using namespace std;

int get_cubic_sum_of_digits(int num)
{
	int LD,sum=0;
	while(num!=0)
	{
		LD=num%10;
		sum=sum+(LD*LD*LD);
		num=num/10;
	}
	return sum;
}

int main ()
{
	int x,y,sum,i;
	cout<<"Enter tow integers:"<<endl;
	cin>>x>>y;
	cout<<"Armstrong number between "<<x<<" and "<<y<<endl;
	for(i=x;i<=y;i++)
	{
		sum=get_cubic_sum_of_digits(i);
		if(sum==i)
		{
			cout<<i<<endl;
		}
	}
	getchar ();
	getchar ();
	return 0;
}
