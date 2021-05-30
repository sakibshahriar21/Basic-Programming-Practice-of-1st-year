#include<iostream>
using namespace std;
int main ()
{
	int i,count,sum,a[100];
	float avg;
	cout<<"Enter the number of elements: "<<endl;
	cin>>count;

	cout<<"Enter "<<count<<" elements"<<endl;
	for(i=0;i<count;i++)
	{
		cin>>a[i];
	}
	sum=0;
	for(i=0;i<count;i++)
	{
		sum+=a[i];
	}
	avg=sum/count;

	cout<<"Average= "<<avg;
	return 0;
}