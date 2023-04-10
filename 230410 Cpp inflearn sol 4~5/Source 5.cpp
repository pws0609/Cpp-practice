#include<iostream>
#include<string>
#include<typeinfo>
#define numlen 14
using namespace std;
int main() {
	string num;
	cin >> num;
	switch (num[7]) {
		case '1':
			cout << 120 - stoi(num.substr(0, 2)) << " M";
			break;
		case '2':
			cout << 120 - stoi(num.substr(0, 2)) << " W";
			break;
		case '3':
			cout << 20 - stoi(num.substr(0, 2)) << " M";
			break;
		case '4':
			cout << 20 - stoi(num.substr(0, 2)) << " W";
			break;
		default:
			break;
	}
	return 0;
}