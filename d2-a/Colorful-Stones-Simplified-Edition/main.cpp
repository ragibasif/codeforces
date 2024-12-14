#include <iostream>
#include <string>
using namespace std;


int main(int argc, char* argv[]) {

    // fast input/output
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string s,t;
    cin >> s >> t;
    int result = 1;

    for (int i = 0, j=0; j < t.length(); j++) {
        if (s[i] == t[j]) {
            result++;
            i++;
        }
    }

    cout << result << endl;

    return 0;
}

