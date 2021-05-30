#include<stdio.h>

 struct Student {
	 char name[100];
	 int id;
	 char sem[100];
	 char dept[100];
	 char uni[100];
 };
 
 int main () {
	 struct Student info[100];
	 int i,n;

	 printf("Enter how many student information you want to entry: ");
	 scanf("%d",&n);

	 getchar();

	  for(i=0; i<n; i++){
		  printf("Name: ");
		   gets(info[i].name);
		    printf("Registation ID: ");
			 scanf("%d",&info[i].id);
			  printf("Current Semester: ");
			   getchar();
			    gets(info[i].sem);
			     printf("Department: ");
			      gets(info[i].dept);
				   printf("University: ");
				    gets(info[i].uni);
	 }

	 printf("\nYour Saving Data: \n");

	  for(i=0; i<n; i++){
		  printf("Name: %s\n",info[i].name);
		   printf("Registration ID: %d\n",info[i].id);
		    printf("Current Semester: %s\n",info[i].sem);
			 printf("Department: %s\n",info[i].dept);
			  printf("University: %s\n",info[i].uni);
	  }

	  getchar();
	  getchar();
	  return 0;
 }


	  
	  
				 





