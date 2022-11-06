#include <iostream>
using namespace std;

int main(){
	
	int n; //declaring variable
	cout<<"Enter the no of values you want in the array: ";
	cin>>n;  //taking value of total no values needed in array from user
	cout<<endl; 
	
	cout<<"Input the values: " << endl;
	
	int arr[n];
	for(int i=0; i<n ; ++i){
		cin>>arr[i];  //This whole para shows the loop through which the n value are taken from user
	}
	
	cout<<"The values in array are: " << endl;
	
	for(int j=0; j<n; ++j){
		cout<<arr[j]<<" "; //traversing the array / value in array are shown by the system
	}
	
	
	return 0;
}
