#include<iostream>
#include<vector>
using namespace std;
int smallest();
int p2 = 0, p3 = 0, p5 = 0;
vector<int> arr;
int main() {
	int N;
	cin >> N;

	arr.push_back(1);

	for (int i = 1; i < N; i++)
		arr.push_back(smallest());

	cout << arr.back();

	return 0;
}

int smallest() {
	int res = 0, flg = 1;
	if (arr[p2] * 2 < arr[p3] * 3) {
		res = arr[p2] * 2;
		flg = 2;
	}
	else {
		res = arr[p3] * 3;
		flg = 3;
	}

	if (res > arr[p5] * 5) {
		res = arr[p5] * 5;
		flg = 5;
	}

	if (arr[p2] * 2 == res) p2++;
	if (arr[p3] * 3 == res) p3++;
	if (arr[p5] * 5 == res) p5++;
	return res;
		
}