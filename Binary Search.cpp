#include<iostream>
using namespace std;

binary(int arr[], int x , int low , int high){
	

		int mid = (low + high)/2;
		if(x==arr[mid]){
		cout<<"Element found : ";
		
		}
		else if(x>arr[mid]){
			binary(arr ,x ,mid+1 ,high);
		}
		else if(x<arr[mid]){
			binary(arr ,x , low, mid-1);
		}
}
int main(){
	int n ,x;
	int arr[n];
	cout<<"\nEnter the NO. of Elements : ";
	cin>>n;
	cout<<"\nEnter the Element : ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				int temp = arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	cout<<"\nEnter the Element you want to Search : ";
	cin>>x;
	binary(arr ,x , 0 , n);
}
