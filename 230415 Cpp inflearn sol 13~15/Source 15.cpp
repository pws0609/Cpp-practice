#include <iostream>
#include <cmath>
using namespace std;
bool isPrime(int x);
int main() {
	int N;
	int prmcnt=0;
	cin >> N;
	for(int i = 2; i<=N; i++){
		if(isPrime(i)){
			prmcnt++;
		}
	}
	cout<<prmcnt;
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
