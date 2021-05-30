#include<iostream>
using namespace std;
int main ()
{
	int r,c,rows,cols;
	int matrix[100][100],tmatrix[100][100];
	cout<<"Enter the rows and colum number of matrix:"<<endl;
	cin>>rows>>cols;
	cout << "Enter Matrix of size "<< rows << " X " << cols << endl;
	for(r=0;r<rows;r++)
	{
		for(c=0;c<cols;c++)
		{
			cin>>matrix[r][c];
		}
	}
	for(r=0;r<rows;r++)
	{
		for(c=0;c<cols;c++)
		{
			tmatrix[c][r]=matrix[r][c];
		}
	}
	cout<<"Transpose Matrix: "<<endl;
	for(r=0;r<cols;r++)
	{
		for(c=0;c<rows;c++)
		{
			cout<<tmatrix[r][c]<<" ";
		}
		cout<<endl;
	}
	getchar ();
	getchar ();
	return 0;
}
