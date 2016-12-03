#include <iostream>
#include <string>
using namespace std;

int main() {
	string a, b;
	cin >> a >> b;

	string a_prime = b.substr(0, 1) + a.substr(1);
	string b_prime = a.substr(0, 1) + b.substr(1);
	string c = a + b;

	cout << a.size() << " " << b.size() << endl;
	cout << c << endl;
	cout << a_prime << " " << b_prime << endl;

    return 0;
}