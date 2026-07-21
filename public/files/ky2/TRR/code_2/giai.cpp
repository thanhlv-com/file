#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    if (!(cin >> n)) return 0;

    long long t = 0;
    long long total_used = 0;

    while (true) {
        long long next_square = (t + 1) * (t + 1);
        if (total_used + next_square <= n) {
            t++;
            total_used += next_square;
        } else {
            break;
        }
    }

    cout << t << "\n";

    return 0;
}