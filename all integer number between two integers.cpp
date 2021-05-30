#include<iostream>
using namespace std; 
int main () 
{
	int i, start , end , temp;
	cin>>start>>end;

	if(start>end)
	{
		temp=start;
		start=end;
		end=temp;
	}

	for(i=start;i<=end;i++)
	{
		if(i%2!=0)
		{
		cout<<" "<<i;
		}
	}

	getchar ();
	getchar ();
	return 0;
}