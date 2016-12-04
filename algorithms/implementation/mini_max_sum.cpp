#include <cmath>
#include <string>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <iostream>
#include <algorithm>

using namespace std;

long long min(long long a, long long b) {
	if (a < b)
		return a;
	return b;
}

long long max(long long a, long long b) {
	if (a > b)
		return a;
	return b;
}

int main() {
    long int a;
    long int b;
    long int c;
    long int d;
    long int e;
    cin >> a >> b >> c >> d >> e;

    long long sum = a + b + c + d + e;
    long long sums[5] = {sum - a, sum - b, sum - c, sum - d, sum - e};

    long long max_sum = max(sums[0],
    						max(sums[1],
    							max(sums[2],
    								max(sums[3], sums[4]))));

    long long min_sum = min(sums[0],
    						min(sums[1],
    							min(sums[2],
    								min(sums[3], sums[4]))));

    cout << min_sum << " " << max_sum << endl;

    return 0;
}
