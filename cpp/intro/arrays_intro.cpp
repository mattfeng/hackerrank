#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int N;
	cin >> N;

	int inputs[N];

	for (int i = 0; i < N; ++i)
		cin >> inputs[i];

	for (int i = N - 1; i >= 0; --i) {
		cout << inputs[i];
		if (i > 0)
			cout << " "; // separate by space except for the last
	}
	cout << endl;

    return 0;
}