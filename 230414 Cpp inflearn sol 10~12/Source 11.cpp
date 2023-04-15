#include <iostream>
using namespace std;
int numcnt(int a);
int main() {
	int N;
	int res = 0;
	cin >> N;
	for(int i = 1; i<=N;i++){
		res += numcnt(i);
	}
	cout << res;
}
int numcnt(int a){
	int res =0;
	while(a>0){
		a/=10;
		res++;
	}
	return res;
}
