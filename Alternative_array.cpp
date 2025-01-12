//#include<iostream>
//
//using namespace std;
//
//
//int printArray(int arr[], int n){
//	for(int i = 0; i < n; i++){
//		cout<<arr[i]<<" ";
//	}
//}
//int arrayAlter(int arr[], int size){
//	for(int i = 0; i < size; i +=2){
//		if(i+1 < size){
//			int temp = arr[1];
//			arr[1] = arr[0];
//			arr[0] = temp;
//			
//		}
//	}
//}
//int main(){
//	
//	int even[8] = {5, 3, 4, 2, 1, 0, 3, 9};
//	int odd[5] = {21, 32, 43, 54, 76};
//	
//	
//	arrayAlter(even, 8);
//	printArray(even, 8);
//	
//	cout<<endl;
//	arrayAlter(odd, 5);
//	printArray(odd, 5);
//	
//	
//}

#include <iostream>

int main() {
    int arr[] = {12, 13, 9, 1234, 1};
    sort(arr.begin(), arr.end());
    return arr[5];

    return 0;
}