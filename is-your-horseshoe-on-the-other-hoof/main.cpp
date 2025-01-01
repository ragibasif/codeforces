#include <iostream>
#include <unordered_set>
using namespace std;

#define SHOES 4

void solve();
void print(const int& set);
void solve() {
    unordered_set<int> hashset;
    for (int i = 0; i < SHOES; i++) {
        int temp;
        cin >> temp;
        hashset.insert(temp);
    }
    cout << SHOES - hashset.size() << "\n";

}




int main(int argc, char* argv[]) {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}
