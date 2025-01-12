#include<iostream>
using namespace std;
int binarySearch(int arr[], int size, int key){
	int ans = -1;
	int start = 0;
	int end = size - 1;
	int mid = (start + ((end - start) / 2));
	while(start <= end){
		if(arr[mid] == key){
			ans = mid;
			end = mid - 1;
		}
		if(key > arr[mid]){
			start = mid + 1;
		}
		else{
			end = mid - 1;
		}
		mid = (start + ((end - start) / 2));
	}
	return ans;
}

int main(){
	
	int even[6] = {1, 3, 3, 3, 4, 5};
//	int odd[5] = {23, 34, 56, 76, 88};
	
	int index = binarySearch(even, 6, 3);
	
	
//	int index1 = binarySearch(odd, 5, 56);
	

	
	
	cout<<"Index of even number is : "<< index<<endl ;
//	cout<<"Index of even number is : "<< index1 ;
	
}