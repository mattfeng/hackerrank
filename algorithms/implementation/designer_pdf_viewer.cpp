#include <string>
#include <cstring>
#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){

	int n = 26;

    vector<int> h(n);
    for (int h_i = 0; h_i < n; h_i++) {
       cin >> h[h_i];
    }

    string word;
    cin >> word;

    int word_len = word.size();
    int max_height = 0;
    for (int i = 0; i < word_len; ++i) {
    	char c = word[i];
    	if (h[c - 'a'] > max_height)
    		max_height = h[c - 'a'];
    }

    cout << word_len * max_height << endl;

    return 0;
}
