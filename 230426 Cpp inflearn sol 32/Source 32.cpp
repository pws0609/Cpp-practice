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
	for (int i = len - 1; i > 0; i--) {
		int tmp = 0;
		for (int j = 1; j <= i; j++) {
			if (a[tmp] < a[j]) {
				tmp = j;
			}
		}
		swap(a[i], a[tmp]);
	}
	return a;
}