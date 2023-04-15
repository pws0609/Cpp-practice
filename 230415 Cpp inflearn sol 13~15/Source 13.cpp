#include <iostream>
#include <stdlib.h>
using namespace std;
int main() {
	char N[100];
	int intarr[10]={0, };
	cin >> N;
	for(int i = 0; i<100;i++){
		intarr[N[i]-48]++;
	}
	int res = 0;
	int tmp2 = 0;
	for(int i = 0; i<10;i++){
		if(tmp2 <= intarr[i]){
			tmp2 = intarr[i];
			res = i;
		}
	}
	cout << res;
}
