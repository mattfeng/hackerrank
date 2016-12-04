#include <cmath>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int s, t;
    cin >> s >> t;
    int a, b;
    cin >> a >> b;
    int m, n;
    cin >> m >> n;

    int apples_on_house = 0;
    int oranges_on_house = 0;

    vector<int> apple(m);
    for(int apple_i = 0; apple_i < m; apple_i++) {
        cin >> apple[apple_i];
        int position = a + apple[apple_i];
        if (position >= s && position <= t)
            apples_on_house++;
    }

    vector<int> orange(n);
    for(int orange_i = 0; orange_i < n; orange_i++) {
        cin >> orange[orange_i];
        int position = b + orange[orange_i];
        if (position >= s && position <= t)
            oranges_on_house++;
    }

    cout << apples_on_house << endl;
    cout << oranges_on_house << endl;

    return 0;
}
