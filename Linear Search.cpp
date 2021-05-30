#include <iostream>
using namespace std;
   
int main()
{
    int input[100], count, i, num;
       
    cout << "Enter Number of Elements in Array"<<endl;
    cin >> count;
     
    cout << "Enter " << count << " numbers"<<endl;
      
    
    for(i = 0; i < count; i++)
	{
        cin >> input[i];
    }
      
    cout << "Enter a number to serach in Array"<<endl;
    cin >> num;
      
   
    for(i = 0; i < count; i++)
	{
        if(input[i] == num)
		{
            cout << "Element found at index " << i;
          
        }
		
    }

	if(i == count)
	{
        cout  << "Element Not Present in Input Array"<<endl;
    }
      
    

	getchar ();
	getchar ();
 
    return 0;
}


