#include<iostream>
#include<stack>
using namespace std;
int main() {
	int N, num = 1,ptr = 0;
	cin >> N;
	int* arr = new int[N];
	stack<int> road;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	while(num < N) {
		int flg = 0;
		int i;
		//A ���ÿ� num ��° ������ ����
		for (i = ptr; i < N; i++) {
			if (arr[i] == num) {
				flg = 1;
				break;
			}
		}
		//i(ptr) ��° �������� �о�ֱ�
		for (ptr; ptr <= i; ptr++) {
			road.push(arr[ptr]);
		}
		while (true) {
			if (num + 1 == road.top()) {
				num = road.top();
				road.pop();
			}
			else {
				break;
			}
		}
		cout << num;
	}
}