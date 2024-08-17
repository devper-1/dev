#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	int num1, num2, sum;

	cout << "¬ведите 1-ое число: ";
	cin >> num1;

	cout << "¬ведите 2-ое число: ";
	cin >> num2;

	sum = num1 + num2;

	cout << "—умма чисел равна: " << sum << endl;

	return 0;
}