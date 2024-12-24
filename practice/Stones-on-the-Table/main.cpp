#include <iostream>
#include <string>
using namespace std;


int main(int argc, char* argv[]) {

    // fast input/output
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin>>n;
    string s;
    cin>>s;
    int result = 0;
    for (int i =1; i < s.length(); i++) {
        if (s[i-1] == s[i])
            result++;
    }
    cout << result << endl;

    return 0;
}

