#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int N;
	int tmp;
	int tmp2;
	cin >> N;
	int* arr = new int[N];
	int* chk = new int[N]();
	
	for(int i =0; i<N; i++){
		cin>>arr[i];
	}
	for(int i = 1; i<N; i++){
		tmp2 = arr[i]-arr[i-1];
		tmp = abs(tmp2);
		if(tmp <= N)
			chk[tmp]++;
	}
	for(int i = 1; i<N; i++){
		if(chk[i] != 1){
			cout << "NO";
			return 0;
		}
	}
	cout << "YES";
	return 0;
}
