#include <iostream>
#include <string>
using namespace std;

int main() {
        int n;
        string s;
        cin >> n >> s;
        int r;
        r = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == 'A')
                r++;
            else
                r--;
        }
        if (r == 0)
            cout << "Friendship" << endl;
        else if (r > 0)
            cout << "Anton" << endl;
        else
            cout << "Danik" << endl;
    }
