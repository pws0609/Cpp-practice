#include <iostream>
using namespace std;
int main() {
	int N;
	long long int cnt = 0;
	cin >> N;
	for(int i = 1; i<=N; i++){
		int tmp = i;
		while(tmp>0){
			if(tmp % 10 == 3){
				cnt++;
			}
			tmp /= 10;
		}
	}
	cout << cnt;
	return 0;
}
