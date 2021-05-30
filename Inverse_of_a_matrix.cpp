#include<iostream>
using namespace std;
int main()
{
	int i=0,j=0,x[3][3],y[3][3];
	double c[3][3];
	long int det;
	for(i=0;i<3;i++)               //For inputting matrix
	{
		for(j=0;j<3;j++)
		{
		cout<<"Element "<<i<<j<<":"<<endl;
		cin>>x[i][j];
		}
	}

	y[0][0]=x[1][1]*x[2][2]-x[1][2]*x[2][1];        //***********************************
	y[0][1]=-1*(x[1][0]*x[2][2]-x[1][2]*x[2][0]);   //                                  *
	y[0][2]=x[1][0]*x[2][1]-x[1][1]*x[2][0];        //                                  *
	y[1][0]=-1*(x[0][1]*x[2][2]-x[2][1]*x[0][2]);   //                                  *
	y[1][1]=x[0][0]*x[2][2]-x[0][2]*x[2][0];        //    CALCULATION OF COFACTOR       *
	y[1][2]=-1*(x[0][0]*x[2][1]-x[0][1]*x[2][0]);   //                                  *
	y[2][0]=x[0][1]*x[1][2]-x[0][2]*x[1][1];        //                                  *
	y[2][1]=-1*(x[0][0]*x[1][2]-x[0][2]*x[1][0]);   //                                  *
	y[2][2]=x[0][0]*x[1][1]-x[0][1]*x[1][0];        //***********************************

    det=x[0][0]*y[0][0]-x[0][1]*y[0][1]+x[0][2]*y[0][2];
	cout<<det<<endl;
	cout<<y[0][0]<<endl;
	cout<<y[0][1]<<endl;
	cout<<y[0][2]<<endl;
	cout<<y[1][0]<<endl;
	cout<<y[1][1]<<endl;
	cout<<y[1][2]<<endl;
	cout<<y[2][0]<<endl;
	cout<<y[2][1]<<endl;
	cout<<y[2][2]<<endl;

	for(i=0;i<3;i++)                        //For storing adjoint in another 2-D Array
	{
		for(j=0;j<3;j++)
		c[i][j]=y[j][i];
	}

    for(i=0;i<3;i++)                       //For calculating inverse of matrix (2-D Array)
    {
		for(j=0;j<3;j++)
		c[i][j]=c[i][j]/det;
    }
   if(det!=0)
   {
    cout<<"\nInverse is :: ";
    for(i=0;i<3;i++)
    {
		cout<<endl<<endl<<endl;
		for(j=0;j<3;j++)
			cout<<c[i][j]<<"    ";

	}
  }
  else
  cout<<"\nINVERSE NOT POSSIBLE AS DETERMINANT( |A| ) IS EQUAL TO ZERO";

    getchar ();
	getchar ();
	return 0;
}
