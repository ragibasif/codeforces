#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>

/* FIX: TIME LIMIT EXCEEDED ERROR */

/* To run:
g++ -std=c++17 main.cpp && ./a.out
*/
using namespace std;

void fastIO();
void solve();
int power(int base, int exponent);
int factorial(int number);
bool isDivisible(int number, int divisor);

bool isDivisible(int number, int divisor) {
    if (divisor == 0) {
        cerr << "Error: Division by zero is undefined." << endl;
        return false;
    }
    return number % divisor == 0;
}

int factorial(int number) {
    if (number < 0) {
        cerr << "Factorial is not defined for negative numbers." << endl;
        return -1;
    }

    int result = 1;
    for (int i = 1; i <= number; ++i) {
        result *= i;
    }
    return result;
}

// integer power function to avoid floating point rounding errors
int power(int base, int exponent) {
    int result = 1;
    for (int i = 0; i < exponent; ++i) {
        result *= base;
    }
    return result;
}

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n,d;
        cin >> n >> d;
        int f = factorial(n);
        int sumD = 0;
        if (n > 5)
            n = 5;
        int j = 1;
        for (int i = 0; i < f; i++) {
            sumD += d * power(10,i);
            if (d != 5 && j == 5)
                j+=2;
            if (isDivisible(sumD,j)) {
                cout << j << " ";
                j+=2;
            }
            if (j > 9)
                break;
        }
        cout << endl;
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
