#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#define SIZE 20

int main() {
	using namespace std;
	char animal[SIZE];
	char* ps;

	cout << "���� �̸��� �Է��Ͻʽÿ�\n";
	cin >> animal;

	ps = new char[strlen(animal) + 1];
	strcpy(ps, animal);

	cout << "�Է��Ͻ� ���� �̸��� �����Ͽ����ϴ�." << endl;
	cout << "�Է��Ͻ� ���� �̸��� " << animal << "�̰�, �� �ּҴ� " << (int*)animal << "�Դϴ�." << endl;
	cout << "����� ���� �̸���" << ps << "�̰�, �� �ּҴ� " << (int*)ps << "�Դϴ�.";

	//delete[] ps;
	return 0;
}