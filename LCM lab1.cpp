#include <iostream>
#include <algorithm>
using namespace std;

int gcd(int num1, int num2) {
    int result = min(num1, num2);

    while (result > 0) {
        if (num1 % result == 0 && num2 % result == 0) {
            break;
        }
        result--;
    }
    return result;
}

int lcm(int num1, int num2) {
    return (num1 * num2) / gcd(num1, num2);
}

int main() {
    int num1, num2;
    cout << "Enter the numbers: ";
    cin >> num1 >> num2;

    cout << "LCM: " << lcm(num1, num2) << endl;

    return 0;
}
