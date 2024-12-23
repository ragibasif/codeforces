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
void toLower(string &t);
void toUpper(string &t);

void solve() {
    string s;
    cin >> s;
    int numLower = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= 'a' && s[i] <= 'z')
            numLower++;
    }
    if (s.length() % 2 == 0 && numLower >= s.length() / 2)
        toLower(s);
    else if (s.length() % 2 == 0 && numLower < s.length() / 2)
        toUpper(s);
    else if (s.length() % 2 != 0 && numLower >= (s.length() / 2) + 1)
        toLower(s);
    else if (s.length() % 2 != 0 && numLower < (s.length() / 2) + 1)
        toUpper(s);
    cout << s << endl;
}

void toLower(string &t) {
    for (int i = 0; i < t.length(); i++) {
        if (t[i] < 'a')
            t[i] = t[i] - 'A' + 'a';
    }
}
void toUpper(string &t) {
    for (int i = 0; i < t.length(); i++) {
        if (t[i] >= 'a')
            t[i] = t[i] - 'a' + 'A';
    }
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
