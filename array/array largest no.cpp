//find largest element in the array

#include <iostream>
using namespace std;


int largestNo(int arr[], int n) //Declaring the function
{
	
	int max = arr[0]; //Initializing the maximum value before loop
	
	for(int i=0; i<n; i++) //Traversing through the array using loop
	
		if(arr[i] > max)  //conditional statement for finding maximum element
		max = arr[i];  //finalizing the maximum element(notice that its in a loop so the max value changes when larger value is traversed in loop)
	
	return max;  //the maximum value will be called later in the code
		
}

int main(){
	
	int arr[]={38,64,93,48,62,58};  
	
	int n = sizeof(arr)/sizeof(arr[0]);  //to find the total no of elements in the array
	
	cout<<"The largest element in the array is "<<largestNo(arr,n);  //Calling the function and the answer will be in output through this
	
	
	
	return 0;
}
