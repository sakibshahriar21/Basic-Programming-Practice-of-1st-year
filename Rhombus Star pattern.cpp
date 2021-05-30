#include<iostream>
using namespace std;
int main ()
{
	int i,j,row;
	cin>>row;
	for(i=1;i<=row;i++)
	{
		for(j=i;j<row;j++)
		{
			cout<<" " ;
		}
		for(j=1;j<=row;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	getchar ();
	getchar ();
	return 0;
}