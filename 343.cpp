#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	int num1, num2, sum;

	cout << "Enter first num: ";
	cin >> num1;

	cout << "Enter second num: ";
	cin >> num2;

	sum = num1 + num2;

	cout << "sum: " << sum << endl;

	return 0;
}
