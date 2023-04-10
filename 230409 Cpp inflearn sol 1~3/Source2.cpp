#include<iostream>
using namespace std;
int main(){
	int A;
	int B;
	int res = 0;
	cin >> A >> B;
	for (int i = 0; i < B - A; i++) {
		cout << A + i << " + ";
		res += A + i;
	}
	res += B;
	cout << B << " = " << res;
	return 0;
}