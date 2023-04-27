#include<iostream>
using namespace std;
int main() {
	int N;
	cin >> N;
	int* arr = new int[N];
	int* arr2 = new int[N];
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	int j = 0;
	for (int i = 0; i < N; i++) {
		if (arr[i] < 0) {
			arr2[j] = arr[i];
			j++;
		}
	}
	for (int i = 0; i < N; i++) {
		if (arr[i] > 0) {
			arr2[j] = arr[i];
			j++;
		}
	}

	for (int i = 0; i < N; i++) {
		cout << arr2[i] << " ";
	}
}