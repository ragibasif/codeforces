#include <iostream>
/*#include <vector>*/
#include <string>
/*#include <cmath>*/
/*#include <algorithm>*/
/*#include <unordered_map>*/
/*#include <unordered_set>*/

using namespace std;

void fastIO();
void solve();
/*void solve2();*/
/*void solve3();*/

void solve() {
    string s;
    cin >> s;
    if (s[0] >= 'a' && s[0] <= 'z') {
        s[0] = s[0] - 32;
    }
    cout << s << endl;
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
