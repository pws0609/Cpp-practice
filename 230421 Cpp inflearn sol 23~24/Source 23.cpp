#include <iostream>
using namespace std;
int main() {
	int N;
	cin >> N;
	int res = 1;
	int ptr = 0;
	int tmp = 1;
	int* arr = new int[N];
	for(int i =0;i<N;i++){
		cin>>arr[i];
	}
	ptr = arr[0];
	for(int i = 1; i < N; i++){
		if(arr[i]>=ptr)
			tmp++;
		else
			tmp = 1;
		if(res<tmp)
			res = tmp;
		ptr=arr[i];
	}
	cout << res;
}
