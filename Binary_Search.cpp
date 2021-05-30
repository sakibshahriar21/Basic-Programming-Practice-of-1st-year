#include<iostream>
using namespace std;

int Binary_search(int N, int a[100], int x){
	int low=0,mid=0;
	int high= N-1;
	int i=0;
	
	while(low<=high){
		mid=(low+high)/2;
		if(x==a[mid]){
			return mid;
		}
		else if(x>a[mid]){
			 low = mid+1;
		}
		else{
			high = mid-1;
		}
		i++;
	}
	return -1;
}

int main (){

	int i,j,n,a[100],temp,search,target;
	cout<<"Enter size of Array: "<<endl;
	cin>>n;
	cout<<"Enter the elements: "<<endl;
	for(i=0; i<n; i++){
		cin>>a[i];
	}

	for(i=0; i<n-1; i++){
		for(j=0; j<n-1; j++){
			if(a[j]>a[j+1]){
				temp= a[j];
				a[j]= a[j+1];
				a[j+1]= temp;
			}
		}
	}

	cout<<"After sorting:"<<endl;
	for(i=0; i<n; i++){
		cout<<a[i]<<endl;
	}

    cout<<"Enter the value you want to search: ";
	cin>>target;
	search=Binary_search(n,a,target);

	if(search== -1){
		cout<<"Element not found"<<endl;
	}
	else{
		cout<<"Element found at index: "<<search;
	}
	getchar ();
	getchar ();
	return 0;
}