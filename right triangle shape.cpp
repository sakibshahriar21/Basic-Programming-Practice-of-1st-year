#include<iostream>
using namespace std;
int main () 
{
	int i,j,n;
	cout<<"Enter the number of row of the shape"<<endl;
	cin>>n;
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<" * ";
		}
		cout<<endl;
	}
	getchar (); 
	getchar ();
	return 0;
}
