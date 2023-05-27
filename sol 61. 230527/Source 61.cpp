#include<iostream>
using namespace std;
int N, M;
int* arr;
int* chk;
int cnt = 0;
void DFS(int a);
int main(){
	cin >> N >> M;
	arr = new int[N + 1]();
	chk = new int[N + 1]();
	for(int i = 1; i <= N; i++)
		cin >> arr[i];
	DFS(1);
	if(cnt == 0)
		cout << -1;
	else
		cout << cnt;
}

void DFS(int a){
	if(a == N + 1){
		int sum = 0;
		for(int i = 1; i <= N; i++){
			if(chk[i] == 1)
				sum += arr[i];
			else if(chk[i] == 0)
				sum -= arr[i];
		}
		if(sum == M)
			cnt++;
	}
	else{
		chk[a] = 1;
		DFS(a+1);
		chk[a] = 0;
		DFS(a+1);
		chk[a] = -1;
		DFS(a+1);
	}
	return;
}
