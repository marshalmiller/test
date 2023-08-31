// Print non-negative integer digits reversed, iterative
#include <iostream>
using namespace std;

void reverse (unsigned int n);

int main() {
	unsigned int num;
	cout << "Enter number: ";
	cin >> num;
	reverse(num);
	cout << endl;
}

void reverse (unsigned int n) {
	while (n) {
		cout << n % 10;
		n = n / 10;
	}
}