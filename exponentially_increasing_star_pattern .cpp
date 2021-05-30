#include<iostream>
#include<math.h>
using namespace std;
int main () 
{
	int i,j,row;
	cout<<"Enter the number of row: ";
	cin>>row;
	for(i=0;i<row;i++)
	{
		for(j=0;j<pow(2,i);j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	getchar ();
	getchar ();
	return 0;
}