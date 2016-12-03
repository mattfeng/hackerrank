#include <iostream>
using namespace std;

int main() {
	int n, q; // n = # of variable sized arrays, q = # of queries
	cin >> n >> q;

	int* a[n]; // initialize an array of pointers of size `n`

	for (int i = 0; i < n; ++i) {
		int k;
		cin >> k;

		// dynamically allocate a new k-sized array
		// note that the `new` keyword requires `delete` to free
		// memory afterwards
		// the memory is stored in the HEAP
		int *a_i = new int[k];

		for (int j = 0; j < k; ++j) {
			cin >> a_i[j];
		}

		a[i] = a_i;
	}

	for (int l = 0; l < q; ++l) {
		int i, j;
		cin >> i >> j;
		cout << a[i][j] << endl;
	}
}