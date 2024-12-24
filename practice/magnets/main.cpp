#include <iostream>
#include <vector>
#include <string>
/*#include <cmath>*/
/*#include <algorithm>*/
/*#include <unordered_map>*/
/*#include <unordered_set>*/

using namespace std;

void fastIO();
void solve();
void solve2();
/*void solve3();*/

void solve() {
    int n;
    cin >> n;
    vector<string> s;
    int result = 1;
    while (n--) {
        string temp;
        cin >> temp;
        s.push_back(temp);
    }
    for (int i = 1; i < s.size(); i++) {
        if (s[i-1][0] != s[i][0])
            result++;
    }
    cout << result << endl;
}
void solve2() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    n--;
    int result = 1;
    while (n--) {
        string temp;
        cin >> temp;
        if (s[0] != temp[0])
            result++;
        s = temp;
    }
    cout << result << endl;
}


int main(int argc, char* argv[]) {

    fastIO();
    /*solve();*/
    solve2();
    return 0;
}

void fastIO() {
    // fast input/output
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
