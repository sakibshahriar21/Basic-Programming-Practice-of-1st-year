#include<iostream>
using namespace std;
int main (){
	int i,ch;
	cout<<"Enter your choice: ";
	cin>>ch;

	if(ch==1){
		cout<<"For Uppercase letters: "<<endl;
		for(i=0; i<26; i++){
			cout<<(char)('A'+i)<<" = "<<('A'+i)<<endl;
		}
	}

	else if(ch==2){
        cout<<"For Lowercase letters: "<<endl;
        for(i=0; i<26; i++){
            cout<<(char)('a'+i)<<" = "<<('a'+i)<<endl;
        }
    }

    else{
        cout<<"Invalid input!"<<endl;
    }

    getchar ();
    getchar ();
    return 0;
}
