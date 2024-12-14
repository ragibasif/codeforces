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
    vector<int> vec;
    while (n--) {
        int temp;
        cin >> temp;
        vec.push_back(temp);
    }
    int left = 0;
    int right = vec.size()-1;
    int sereja = 0,dima = 0;
    for (int i = 0; i < vec.size(); i++) {
        if (i % 2 == 0) {
            if (vec[left] > vec[right]) {
                sereja += vec[left++];
            }
            else
                sereja += vec[right--];
        }
        else {
            if (vec[left] > vec[right]) {
                dima += vec[left++];
            }
            else
                dima += vec[right--];
        }


    }
    cout << sereja << " " << dima << endl;
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
