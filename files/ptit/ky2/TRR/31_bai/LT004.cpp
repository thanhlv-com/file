#include <stdio.h>

int n, c[35][35], visited[35], x[35];
int min_cost = 2e9, count = 0;
int best_paths[1000][35];
void Try(int i, int cost) {
    if (cost >= min_cost) return; // C?t nhánh s?m
    if (i > n) {
        int total = cost + c[x[n]][1];
        if (total < min_cost) {
            min_cost = total;
            count = 0;
        }
        if (total == min_cost) {
            for (int j = 1; j <= n; j++) best_paths[count][j] = x[j];
            count++;
        }
        return;
    }
    for (int j = 2; j <= n; j++) {
        if (!visited[j]) {
            x[i] = j;
            visited[j] = 1;
            Try(i + 1, cost + c[x[i - 1]][j]);
            visited[j] = 0;
        }
    }
}
int main() {
    if (scanf("%d", &n) != 1) return 0;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            scanf("%d", &c[i][j]);

    x[1] = 1; visited[1] = 1;
    Try(2, 0);

    // In k?t qu?
    if (count == 1) {
        printf("%d\n", min_cost);
    } else {
        printf("%d %d\n", min_cost, count);
    }
    for (int k = 0; k < count; k++) {
        for (int j = 1; j <= n; j++)
            printf("%d%c", best_paths[k][j], (j == n) ? '\n' : ' ');
    }

    return 0;
}