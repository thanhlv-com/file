#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n;
int c[35][35];
bool visited[35];

int min_cost = 2e9;                  // Chi phí nh? nh?t tìm ???c (f*)
int current_cost = 0;               // Chi phí hi?n t?i c?a nhánh quay ??i
vector<int> path;                   // L?u v?t hành trình hi?n t?i
vector<vector<int>> best_paths;     // L?u t?t c? các hành trình t?i ?u

// Thu?t toán Quay lui / ?? quy
void backtrack(int city, int count) {
    // N?u ?ã ?i qua ?? n thành ph?
    if (count == n) {
        int total_cost = current_cost + c[city][1]; // Chi phí quay v? 1

        if (total_cost < min_cost) {
            min_cost = total_cost;
            best_paths.clear(); // Tìm th?y chi phí t?t h?n, xóa các ???ng ?i c?
            best_paths.push_back(path);
        } else if (total_cost == min_cost) {
            best_paths.push_back(path); // Thêm nghi?m t?i ?u m?i vào danh sách
        }
        return;
    }

    // Th? ?i t?i các thành ph? ti?p theo
    for (int next_city = 2; next_city <= n; ++next_city) {
        if (!visited[next_city]) {
            // C?t nhánh: N?u chi phí hi?n t?i v??t quá min_cost thì không duy?t ti?p
            if (current_cost + c[city][next_city] <= min_cost) {
                visited[next_city] = true;
                path.push_back(next_city);
                current_cost += c[city][next_city];

                backtrack(next_city, count + 1);

                // Backtrack (Tr? l?i tr?ng thái)
                current_cost -= c[city][next_city];
                path.pop_back();
                visited[next_city] = false;
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    if (!(cin >> n)) return 0;

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cin >> c[i][j];
        }
    }

    // Kh?i t?o thành ph? xu?t phát là 1
    visited[1] = true;
    path.push_back(1);

    // Ch?y ?? quy xu?t phát t? thành ph? 1, s? thành ph? ?ã ?i là 1
    backtrack(1, 1);

    // Xu?t k?t qu? theo ?úng yêu c?u ?? bài
    if (best_paths.size() == 1) {
        // Tr??ng h?p duy nh?t 1 nghi?m
        cout << min_cost << "\n";
        for (int i = 0; i < n; ++i) {
            cout << best_paths[0][i] << (i == n - 1 ? "" : " ");
        }
        cout << "\n";
    } else {
        // Tr??ng h?p có nhi?u h?n 1 nghi?m
        cout << min_cost << " " << best_paths.size() << "\n";
        for (const auto& p : best_paths) {
            for (int i = 0; i < n; ++i) {
                cout << p[i] << (i == n - 1 ? "" : " ");
            }
            cout << "\n";
        }
    }

    return 0;
}