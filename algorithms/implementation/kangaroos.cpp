#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int x1;
    int v1;
    int x2;
    int v2;
    cin >> x1 >> v1 >> x2 >> v2;

    int vdiff = v2 - v1;
    int xdiff = x1 - x2;

    // if they start at different spots but travel at same speed,
    // they cannot reach each other
    if (vdiff == 0) {
    	cout << "NO" << endl;
    	return 0;
    }

    // if v2 travels faster AND
    // their speed difference divides the initial difference
    // then its possible
    if (vdiff > 0 && xdiff % vdiff == 0) {
    	cout << "YES" << endl;
    } else {
    	cout << "NO" << endl;
    }

    return 0;
}
