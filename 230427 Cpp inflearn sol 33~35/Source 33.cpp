#include<iostream>
using namespace std;
int* sort(int* arr, int len);
int main() {
	int N;
	cin >> N;
	int* arr = new int[N];
	for (int i = 0; i < N; i++)
		cin >> arr[i];

	sort(arr, N);
	int grd = arr[0];
	int cnt = 0;
	int ptr = 1;
	while (cnt<2) {
		if (grd != arr[ptr]) {
			grd = arr[ptr];
			cnt++;
		}
		ptr++;
	}
	cout << grd;
	return 0;
}

int* sort(int* arr, int len) {
	for (int i = 0; i < len; i++) {
		int tmp = i;
		for (int j = i; j < len; j++) {
			if (arr[tmp] < arr[j])
				tmp = j;
		}
		swap(arr[tmp], arr[i]);
	}
	return arr;
}