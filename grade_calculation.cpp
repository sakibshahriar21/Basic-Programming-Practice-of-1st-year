#include<iostream>
using namespace std;
int main () 
{
	int i,score[100],avg,n;
	float total =0;
	cout<<"Enter the number of subjects"<<endl;
	cin>>n;
	cout<<"Enter the marks of "<<n<<" subjects"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>score[i];
	}
	for(i=0;i<n;i++)
	{
		total+=score[i];
	}
	avg=total/n;
	cout<<"Grade: ";
	switch(avg/10)
	{
		case 10:
		case 9:
			cout<<"A=4.00";
			break;
		case 8:
			cout<<"B=3.00";
			break;
		case 7:
		    cout<<"C=2.50";
			break;
		case 6:
			cout<<"D=2.00";
			break;
		case 5:
			cout<<"E=1.00";
		    break;
		default:
			cout<<"F=0.00";
	}
	getchar ();
	getchar ();
	return 0;
	
}

	
