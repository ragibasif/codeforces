#include <iostream>
#include <unordered_set>
#include <string>
using namespace std;

void solve();
void solve() {
    unordered_set<char> hashset;
    string str;
    cin >> str;
    for (int i = 0; i < str.length(); i++) {
        hashset.insert(str[i]);
    }
    if (hashset.size() % 2 == 0)
        cout << "CHAT WITH HER!" << endl;
    else
        cout << "IGNORE HIM!" << endl;
}

int main(int argc, char* argv[]) {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    /*
    // Example of handling command-line arguments
    if (argc > 1) {
        cout << "Command-line arguments provided:\n";
        for (int i = 0; i < argc; ++i) {
            cout << "argv[" << i << "] = " << argv[i] << "\n";
        }
    } else {
        cout << "No command-line arguments provided.\n";
    }
    */

    solve();

    return 0;
}
