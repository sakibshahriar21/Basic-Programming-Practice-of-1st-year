#include<stdio.h>

int main()
{
    int n,i,j,m;
    int *ptr[100][100];
	int t[100][100];



    printf("Please Enter the Array row or column size: ");
    scanf("%d",&m);
	scanf("%d",&n);


    printf("Please Enter Elements: \n",n);
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d",*(*(ptr+i)+j));
        }

    }
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			t[j][i]= (*(ptr+i)+j);
		}
	}

    printf("\nYour Array: \n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d ",*(*(ptr+i)+j)); ///print
        }
        printf("\n");

    }
	getchar ();
	getchar ();
    return 0;

}


