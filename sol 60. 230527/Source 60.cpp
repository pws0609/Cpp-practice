#include<iostream>
using namespace std;
int N, flg;
float tot;
int* arr;
int* chk;
void DFS(int a);
int main(){
	cin >> N;
	arr = new int[N+1]();
	chk = new int[N+1]();
	for(int i = 1; i <= N; i++){
		cin >> arr[i];
		tot += arr[i];
	}
	tot /= 2;
	flg = 0;
	DFS(1);
	if(flg == 0)
		cout<<"NO";
}

void DFS(int a){
	if(a==N){
		int sum = 0;
		for(int i = 1; i <= N; i++){
			if(chk[i] == 1)
				sum += arr[i];
		}
		if(sum == tot){
			cout << "YES";
			flg = 1;
			return;
		}
	}
	else{
		if(flg == 1)
			return;
		chk[a] = 1;
		DFS(a+1);
		chk[a] = 0;
		DFS(a+1);
	}
	return;
}
