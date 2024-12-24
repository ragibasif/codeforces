#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>

using namespace std;

void fastIO();
void solve();

void solve() {
    string s; // lowercase alphabet
    cin >> s;
    int result = 0; // running sum of rotations
    char currChar = 'a'; // starts off pointing at 'a'
    for (int i = 0; i < s.length(); i++) {
        int temp = min((min(currChar,s[i]) - max(currChar,s[i]) + 26), (max(currChar,s[i]) - min(currChar,s[i])));
        currChar = s[i];
        result += temp;
    }
    cout << result << endl;
}


int main(int argc, char* argv[]) {

    fastIO();
    solve();
    return 0;
}

void fastIO() {
    // fast input/output
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
