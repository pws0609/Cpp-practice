#include <iostream>
using namespace std;
int scan(int n, int* arr, int len);
int main() {
	int N;
	cin >> N;
	int* arr = new int[N];
	int* origin = new int[N]();
	int sum = 0;
	for(int i = 0; i<N; i++){
		cin >> arr[i];
	}
	origin[arr[0]] = 1;
	for(int i = 1; i<N; i++){
		int cnt = arr[i];
		int cnt2 = cnt;
		int tmp = 0;
		while(cnt2>0){
			if(origin[tmp] != 0)
				cnt++;
			else
				cnt2--;
			tmp++;
		}
		if(origin[cnt] != 0){
			while(true){
				cnt++;
				if(origin[cnt] == 0)
					break;
			}
		}
		origin[cnt] = i+1;
	}
	for(int i = 0; i<N; i++){
		cout << origin[i] << " ";
	}
	
	return 0;
}
