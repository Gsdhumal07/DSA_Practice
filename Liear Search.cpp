#include <iostream>
using namespace std;


int main(){
	int n,p ,flag=0 ;
	cout<<"\nEnter the no of Element : ";
	cin>>n;
	int arr[n];
	cout<<"\nEnter the Array Element : ";
	for (int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"\nEnter the No you want to Search : ";
	cin>>p;
	for(int i=0;i<n;i++){
		if(arr[i]==p){
			cout<<"\nElement found at Position "<<i+1<<" ";
			flag=1;
		}
	}
	if(flag==0){
		cout<<"\nElement Not Found : ";
	}
}

