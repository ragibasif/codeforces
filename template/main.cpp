#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>

using namespace std;

void solve();
void test();

// Constants
const int MOD = 1e9 + 7; // very large prime number often used for modular arithmetic
const int INF = 1e9 + 5; // very large number that signifies "infinity" to differentiate between reachable and unreachable
const int DIV = 1e12; // very large number used as a default argument for generating divisors

// Utility functions
void fastIO();
long long power(long long base, long long exponent);
long long factorial(long long number);
bool isDivisible(long long number, long long divisor);
long long lastDigit(long long number);
long long gcd(long long a, long long b);
long long lcm(long long a, long long b);
long long modularExponentiation(long long base, long long exponent, long long mod);
vector<long long> generateDivisors(long long n = (long long) (DIV));


void solve() {
    cout << "Program logic starts here." << endl;
}

int main(int argc, char* argv[]) {
    fastIO();

    // Uncomment for testing. Comment for submitting.
    /*test();*/

    // Uncomment for submitting. Comment for testing.
    solve();
    cout << endl;

    return 0;
}

void test() {
    int t;

    while (t--) {
        solve();
    }
}



/*Utility functions*/
void fastIO() {
    // fast input/output
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

bool isDivisible(long long number, long long divisor) {
    if (divisor == 0) {
        cerr << "Error: Division by zero is undefined." << endl;
        return false;
    }
    return number % divisor == 0;
}

// n!
long long factorial(long long number) {
    if (number < 0) {
        cerr << "Factorial is not defined for negative numbers." << endl;
        return -1;
    }

    long long result = 1;
    for (long long i = 1; i <= number; ++i) {
        result *= i;
    }
    return result;
}

// integer power function to avoid floating point rounding errors
long long power(long long base, long long exponent) {
    long long result = 1;
    for (long long i = 0; i < exponent; ++i) {
        result *= base;
    }
    return result;
}

// get the last digit of a given number (eg. 117 => 7, 234 => 4, 10 => 0)
long long lastDigit(long long number) {
    while (number > 9) {
        number %= 10;
    }

    return number;
}
/*
 * recursively calculate gcd using the eclidean algorithm
 * */
long long gcd(long long a, long long b) {
    if (b == 0)
        return a;
    gcd(b, a % b);
}

/*
 * find the least common multiple using gcd*/
long long lcm(long long a, long long b) {
    return (a / gcd(a,b)) * b;
}

/*
 * uses exponentiation by squaring technique
 * time: O(log exponent)*/
long long modularExponentiation(long long base, long long exponent, long long mod) {
    long long result = 1;
    // while exponent > 0
    while (exponent) {
        if (exponent % 2 == 1) {
            result = (result * base) % mod;
        }
        base = power(base,2) % mod;
        exponent /= 2;
    }
    return result;
}


// generate all the divisors of the given number
vector<long long> generateDivisors(long long n) {
  vector<long long> v;
  long long i = 1;
  for (; i * i < n; ++i)
    if (n % i == 0) {
      v.push_back(i), v.push_back(n / i);
    }
  if (i * i == n)
    v.push_back(i);

  return v;
}
