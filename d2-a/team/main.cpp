#include <iostream>
using namespace std;

void solve();

void solve() {
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        int p,v,t;
        cin >> p >> v >> t;
        if (p + v + t >= 2)
            sum++;
    }
    cout << sum;
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
