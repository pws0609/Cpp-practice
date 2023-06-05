#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int N, M, sum = 0;
	cin >> N >> M;
	int diff = M - N;
	if(diff >= 0){
		if(diff % 5 <= 2){
			sum += diff / 5;
			sum += diff % 5;
		}
		else{
			sum += diff / 5 + 1;
			sum += 5 - diff % 5;
		}
	}
	else
		sum = abs(diff);
	cout << abs(sum);
}
