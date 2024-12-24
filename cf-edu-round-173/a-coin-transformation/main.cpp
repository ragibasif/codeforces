#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>

/* To run:
g++ -std=c++17 main.cpp && ./a.out
*/
using namespace std;

void fastIO();
void solve();
int power(int base, int exponent);

// integer power function to avoid floating point rounding errors
int power(int base, int exponent) {
    int result = 1;
    for (int i = 0; i < exponent; ++i) {
        result *= base;
    }
    return result;
}

void solve() {
    unsigned long long t;
    cin >> t;
    unsigned long long n;
    for (unsigned long long i = 0; i < t; i++) {
        cin >> n;
        unsigned long long res = 0;
        while (n > 3) {
            if (n / 4 >= 1) {
                res++;
                n /= 4;
            }
        }
        cout << power(2,res) << endl;
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
