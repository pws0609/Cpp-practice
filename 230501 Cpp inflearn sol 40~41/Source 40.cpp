#include <iostream>
#include <algorithm>
using namespace std;
int scan(int n, int* arr, int len);
int main() {
	int N, M;
	cin >> N;
	int* arr1 = new int[N];
	for(int i = 0; i<N; i++){
		cin >> arr1[i];
	}
	cin >> M;
	int* arr2 = new int[M];
	for(int i = 0; i<M; i++){
		cin >> arr2[i];
	}
	int size = 0;
	N < M ? size = N : size = M;
	int* res = new int[size];
	
	sort(arr1, arr1+N);
	sort(arr2, arr2+M);
	
	int ptr1=0,ptr2=0,ptr3 = 0;
	
	while(ptr1<N && ptr2<M){
		if(arr1[ptr1] == arr2[ptr2]){
			res[ptr3] = arr1[ptr1];
			ptr1++;
			ptr2++;
			ptr3++;
		}
		else if(arr1[ptr1] < arr2[ptr2])
			ptr1++;
		else if(arr1[ptr1] > arr2[ptr2])
			ptr2++;
	}
	
	for(int i = 0; i<ptr3; i++)
		cout << res[i] << " ";

	return 0;
}
