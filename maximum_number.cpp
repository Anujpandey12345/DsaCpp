#include<iostream>
using namespace std;

int main(){
	
	int arr[] = {12, 121, 1, 3, 4};
	int max = arr[0];
	for(int i = 0; i < 5; i++){
		if(arr[i] > max){
			max = arr[i];
		}
	}
	cout<<"The maximum is :: "<<max<<" ";
	
//	We can also find the maximum Element in sorted array by using the begin and end and return the arr.size()-1 (because
//in sorted array we know the maximum element in the last so we use this method also .
}