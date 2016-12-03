#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int N;
	cin >> N;

	vector<int> list;
	for (int i = 0; i < N; ++i) {
		int in;
		cin >> in;
		list.push_back(in);
	}

	sort(list.begin(), list.end());

	int list_size = list.size();
	for (int i = 0; i < list_size; ++i)
		cout << list.at(i) << " ";
	cout << endl;

    return 0;
}
