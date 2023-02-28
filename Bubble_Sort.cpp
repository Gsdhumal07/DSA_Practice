#include <iostream>
using namespace std;

int main(){
	int n;
	cout<<"\nEnter the No Of Element : ";
	cin>>n;
	int arr[n];
	cout<<"\nEnter the Elements : ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"\nThe Given Arr is: ";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<"\t";
	}

	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				int temp =arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	cout<<"\n\nThe Sorted Arry is : ";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<"\t";
	}
}



