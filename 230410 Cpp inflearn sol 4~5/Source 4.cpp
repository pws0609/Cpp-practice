#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int N;
	cin >> N;
	int* age = new int[N];
	for (int i = 0; i < N; i++) {
		cin >> age[i];
	}
	sort(age, age + N);
	cout << age[N - 1] - age[0];
	return 0;
}