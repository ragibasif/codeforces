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
    int n,police=0,crime=0;
    cin >> n;
    while (n--) {
        int temp;
        cin >> temp;
        if (temp > 0) {
            police+=temp;
        }
        else if (temp == -1 && police == 0) {
            crime++;
        }
        else if (temp == -1 && police > 0) {
            police--;
        }
    }
    cout << crime << endl;
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
