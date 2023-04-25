#include<iostream>
#include<string>
using namespace std;
int main() {
	string N;
	int flg = 0;
	int res = 0;
	cin >> N;
	if (N.substr(N.length() - 1) == "H") {
		res += 1;
		flg = 1;
	}
	switch (N.find("H")) {
	case 1:
		res += 12;
		if(flg == 0)
			res += stoi(N.substr(2));
		break;
	case 2:
		res += (N[1] - 48) * 12;
		if (flg == 0)
			res += stoi(N.substr(3));
		break;
	case 3:
		res += ((N[1] - 48) * 10 + (N[2] - 48)) * 12;
		if (flg == 0)
			res += stoi(N.substr(4));
		break;
	case 4:
		res += 1200;
		if (flg == 0)
			res += stoi(N.substr(5));
		break;
	}
	cout << res;
}