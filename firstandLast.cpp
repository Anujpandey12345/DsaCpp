#include<iostream>
using namespace std;
int mountainPeak(int arr[], int n){
	int start = 0;
	int end = n - 1;
	int mid = start + (end - start)/2;
	while( start < end){
		if(arr[mid] < arr[mid+1]){
			start = mid + 1;
		}else{
			end = mid;
		}
		mid = start + (end - start)/2;
	}
	return start;
}


int main(){
	int even[] = {0, 1, 2, 10, 111, 0};
	int odd[] = {12, 13, 14, 13, 199, 11234, 10};
	cout<<"The peak Mountain Element of Even Number is :: "<<mountainPeak(even, 6)<<endl;
	cout<<"The peak Mountain Element of Odd Number is :: "<<mountainPeak(odd, 7)<<endl;
	
	return 0;
}