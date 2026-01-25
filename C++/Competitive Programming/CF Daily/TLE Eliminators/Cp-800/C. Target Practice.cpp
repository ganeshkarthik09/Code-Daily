#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        // fix: use char type and initialize 10x10 grid
        vector<vector<char>> matrix(10, vector<char>(10));
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                cin >> matrix[i][j];
            }
        }

        int ans = 0;
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                if ((i == 0 || i == 9 || j == 0 || j == 9) && matrix[i][j] == 'X')
                    ans += 1;
                else if ((i == 1 || i == 8 || j == 1 || j == 8) && matrix[i][j] == 'X')
                    ans += 2;
                else if ((i == 2 || i == 7 || j == 2 || j == 7) && matrix[i][j] == 'X')
                    ans += 3;
                else if ((i == 3 || i == 6 || j == 3 || j == 6) && matrix[i][j] == 'X')
                    ans += 4;
                else if ((i == 4 || i == 5 || j == 4 || j == 5) && matrix[i][j] == 'X')
                    ans += 5;
            }
        }
        cout << ans << "\n";
    }

    return 0;
}