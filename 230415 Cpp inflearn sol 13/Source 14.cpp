#include <iostream>
#include <stdlib.h>
#include <cmath>
using namespace std;
int reverse(int x);
bool isPrime(int x);

int main() {
	int N;
	cin >> N;
	int* intarr = new int[N];
	for(int i = 0; i<N; i++){
		cin >> intarr[i];
	}
	int reversednum = 0;
	for(int i = 0; i<N;i++){
		reversednum = reverse(intarr[i]);
		if(isPrime(reversednum))
			cout<<reversednum<<" ";
	}
	return 0;
}

int reverse(int x){
	int len=0;
	int storex = x;
	while(x>0){
		x/=10;
		len++;
	}
	char num[len];
	itoa(storex,num,10);
	int tmp = 0;
	for(int i = 0; i<len/2; i++){
		tmp = num[i];
		num[i] = num[len-1-i];
		num[len-1-i]=tmp;
	}
	return atoi(num);
}

bool isPrime(int x){
	bool res;
	if(x == 1)
		return false;
	for(int i = 2; i<=sqrt(x);i++){
		if(x%i == 0){
			return false;
		}
	}
	return true;
}
