#include <iostream>
using namespace std;
int main() {
	int N;
	int cnt = 0;
	cin >> N;
	for(int i = 0; i<N; i++){
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
