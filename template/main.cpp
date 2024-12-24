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
int factorial(int number);
bool divisible(int number, int divisor);

void solve() {
    int n;
    cin >> n;
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

bool divisible(int number, int divisor) {
    if (divisor == 0) {
        cerr << "Error: Division by zero is undefined." << endl;
        return false;
    }
    return number % divisor == 0;
}

// n!
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
