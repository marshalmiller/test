// Function to reverse the characters of a string, iterative
#include <iostream>
#include <string>
using namespace std;

string reverse (const string& s);

int main() {
	string str;
	cout << "Enter a string: ";
	getline(cin, str);
	cout << reverse(str) << endl;
}

string reverse (const string& s) {
	string s_reverse;
	for (size_t i = 0; i < s.size(); i++)
		s_reverse = s[i] + s_reverse;
	return s_reverse;
}