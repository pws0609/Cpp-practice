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
	if(a<10)
		return 1;
	else if(a<100)
		return 2;
	else if(a<1000)
		return 3;
	else if(a<10000)
		return 4;
	else if(a<100000)
		return 5;
	else if(a<1000000)
		return 6;
	else if(a<10000000)
		return 7;
	else if(a<100000000)
		return 8;
	else
		return 9;
}
