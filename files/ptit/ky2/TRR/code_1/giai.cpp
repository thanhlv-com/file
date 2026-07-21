#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, s;
    if (!(cin >> n >> s)) return 0;

    // B?ng C[i][j] l?u giá tr? C(i, j)
    vector<vector<unsigned long long>> C(n + 1, vector<unsigned long long>(n + 1, 0));

    for (int i = 0; i <= n; ++i) {
        C[i][0] = 1; // C(i, 0) = 1
        for (int j = 1; j <= i; ++j) {
            if (j == i) {
                C[i][j] = 1;
            } else {
                // Công th?c Pascal: C(n, k) = C(n-1, k-1) + C(n-1, k)
                C[i][j] = C[i - 1][j - 1] + C[i - 1][j];
            }
        }
    }

    cout << C[n][s] << "\n";

    return 0;
}