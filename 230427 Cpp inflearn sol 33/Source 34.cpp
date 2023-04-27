#include<iostream>
using namespace std;
int* sort(int* a, int len);
int main() {
	int N;
	cin >> N;
	int* arr = new int[N];
	int* arr2 = new int[N];
	for (int i = 0; i < N; i++)
		cin >> arr[i];

	arr2 = sort(arr, N);

	for (int i = 0; i < N; i++)
		cout << arr2[i] << " ";
	return 0;
}

int* sort(int* a, int len) {
	for (int i = 0; i < len; i++) {
		for (int j = 0; j < len - i - 1; j++) {
			if (a[j] > a[j + 1]) {
				swap(a[j], a[j + 1]);
			}
		}
	}
	return a;
}