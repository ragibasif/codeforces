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
    int arr[4];
    for (int i = 0; i < 4; i++) {
        cin >> arr[i];
    }
    string s;
    cin >> s;
    int result = 0;
    for (int j = 0; j < s.length(); j++) {
        result += arr[s[j] - '0' - 1];
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
