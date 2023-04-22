#include <iostream>
#include <cmath>
using namespace std;
bool isPrime(int a);
int main() {
	int N;
	int prmcnt = 1;
	cin >> N;
	for(int i = 2; i<1000; i++){
		if(isPrime(i)){
			prmcnt++;
		}
	}
	int* primearr = new int[prmcnt];
	primearr[0] = 2;
	int primestack[prmcnt] = {0,};
	int j = 1;
	for(int i = 3; i<1000; i++){
		if(isPrime(i)){
			primearr[j] = i;
			j++;
		}
	}
	
	for(int i = 2; i<=N;i++){
		int j = 0;
		int tmp = i;
		while(tmp>1){
			if(tmp % primearr[j] == 0){
				tmp /= primearr[j];
				primestack[j]++;
			} else {
				j++;
			}
		}
	}
	
	cout << N << "! = ";
	for(int i = 0; i<prmcnt; i++){
		if(primestack[i]==0)
			continue;
		cout << primestack[i]<<" ";
	}
	return 0;
}

bool isPrime(int a){
	if(a%2==0)
		return false;
	for(int i = 3; i<=sqrt(a); i+=2){
		if(a%i==0){
			return false;
		}
	}
	return true;
}
