#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	int num1, num2, sum;

	cout << "������� 1-�� �����: ";
	cin >> num1;

	cout << "������� 2-�� �����: ";
	cin >> num2;

	sum = num1 + num2;

	cout << "����� ����� �����: " << sum << endl;

	return 0;
}