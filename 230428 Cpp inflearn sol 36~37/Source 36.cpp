#include <iostream>
using namespace std;
int* sort(int* arr, int N);
int main() {
	int N;
	cin >> N;
	int* arr = new int[N];
	for(int i = 0; i<N; i++){
		cin >> arr[i];
	}
	
	sort(arr, N);
	
	for(int i = 0; i<N; i++){
		cout << arr[i] << " ";
	}
}

int* sort(int* arr, int N){
	int tmp = 0;
	int j = 0;
	for(int i = 0; i < N ; i++){
		tmp = arr[i];
		for(j = i-1; j >= 0; j--){
			if(tmp<arr[j])
				arr[j+1] = arr[j];
			else
				break;
		}
		arr[j+1] = tmp;
	}
}
