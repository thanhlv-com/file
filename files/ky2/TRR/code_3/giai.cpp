#include <iostream>
#include <vector>

using namespace std;

struct Item {
    long long weight;
    long long value;
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    long long b;
    if (!(cin >> n >> b)) return 0;

    vector<Item> items(n);
    for (int i = 0; i < n; ++i) {
        cin >> items[i].weight >> items[i].value;
    }

    long long max_value = 0;
    vector<int> best_choice(n, 0);

    // Duy?t qua 2^n tr??ng h?p b?ng bitmask
    int total_cases = 1 << n;
    for (int mask = 0; mask < total_cases; ++mask) {
        long long current_weight = 0;
        long long current_value = 0;

        for (int i = 0; i < n; ++i) {
            if ((mask >> i) & 1) { // N?u ?? v?t th? i ???c ch?n
                current_weight += items[i].weight;
                current_value += items[i].value;
            }
        }

        // Ki?m tra ?i?u ki?n tr?ng l??ng
        if (current_weight <= b) {
            if (current_value > max_value) {
                max_value = current_value;
                for (int i = 0; i < n; ++i) {
                    best_choice[i] = (mask >> i) & 1;
                }
            }
        }
    }

    // In k?t qu?
    cout << max_value << "\n";
    for (int i = 0; i < n; ++i) {
        cout << best_choice[i] << (i == n - 1 ? "" : " ");
    }
    cout << "\n";

    return 0;
}