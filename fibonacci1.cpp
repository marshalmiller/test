// First N Fibonacci Numbers, recursive, inefficient
#include <iostream>
using namespace std;

const unsigned int N = 20;

unsigned int fib (unsigned int n);

int main () {
	cout << "Generating the first " << N << " Fibonacci numbers." << endl;
	for (unsigned int i = 0; i < N; i++) {
		cout << " " << fib(i);
		cout.flush();
	}
	cout << endl;
}

unsigned int fib (unsigned int n) {
	return n <= 1 ? 1 : fib(n - 1) + fib(n - 2);
}
