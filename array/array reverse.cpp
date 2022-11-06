#include <iostream>
using namespace std;

void reverse(int arr[], int n) // declaring the function which contains the process to reverse the array
{ 	
	int start = 0; //0 is the starting index of array
	int end = n-1;  //n-1 is the last index of array
	
	while(start<=end) //while the index of start is less than index of end the following condition will be executed
	{
		swap(arr[start],arr[end]); //start and end element will be say swapped (if we keep swapping the first and last element the whole array will  
		start++; //incrementing the start index                                                                                     //be reversed                                                                                                                     
		end--;	//decrementing the end index
	}	
}

void print(int arr[], int n)  //declaring the function for printing the array
{	
	for(int i=0; i<n; i++)  //loop till the array ends
	{  
		cout << arr[i] << " "; //print the elements
	}
}


int main(){
	
	int arr[]={5,3,2,6,8};
	int brr[]={57,35,94,11,60,85};
	
	
	reverse(arr,5);     //calling the function
	reverse(brr,6);
	
	print(arr,5);      //calling the function
	cout << endl;
	print(brr,6);
	
	
	return 0;
}
