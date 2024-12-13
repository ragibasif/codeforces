#include <iostream>
#include <cmath>
#include <vector>
#define MAX_ROW 5
#define MAX_COL 5
#define MIDDLE_ROW 2
#define MIDDLE_COL 2
using namespace std;



int main(int argc, char* argv[]) {

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    vector<vector<int>> matrix;

    for (int i = 0; i < MAX_ROW; i++) {

        for (int j = 0; j < MAX_COL; j++) {
            int temp;
            cin >> temp;
            if (temp == 1) {
                int result = abs(MIDDLE_ROW - i) + abs(MIDDLE_COL - j);
                cout << result << endl;
                return 0;
            }
        }
    }




    return 0;
}
