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
	cout << "�ο����� �Է����ּ���." << endl;
	cin >> a;

	MyStruct* temp = new MyStruct;
	temp = new MyStruct[a];

	for (int i = 0; i < a; i++) {
		cout << i << " ����� �̸��� �Է��ϼ���\n";
		cin >> (*(temp + i)).name;

		cout << i << " ����� ���̸� �Է��ϼ���\n";
		cin >> (temp + i)->age;
	}
	for (int i = 0; i < a; i++) {
		cout << "�ȳ��ϼ���! " << (temp + i)->name << "��!\n";
		cout << "����� " << (temp + i)->age << "�� �̱���!\n";
	}

	delete[] temp;
	return 0;
}