
#include <iostream>
#include <algorithm>
using namespace std;

int newFunc(int num1, int num2) {
	int result = min(num1, num2);

	while (result > 0) {

		if (num1 % result == 0 && num2 % result == 0) {
			break;
		}
		result--;
	}
	return result;
}

int main()
{
	int num1, num2;
	cout << "Enter the numbers";
	cin >> num1 >> num2;

	cout << newFunc(num1, num2);


}





