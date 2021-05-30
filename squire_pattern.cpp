#include<iostream>
using namespace std;
int main ()
{
	int size;
	cout<<"Print a pattern like square with * character: "<<endl;
    cout << "--------------------------------------------------"<<endl;
    cout << " Input the number of characters for a side: ";
	cin>>size; 
	for(int row=1;row<=size;row++)
	{
		for(int col=1;col<=size;col++)
		{
			cout<<" * ";
		}
		cout<<endl;
	}
	getchar ();
	getchar ();
	return 0;
}
