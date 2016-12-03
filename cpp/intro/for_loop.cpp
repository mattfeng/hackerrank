#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;

	string numbers[9] = {"one", "two", "three", "four", "five",
						 "six", "seven", "eight", "nine"};

	for (int i = a; i <= b; ++i) {
		if (i >= 1 && i <= 9)
			cout << numbers[i - 1] << endl;
		else if (i > 9)
			if (i % 2 == 0)
				printf("even\n");
			else
				printf("odd\n");
	}

    return 0;
}
