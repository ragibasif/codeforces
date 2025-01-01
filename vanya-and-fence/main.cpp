#include <iostream>

using namespace std;

/*https://codeforces.com/contest/677/problem/A*/

int main() {
    int n, h, w;
    cin >> n >> h;
    w = 0;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        if (temp > h)
            w++;
        w++;
    }
    cout << w << endl;

    return 0;
}

