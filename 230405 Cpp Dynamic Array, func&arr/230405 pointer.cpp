#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#define SIZE 20

int main() {
	using namespace std;
	char animal[SIZE];
	char* ps;

	cout << "동물 이름을 입력하십시오\n";
	cin >> animal;

	ps = new char[strlen(animal) + 1];
	strcpy(ps, animal);

	cout << "입력하신 동물 이름을 복사하였습니다." << endl;
	cout << "입력하신 동물 이름은 " << animal << "이고, 그 주소는 " << (int*)animal << "입니다." << endl;
	cout << "복사된 동물 이름은" << ps << "이고, 그 주소는 " << (int*)ps << "입니다.";

	//delete[] ps;
	return 0;
}