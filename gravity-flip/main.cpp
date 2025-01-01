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

    int n;
    cin >> n;

    vector<int> numbers;

    for (int i =0; i< n; i++) {
        int temp;
        cin >> temp;
        numbers.push_back(temp);
    }
    // Sort in ascending order
    sort(numbers.begin(), numbers.end());

    // Print the sorted vector
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;
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
