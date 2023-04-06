#include <iostream>

using namespace std;

const int SIZE = 8;
int sumArr(int*, int n = 3);

int main() {
	int arr[SIZE] = { 1,2,4,8,16,32,64 };
	int sum = sumArr(arr);

	cout << "함수의 총 합은 " << sum << "입니다." << endl;
	return 0;
}

int sumArr(int arr[], int n) {
	int tot = 0;

	for (int i = 0; i < n; i++)
		tot += arr[i];

	return tot;
}