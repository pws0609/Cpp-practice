#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main() {
	int N, num = 1, ptr = 0;
	string result = "";
	cin >> N;
	int* arr = new int[N]();
	stack<int> road;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	int i = 0;
	int ptr2 = 0;
	while(num <= N) {
		//A 도시에 num 번째 기차가 있음
		for (i = ptr2; i < N; i++) {
			if (arr[i] == num) {
				break;
			}
		}
		
		//i(ptr) 번째 기차까지 밀어넣기
		for (ptr = ptr2; ptr <= i; ptr++) {
			road.push(arr[ptr]);
			//cout<<"P";
			result.append("P");
		}
		
		ptr2 = ptr;
		//cout<<ptr2<<endl;
		if(road.top() == num){
			road.pop();
			//cout<<"O";
			result.append("O");
		}
		else{
			cout<<"impossible";
			return 0;
		}
		
		while (!road.empty() && road.top() == num+1) {
			num = road.top();
			road.pop();
			//cout << "O";
			result.append("O");
		}
		num++;
	}
	cout<<result;
	return 0;
}
