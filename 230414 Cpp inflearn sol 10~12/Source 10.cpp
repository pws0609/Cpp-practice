#include <iostream>
using namespace std;
int digit_sum(int x);
int main() {
	int num;
	int tmp = 0;
	int tmp2 = 0;
	int res = 0;
	cin >> num;
	int* numarr=new int[num];
	for(int i = 0; i<num; i++){
		cin >> numarr[i];
	}
	for(int i = 0; i<num; i++){
		tmp = digit_sum(numarr[i]);
		if(tmp2 < tmp){
			tmp2 = tmp;
			res = numarr[i];
		}
		else if(tmp2 == tmp){
			if(res < numarr[i])
				res = numarr[i];
		}
	}
	cout<<res;
	return 0;
}

int digit_sum(int x){
	int res = 0;
	while(x>0){
		res += x % 10;
		x /= 10;
	}
	return res;
}
