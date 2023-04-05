#include <iostream>
using namespace std;

void arrchg(int* a);

int main(void) {
	int arr[5] = { 0, };
	arrchg(arr);
	for (int i = 0; i < 5; i++)
		cout << arr[i];
}

void arrchg(int* arr) {
	arr[1] = 3;

	return;
}