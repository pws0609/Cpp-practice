#include <iostream>
#define SIZE 20

using namespace std;

struct MyStruct
{
	char name[20];
	int age;
};

int main() {
	int a = 0;
	cout << "인원수를 입력해주세요." << endl;
	cin >> a;

	MyStruct* temp = new MyStruct;
	temp = new MyStruct[a];

	for (int i = 0; i < a; i++) {
		cout << i << " 당신의 이름을 입력하세요\n";
		cin >> (*(temp + i)).name;

		cout << i << " 당신의 나이를 입력하세요\n";
		cin >> (temp + i)->age;
	}
	for (int i = 0; i < a; i++) {
		cout << "안녕하세요! " << (temp + i)->name << "씨!\n";
		cout << "당신은 " << (temp + i)->age << "살 이군요!\n";
	}

	delete[] temp;
	return 0;
}