#include<iostream>
#include<vector>
using namespace std;
int N, R;
int* num;
int* res;
int* chk;
void DFS(int a);
int main() {
	int tot = 1;
	cin >> N >> R;
	num = new int[N]();
	res = new int[R]();
	chk = new int[N]();
	for (int i = 0; i < N; i++) {
		cin >> num[i];
	}
	for (int i = 0; i < R; i++) {
		tot *= (N - i);
	}
	DFS(0);
	cout << tot;
	return 0;
}

void DFS(int a){
	if(a == R){
		for(int i = 0; i < a; i++)
			cout << res[i] << ' ';
		cout << '\n';
	}
	else{
		for(int i = 0; i < N; i++){
			if(chk[i] == 0){
				res[a] = num[i];
				chk[i] = 1;
				DFS(a+1);
				chk[i] = 0;
			}
		}
	}
}
