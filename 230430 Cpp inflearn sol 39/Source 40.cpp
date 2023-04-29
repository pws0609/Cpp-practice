#include <iostream>
#include <algorithm>
using namespace std;
int scan(int n, int* arr, int len);
int main() {
	int N1, N2;
	int ptr1 = 0, ptr2 = 0, ptr3 = 0;
	cin >> N1;
	int* arr1 = new int[N1];
	for(int i = 0; i<N1; i++){
		cin >> arr1[i];
	}
	cin >> N2;
	int* arr2 = new int[N2];
	for(int i = 0; i<N2; i++){
		cin >> arr2[i];
	}
	int* res = new int[N1+N2];
	
	sort(arr1, arr1+N1);
	sort(arr2, arr2+N2);
	
	while(ptr1 < N1 && ptr2 < N2){
		if(arr1[ptr1] == arr2[ptr2]){
			res[ptr3++] = arr1[ptr1++];
			ptr2++;
		}
		else if(arr1[ptr1] < arr2[ptr2]){
			ptr1++;
		}
		else if(arr1[ptr1] > arr2[ptr2]){
			ptr2++;
		}
	}
	
	for(int i = 0; i<ptr3; i++)
		cout << res[i] << " ";

	return 0;
}
