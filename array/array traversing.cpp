#include <iostream>
using namespace std;

int main(){
	
	int arr[4]={14,56,47,88};
	
	for(int i=0; i<4; i++){
		cout << arr[i] << " "; //first way
	}
	
	cout<<endl;
	
	for(int i=0; i<4; i++){
		cout << i[arr] << " ";  //second way
	}
	
	
	return 0;
}
