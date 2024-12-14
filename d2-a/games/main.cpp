#include <iostream>
#include <vector>
/*#include <string>*/
/*#include <cmath>*/
/*#include <algorithm>*/
#include <unordered_map>
/*#include <unordered_set>*/

using namespace std;

void fastIO();
void solve();
/*void solve2();*/
/*void solve3();*/

void solve() {
    int n;
    cin >> n;
    vector<int> vec;
    unordered_map<int,int> hashmap;
    int result = 0;
    while (n--) {
        int temp1;
        int temp2;
        cin >> temp1 >> temp2;
        vec.push_back(temp1);
        hashmap[temp2]++;
    }
    for (int i = 0; i < vec.size(); i++) {
        if (hashmap.find(vec[i]) != hashmap.end()) {
            result += hashmap[vec[i]];
        }
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
