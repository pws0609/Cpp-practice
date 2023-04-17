#include<iostream>
using namespace std;
int sum(int num);
struct answer {
	int num;
	int answer;
};
int main() {
	int N;
	cin >> N;
	answer *a = new answer[N];
	for (int i = 0; i < N; i++) {
		cin >> a[i].num;
		cin >> a[i].answer;
		if (a[i].answer == sum(a[i].num))
			cout << "YES";
		else
			cout << "NO";
	}
	return 0;
}
int sum(int num) {
	int res = 0;
	for (int i = 1; i < num+1; i++) {
		res += i;
	}
	return res;
}