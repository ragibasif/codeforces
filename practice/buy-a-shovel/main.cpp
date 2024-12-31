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

void solve();

/*Helper functions*/
void fastIO();
int power(int base, int exponent);
int factorial(int number);
bool divisible(int number, int divisor);
int lastNum(int number);

void solve() {
    int k,r;
    cin >> k >> r;
    int counter = 1;
    int temp = k;

    while (true) {
        if (lastNum(temp) == 0 || lastNum(temp) == r) {
            cout << counter << endl;
            return;
        }
        else {
            counter++;
            temp = counter * k;
        }
    }
}


int main(int argc, char* argv[]) {

    fastIO();
    solve();
    return 0;
}

/*Helper functions*/
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

// get the last digit of a given number (eg. 117 => 7, 234 => 4, 10 => 0)
int lastNum(int number) {
    return number %= 10;
}
