#include <iostream>
#include <algorithm>
#include <cctype>
#include <string>
using namespace std;

/*https://stackoverflow.com/questions/313970/how-to-convert-an-instance-of-stdstring-to-lower-case*/

void solve() {
    string data1;
    string data2;
    cin>> data1;
    cin>> data2;

    // convert all characters in the strings to lowercase
    transform(data1.begin(), data1.end(), data1.begin(),
        [](unsigned char c){ return tolower(c); });
    transform(data2.begin(), data2.end(), data2.begin(),
        [](unsigned char c){ return tolower(c); });

    int result = data1.compare(data2);
    cout << result << endl;
}

int main(int argc, char* argv[]) {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}



