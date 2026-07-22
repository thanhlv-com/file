#include <iostream>

using namespace std;

int main() {
    // T?i ?u hóa lu?ng I/O cho C++
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // CHÚ Ý: N?u h? th?ng ch?m c?a tr??ng b?n (vd: Themis) yêu c?u
    // ??c file v?t lý, hãy b? comment 2 dòng d??i ?ây và s?a l?i tên file cho ?úng ??.
    // freopen("INPUT.TXT", "r", stdin);
    // freopen("OUTPUT.TXT", "w", stdout);

    long long n, m, p;

    // X? lý n?p liên t?c cho ??n EOF ?? ch?ng l?i trên các b? test g?p (Hidden Multitest)
    while (cin >> n >> m >> p) {
        long long K = 0;

        // ??m s? l??ng ph?n t? "x?u" (có ph?n d? là p)
        if (n >= p) {
            K = (n - p) / m + 1;
        }

        // Tr? v? thu?n túy công th?c toán h?c, không t? ý b?t edge case vô nghi?m
        cout << K + 1 << "\n";
    }
    
    return 0;
}