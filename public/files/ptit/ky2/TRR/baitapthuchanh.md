**TRR1_1009 - Ph??ng trình 01**

Cho tr??c hai s? th?c a và b. Xét m?nh ?? p = "Ph??ng trình ax + b = 0 có ít nh?t m?t nghi?m th?c âm".

Yêu c?u: Xác ??nh giá tr? c?a p v?i hai s? th?c a và b ?ã cho.

D? li?u: Vào t? t?p Input chu?n g?m m?t dòng ch?a hai s? th?c a và b.

K?t qu?: Ghi ra t?p Output chu?n là giá tr? c?a p.

Vd:

Input: 5.0 7.5 , Output: 1, Gi?i thích: Ph??ng trình 5.0\*x + 7.5 = 0 có 1 nghi?m th?c âm.

# include &lt;stdio.h&gt;

int main() {

 double a, b;

 scanf("%lf %lf", &a, &b);

 int p;

 if (a == 0) {

 p = (b == 0);

 } else {

 p = (-b / a < 0);

 }

 printf("%d", p);

 return 0;

}

**TRR1_1010 - Ph??ng trình 02**  
Cho tr??c ba s? th?c a, b và c. Xét m?nh ?? p = "Ph??ng trình ax^2 + bx + c = 0 có ít nh?t m?t nghi?m th?c d??ng". Yêu c?u: Xác ??nh giá tr? c?a p v?i ba s? th?c a, b và c ?ã cho. D? li?u: Vào t? t?p Input chu?n g?m m?t dòng ch?a ba s? th?c a, b và c. K?t qu?: Ghi ra t?p Output chu?n là giá tr? c?a p.

Vd: input: 5.0 7.5 1.3, output: 0, gi?i thích: Ph??ng trình b?c hai 5.0\*x^2 + 7.5\*x + 1.3 = 0 có 2 nghi?m th?c âm.

# include &lt;stdio.h&gt;

# include &lt;math.h&gt;

int main() {

 double a, b, c;

 scanf("%lf %lf %lf", &a, &b, &c);

 int p = 0;

 if (a == 0) {

 if (b == 0) {

 if (c == 0)

 p = 1;

 else

 p = 0;

 } else {

 double x = -c / b;

 if (x > 0)

 p = 1;

 }

 } else {

 double delta = b \* b - 4 \* a \* c;

 if (delta >= 0) {

 double x1 = (-b - sqrt(delta)) / (2 \* a);

 double x2 = (-b + sqrt(delta)) / (2 \* a);

 if (x1 > 0 || x2 > 0)

 p = 1;

 }

 }

 printf("%d", p);

 return 0;

}

**TRR1_1011 - Ph??ng trình 03**

Cho tr??c ba s? th?c a, b và c. Xét m?nh ?? p = "Ph??ng trình ax^4 + bx^2 + c = 0 có ít nh?t m?t nghi?m th?c".

Yêu c?u: Xác ??nh giá tr? c?a p v?i ba s? th?c a, b và c ?ã cho.

D? li?u: Vào t? t?p Input chu?n g?m m?t dòng ch?a ba s? th?c a, b và c.

K?t qu?: Ghi ra t?p Output chu?n là giá tr? c?a p.

Input: 5.0 -7.5 1.3, Output: 1, Gi?i thích: Ph??ng trình b?c b?n trùng ph??ng 5.0\*x^4 - 7.5\*x^2 + 1.3 = 0 có 4 nghi?m th?c phân bi?t

# include &lt;stdio.h&gt;

# include &lt;math.h&gt;

int main() {

 double a, b, c;

 scanf("%lf %lf %lf", &a, &b, &c);

 int p = 0;

 if (a == 0) {

 if (b == 0) {

 if (c == 0)

 p = 1;

 } else {

 double t = -c / b;

 if (t >= 0)

 p = 1;

 }

 } else {

 double delta = b \* b - 4 \* a \* c;

 if (delta >= 0) {

 double t1 = (-b - sqrt(delta)) / (2 \* a);

 double t2 = (-b + sqrt(delta)) / (2 \* a);

 if (t1 >= 0 || t2 >= 0)

 p = 1;

 }

 }

 printf("%d", p);

 return 0;

}

**TRR1_2002 - ??m s? 02  
**Cho tr??c b?n s? nguyên d??ng a, b, k và m.

Yêu c?u: Tìm s? l??ng t các s? nguyên d??ng trong ph?m vi t? a ??n b là b?i c?a k ho?c m.

D? li?u: Vào t? t?p Input chu?n g?m m?t dòng ch?a b?n s? nguyên d??ng a, b, k và m, m?i s? không v??t quá 2^18 và a <= b.

K?t qu?: Ghi ra t?p Output chu?n giá tr? t tìm ???c.

Ví d?: input :1 10 2 3 , output:7, Gi?i thích: Có t = 7 s? trong ph?m vi t? a = 1 ??n b = 10 là b?i c?a k = 2 ho?c m = 3 g?m 2, 3, 4, 6, 8, 9 và 10.

# include &lt;stdio.h&gt;

int gcd(int a, int b) {

 while (b != 0) {

 int r = a % b;

 a = b;

 b = r;

 }

 return a;

}

int countMultiples(int l, int r, int x) {

 return r / x - (l - 1) / x;

}

int main() {

 int a, b, k, m;

 scanf("%d %d %d %d", &a, &b, &k, &m);

 int lcm = k / gcd(k, m) \* m;

 int ans = countMultiples(a, b, k)

 + countMultiples(a, b, m)

 - countMultiples(a, b, lcm);

 printf("%d", ans);

 return 0;

}

**TRR1_2005 - ??m s? hình vuông**

Cho tr??c n ô vuông ??n v? v?i c?nh là 1. Yêu c?u: Tìm s? l??ng t l?n nh?t các hình vuông có kích th??c c?nh là các s? nguyên khác nhau có th? t?o ???c t? n ô vuông ?ã cho. D? li?u: Vào t? t?p Input chu?n g?m m?t dòng ch?a s? nguyên d??ng n không v??t quá 2^18. K?t qu?:

Ghi ra t?p Output chu?n giá tr? t tìm ???c. Input: 10, output: 2,

Gi?i thích: Giá tr? l?n nh?t t = 2 vì có th? t?o ???c hai hình vuông c?nh 1 và c?nh 2.

# include &lt;stdio.h&gt;

int main() {

 int n;

 scanf("%d", &n);

 int t = 0;

 int sum = 0;

 while (sum + (t + 1) \* (t + 1) <= n) {

 t++;

 sum += t \* t;

 }

 printf("%d", t);

 return 0;

}

**TRR1_1018 - T?p h?p 02  
**Xét tâp h?p S g?m n s? nguyên d??ng ??u tiên. M?i t?p con A c?a S có th? ???c bi?u di?n d??i d?ng xâu nh? phân X ?? dài n, trong ?ó, X\[i\] = 1 n?u s? i (1 £ i £ n) là ph?n t? c?a A và X\[i\] = 0 trong tr??ng h?p ng??c l?i.

Cho tr??c hai t?p con A và B c?a t?p S.

Yêu c?u: Xác ??nh các ph?n t? c?a t?p h?p là giao c?a hai t?p A và B.

D? li?u: Vào t? t?p Input chu?n:

\- Dòng ??u ch?a s? nguyên d??ng n không v??t quá 1000.

\- Trong hai dòng ti?p theo, m?i dòng ch?a m?t xâu nh? phân ?? dài n bi?u di?n t?p con A và B.

K?t qu?: Ghi ra t?p Output chu?n g?m 2 dòng:

\- Dòng ??u ghi s? k là s? l??ng ph?n t? c?a t?p h?p là giao c?a hai t?p A và B;

\- Trong tr??ng h?p k > 0, dòng th? 2 ghi k s? là các ph?n t? c?a t?p h?p là giao c?a hai t?p A và B theo th? t? t?ng.

Input:

5

0 1 1 0 1

1 1 0 1 1

Output:  
2

2 5

Gi?i thích: T?p A = {2,3,5}, B = {1,2,4,5} nên giao c?a hai t?p A và B là{2, 5}

# include &lt;stdio.h&gt;

int main() {

 int n;

 scanf("%d", &n);

 int A\[1001\], B\[1001\];

 int ans\[1001\];

 int k = 0;

 for (int i = 1; i <= n; i++)

 scanf("%d", &A\[i\]);

 for (int i = 1; i <= n; i++)

 scanf("%d", &B\[i\]);

 for (int i = 1; i <= n; i++) {

 if (A\[i\] == 1 && B\[i\] == 1) {

 ans\[k++\] = i;

 }

 }

 printf("%d\\n", k);

 if (k > 0) {

 for (int i = 0; i < k; i++) {

 if (i > 0) printf(" ");

 printf("%d", ans\[i\]);

 }

 }

 return 0;

}

**TRR1_1017 - T?p h?p 01**

Xét tâp h?p S g?m n s? nguyên d??ng ??u tiên. M?i t?p con A c?a S có th? ???c bi?u di?n d??i d?ng xâu nh? phân X ?? dài n, trong ?ó, X\[i\] = 1 n?u s? i (1 ? i ? n) là ph?n t? c?a A và X\[i\] = 0 trong tr??ng h?p ng??c l?i.

Cho tr??c hai t?p con A và B c?a t?p S.

Yêu c?u: Xác ??nh các ph?n t? c?a t?p h?p là h?p c?a hai t?p A và B.

D? li?u: Vào t? t?p Input chu?n:

\- Dòng ??u ch?a s? nguyên d??ng n không v??t quá 1000.

\- Trong hai dòng ti?p theo, m?i dòng ch?a m?t xâu nh? phân ?? dài n bi?u di?n t?p con A và B.

K?t qu?: Ghi ra t?p Output chu?n g?m 2 dòng:

\- Dòng ??u ghi s? k là s? l??ng ph?n t? c?a t?p h?p là h?p c?a hai t?p A và B;

\- Trong tr??ng h?p k > 0, dòng th? 2 ghi k s? là các ph?n t? c?a t?p h?p là h?p c?a hai t?p A và B theo th? t? t?ng.

Input

5

0 1 0 0 1

1 1 0 0 0

output

3

1 2 5

Gi?i thích

T?p A = {2, 5}, B = {1, 2} nên h?p c?a hai t?p A và B là {1, 2, 5}.

# include &lt;stdio.h&gt;

int main() {

 int n, x, k = 0;

 int mark\[1001\] = {0};

 if (scanf("%d", &n) != 1) return 0;

 // ??c A và B, ph?n t? nào xu?t hi?n thì ?ánh d?u mark = 1

 for (int i = 0; i < 2 \* n; i++) {

 scanf("%d", &x);

 if (x == 1) {

 mark\[(i % n) + 1\] = 1; // (i % n) + 1 giúp quy ??i ch? s? v? t? 1 ??n n

 }

 }

 // ??m t?ng s? ph?n t? thu?c h?p

 for (int i = 1; i <= n; i++) {

 if (mark\[i\]) k++;

 }

 printf("%d\\n", k);

 // In các ph?n t? thu?c h?p

 int first = 1;

 for (int i = 1; i <= n; i++) {

 if (mark\[i\]) {

 if (!first) printf(" ");

 printf("%d", i);

 first = 0;

 }

 }

 return 0;

}

**TRR1_2009 - ??m phân s?**

Cho tr??c s? nguyên d??ng n không v??t quá 10^4.

Yêu c?u: Tìm s? l??ng t các phân s? khác nhau có t? s? và m?u s? là các s? nguyên a, b, trong ?ó 0 <= a <= b, 1 <= b <= n.

D? li?u: Vào t? t?p Input chu?n ch?a s? nguyên d??ng n không v??t quá 10^4.

K?t qu?: Ghi ra t?p Output chu?n giá tr? t tìm ???c.

input: 4, output: 7, Gi?i thích: Có t = 7 phân s? khác nhau th?a mãn: 0/1, 1/1, 1/2, 1/3, 2/3, 1/4 và 3/4.

# include &lt;stdio.h&gt;

int main() {

 int n;

 scanf("%d", &n);

 int phi\[10001\];

 for (int i = 0; i <= n; i++)

 phi\[i\] = i;

 for (int i = 2; i <= n; i++) {

 if (phi\[i\] == i) {

 for (int j = i; j <= n; j += i)

 phi\[j\] -= phi\[j\] / i;

 }

 }

 long long ans = 1;

 for (int i = 1; i <= n; i++)

 ans += phi\[i\];

 printf("%lld", ans);

 return 0;

}

**TRR1_2011 - Xâu nh? phân 01**

Cho tr??c hai s? nguyên d??ng n và k.

Yêu c?u: Tìm s? l??ng t các xâu nh? phân ?? dài n không ch?a k ch? s? 0 liên ti?p.

D? li?u: Vào t? t?p Input chu?n g?m m?t dòng ch?a hai s? nguyên d??ng n, k không v??t quá 50 và 2 <= k <= n.

K?t qu?: Ghi ra t?p Output chu?n giá tr? t tìm ???c

Input

3 2

Output

5

Gi?i thích: Có t = 5 xâu nh? phân ?? dài 3 th?a mãn g?m 010, 011, 101, 110 và 111.

# include &lt;stdio.h&gt;

int main() {

 int n, k;

 scanf("%d %d", &n, &k);

 long long dp\[55\]\[55\] = {0};

 dp\[0\]\[0\] = 1;

 for (int i = 1; i <= n; i++) {

 for (int j = 0; j < k; j++)

 dp\[i\]\[0\] += dp\[i - 1\]\[j\];

 for (int j = 0; j < k - 1; j++)

 dp\[i\]\[j + 1\] += dp\[i - 1\]\[j\];

 }

 long long ans = 0;

 for (int j = 0; j < k; j++)

 ans += dp\[n\]\[j\];

 printf("%lld", ans);

 return 0;

}

**TRR1_2014 - Xâu nh? phân 04**

Cho tr??c hai s? nguyên d??ng n và k.

Yêu c?u: Tìm s? l??ng t các xâu nh? phân ?? dài n có ch?a k ch? s? 1 liên ti?p.

D? li?u: Vào t? t?p Input chu?n g?m m?t dòng ch?a hai s? nguyên d??ng n, k không v??t quá 50 và 2 <= k <= n.

K?t qu?: Ghi ra t?p Output chu?n giá tr? t tìm ???c.

Input

3 2

Output

3

Gi?i thích: Có t = 3 xâu nh? phân ?? dài 3 th?a mãn g?m 011, 110 và 111.

# include &lt;stdio.h&gt;

int main() {

 int n, k;

 scanf("%d %d", &n, &k);

 long long dp\[55\]\[55\] = {0};

 dp\[0\]\[0\] = 1;

 for (int i = 1; i <= n; i++) {

 for (int j = 0; j < k; j++)

 dp\[i\]\[0\] += dp\[i - 1\]\[j\];

 for (int j = 0; j < k - 1; j++)

 dp\[i\]\[j + 1\] += dp\[i - 1\]\[j\];

 }

 long long without = 0;

 for (int j = 0; j < k; j++)

 without += dp\[n\]\[j\];

 long long total = 1;

 for (int i = 0; i < n; i++)

 total \*= 2;

 printf("%lld", total - without);

 return 0;

}

**TRR1_2040 - Xâu nh? phân 14**

Cho tr??c hai s? nguyên d??ng n và s.

Yêu c?u: Tìm s? l??ng t các xâu nh? phân ?? dài n có t?ng các ch? s? b?ng s.

D? li?u: Vào t? t?p Input chu?n g?m m?t dòng ch?a hai s? nguyên d??ng n, s không v??t quá 50 và s <= n.

K?t qu?: Ghi ra t?p Output chu?n giá tr? t tìm ???c.

Ví d?:

Input

3 1

Output

3

Gi?i thích

Có t = 3 xâu nh? phân ?? dài 3 th?a mãn g?m 001, 010 và 100.

# include &lt;stdio.h&gt;

int main() {

 int n, s;

 scanf("%d %d", &n, &s);

 long long dp\[55\]\[55\] = {0};

 dp\[0\]\[0\] = 1;

 for (int i = 1; i <= n; i++) {

 for (int j = 0; j <= i; j++) {

 dp\[i\]\[j\] = dp\[i - 1\]\[j\];

 if (j > 0)

 dp\[i\]\[j\] += dp\[i - 1\]\[j - 1\];

 }

 }

 printf("%lld", dp\[n\]\[s\]);

 return 0;

}

**TRR1_3006 - Li?t kê hoán v? tr??c 01**

Cho tr??c s? nguyên d??ng n và m?t hoán v? c?a n s? nguyên d??ng ??u tiên.

Yêu c?u: S? d?ng thu?t toán sinh hoán v? theo th? t? t? ?i?n, tìm hoán v? li?n k? tr??c c?a hoán v? ?ã cho.

D? li?u: Vào t? t?p Input chu?n:

\- Dòng ??u ch?a s? nguyên d??ng n, v?i 3 <= n <= 100.

\- Dòng ti?p theo ch?a n s? là m?t hoán v? c?a n s? nguyên d??ng ??u tiên.

K?t qu?: Ghi ra t?p Output chu?n g?m 1 dòng là hoán v? tìm ???c. Trong tr??ng h?p không tìm ???c hoán v? thì ghi s? 0 thay th?.

Ví d?:

Input:

5

3 1 2 5 4

Output

3 1 2 4 5

Gi?i thích: Hoán v? li?n k? tr??c c?a hoán v? (3, 1, 2, 5, 4) là (3, 1, 2, 4 5).

# include &lt;stdio.h&gt;

int main() {

 int n, a\[105\];

 if (scanf("%d", &n) != 1) return 0;

 for (int i = 0; i < n; i++)

 scanf("%d", &a\[i\]);

 // Tìm i l?n nh?t sao cho a\[i\] > a\[i + 1\]

 int i = n - 2;

 while (i >= 0 && a\[i\] <= a\[i + 1\])

 i--;

 // N?u không có (m?ng t?ng d?n), ?ây là hoán v? ??u tiên

 if (i < 0) {

 printf("0");

 return 0;

 }

 // Tìm j l?n nh?t (j > i) sao cho a\[j\] < a\[i\]

 int j = n - 1;

 while (a\[j\] >= a\[i\])

 j--;

 // ??i ch? a\[i\] và a\[j\]

 int t = a\[i\];

 a\[i\] = a\[j\];

 a\[j\] = t;

 // L?t ng??c ?o?n t? i + 1 ??n n - 1

 for (int l = i + 1, r = n - 1; l < r; l++, r--) {

 t = a\[l\];

 a\[l\] = a\[r\];

 a\[r\] = t;

 }

 // In k?t qu?

 for (int i = 0; i < n; i++) {

 if (i) printf(" ");

 printf("%d", a\[i\]);

 }

 return 0;

}

**TRR1_3008 - Li?t kê t? h?p tr??c 01**

Cho tr??c hai s? nguyên d??ng n, k và m?t t? h?p ch?p k c?a n s? nguyên d??ng ??u tiên.

Yêu c?u: S? d?ng thu?t toán sinh t? h?p theo th? t? t? ?i?n, li?t kê t? h?p li?n k? tr??c c?a t? h?p ?ã cho.

D? li?u: Vào t? t?p Input chu?n:

\- Dòng ??u ch?a hai s? nguyên d??ng n và k, v?i 3 <= n <= 100; k <= n.

\- Dòng ti?p theo ch?a k s? là m?t t? h?p ch?p k c?a n s? nguyên d??ng ??u tiên.

K?t qu?: Ghi ra t?p Output chu?n t? h?p li?n k? tr??c c?a t? h?p ?ã cho. Trong tr??ng h?p không tìm ???c t? h?p thì ghi s? 0 thay th?.

Ví d?:

Input

5 3

1 2 5

Output

1 2 4

Gi?i thích: T? h?p tr??c c?a t? h?p (1,2,5) là (1,2,4).

# include &lt;stdio.h&gt;

int main() {

 int n, k, a\[105\];

 if (scanf("%d %d", &n, &k) != 2) return 0;

 a\[0\] = 0; // Ph?n t? ?o ?? so sánh v?i a\[1\]

 for (int i = 1; i <= k; i++)

 scanf("%d", &a\[i\]);

 // Tìm v? trí i l?n nh?t sao cho a\[i\] > a\[i - 1\] + 1

 int i = k;

 while (i >= 1 && a\[i\] == a\[i - 1\] + 1)

 i--;

 // N?u không tìm th?y, ?ây là t? h?p ??u tiên (1 2 ... k)

 if (i < 1) {

 printf("0");

 return 0;

 }

 // Gi?m a\[i\] ?i 1

 a\[i\]--;

 // ??t các ph?n t? t? i + 1 ??n k ??t giá tr? l?n nh?t có th?

 for (int j = i + 1; j <= k; j++) {

 a\[j\] = n - k + j;

 }

 // In k?t qu?

 for (int j = 1; j <= k; j++) {

 if (j > 1) printf(" ");

 printf("%d", a\[j\]);

 }

 return 0;

}

**TRR1_3011 - Li?t kê m?t ph?n hoán v?**

Cho tr??c hai s? nguyên d??ng n, t và m?t hoán v? c?a n s? nguyên d??ng ??u tiên.

Yêu c?u: S? d?ng thu?t toán sinh hoán v? theo th? t? t? ?i?n, li?t kê t hoán v? li?n k? ti?p theo c?a hoán v? ?ã cho.

D? li?u: Vào t? t?p Input chu?n:

\- Dòng ??u ch?a hai s? nguyên d??ng n và t, v?i 3 <= n, t <= 100.

\- Dòng ti?p theo ch?a n s? là m?t hoán v? c?a n s? nguyên d??ng ??u tiên.

K?t qu?: Ghi ra t?p Output chu?n g?m t dòng, m?i dòng ghi m?t hoán v? theo th? t? tìm ???c. Trong tr??ng h?p không tìm ???c hoán v? thì ghi s? 0 thay th?.

Ví d?:

Input

5 2

3 1 2 5 4

Output

3 1 4 2 5

3 1 4 5 2

Gi?i thích: Hai hoán v? k? ti?p c?a hoán v? (3, 1, 2, 5, 4) là (3,1,4,2,5) và (3,1,4,5,2).

# include &lt;stdio.h&gt;

int main() {

 int n, t;

 scanf("%d %d", &n, &t);

 int a\[105\];

 for (int i = 0; i < n; i++)

 scanf("%d", &a\[i\]);

 while (t--) {

 int i = n - 2;

 while (i >= 0 && a\[i\] >= a\[i + 1\])

 i--;

 if (i < 0) {

 printf("0\\n");

 continue;

 }

 int j = n - 1;

 while (a\[j\] <= a\[i\])

 j--;

 int temp = a\[i\];

 a\[i\] = a\[j\];

 a\[j\] = temp;

 int l = i + 1, r = n - 1;

 while (l < r) {

 temp = a\[l\];

 a\[l\] = a\[r\];

 a\[r\] = temp;

 l++;

 r--;

 }

 for (int i = 0; i < n; i++) {

 if (i) printf(" ");

 printf("%d", a\[i\]);

 }

 printf("\\n");

 }

 return 0;

}

**TRR1_3015 - Li?t kê m?t ph?n xâu nh? phân s? d?ng ph??ng pháp sinh thu?n**

Cho tr??c hai s? nguyên d??ng n, t và m?t xâu nh? phân ?? dài n.

Yêu c?u: S? d?ng ph??ng pháp sinh xâu nh? phân k? ti?p theo th? t? t? ?i?n, li?t kê t xâu nh? phân li?n k? ti?p theo c?a xâu nh? phân ?ã cho.

D? li?u: Vào t? t?p Input chu?n:

\- Dòng ??u ch?a hai s? nguyên d??ng n và t, v?i 3 <= n, t <= 100.

\- Dòng ti?p theo ch?a n s? 0 ho?c 1 là m?t xâu nh? phân ?? dài n.

K?t qu?: Ghi ra t?p Output chu?n g?m t dòng, m?i dòng ghi m?t xâu nh? phân theo th? t? tìm ???c. Trong tr??ng h?p không tìm ???c xâu nh? phân thì ghi s? 0 thay th?.

Input

5 2

1 0 0 0 1

Output

1 0 0 1 0

1 0 0 1 1

Gi?i thích

Hai xâu nh? phân li?n k? ti?p theo c?a xâu (1,0,0,0,1) theo th? t? t? ?i?n là (1,0,0,1,0) và (1,0,0,1,1).

# include &lt;stdio.h&gt;

int main() {

 int n, t;

 int a\[105\];

 scanf("%d%d", &n, &t);

 for (int i = 0; i < n; i++)

 scanf("%d", &a\[i\]);

 for (int k = 0; k < t; k++) {

 int i = n - 1;

 while (i >= 0 && a\[i\] == 1)

 i--;

 if (i < 0) {

 printf("0\\n");

 continue;

 }

 a\[i\] = 1;

 for (int j = i + 1; j < n; j++)

 a\[j\] = 0;

 for (int j = 0; j < n; j++) {

 if (j) printf(" ");

 printf("%d", a\[j\]);

 }

 printf("\\n");

 }

 return 0;

}

**?? bài: TRR1_3016 - Li?t kê m?t ph?n xâu nh? phân s? d?ng ph??ng pháp sinh ng??c**

Cho tr??c hai s? nguyên d??ng n, t và m?t xâu nh? phân ?? dài n.

Yêu c?u: S? d?ng ph??ng pháp sinh xâu nh? phân k? ti?p theo th? t? ng??c v?i th? t? t? ?i?n, li?t kê t xâu nh? phân li?n k? ti?p theo c?a xâu nh? phân ?ã cho.

D? li?u: Vào t? t?p Input chu?n:

\- Dòng ??u ch?a hai s? nguyên d??ng n và t, v?i 3 <= n, t <= 100.

\- Dòng ti?p theo ch?a n s? 0 ho?c 1 là m?t xâu nh? phân ?? dài n.

K?t qu?: Ghi ra t?p Output chu?n g?m t dòng, m?i dòng ghi m?t xâu nh? phân theo th? t? tìm ???c. Trong tr??ng h?p không tìm ???c xâu nh? phân thì ghi s? 0 thay th?.

Input

5 2

1 0 1 0 1

Output

1 0 1 0 0

1 0 0 1 1

Gi?i thích

Hai xâu nh? phân li?n k? ti?p theo c?a xâu (1,0,1,0,1) theo th? t? ng??c v?i th? t? t? ?i?n là (1,0,1,0,0) và (1,0,0,1,1).

# include &lt;stdio.h&gt;

int main() {

 int n, t, a\[105\];

 if (scanf("%d %d", &n, &t) != 2) return 0;

 for (int i = 0; i < n; i++)

 scanf("%d", &a\[i\]);

 while (t--) {

 // Th?c hi?n phép tr? 1 trong h? nh? phân

 int i = n - 1;

 while (i >= 0 && a\[i\] == 0) {

 a\[i\] = 1; // Vay 1: bit 0 bi?n thành 1

 i--;

 }

 // N?u không vay ???c n?a (t?t c? là 0)

 if (i < 0) {

 printf("0\\n");

 } else {

 a\[i\] = 0; // Bit 1 ??u tiên g?p ???c b? tr? thành 0

 // In k?t qu?

 for (int j = 0; j < n; j++) {

 if (j) printf(" ");

 printf("%d", a\[j\]);

 }

 printf("\\n");

 }

 }

 return 0;

}

**_?? bài: TRR1_3024 - Li?t kê hoán v? có ?i?u ki?n s? d?ng ph??ng pháp quay lui_**

Cho tr??c hai s? nguyên d??ng n và k

Yêu c?u: Li?t kê t?t c? các hoán v? c?a t?p h?p g?m n s? nguyên d??ng ??u tiên s? d?ng ph??ng pháp quay lui, trong ?ó k v? trí c?a hoán v? ?ã cho giá tr? tr??c.

D? li?u: Vào t? t?p Input chu?n:

\- Dòng ??u ch?a hai s? nguyên d??ng n và k, v?i 3 <= n <= 20, k <= n.

\- Trong k dòng ti?p theo, dòng th? i (1 <= i <= k) ch?a hai s? nguyên d??ng u và v, 1 <= u, v <= n, v?i ý ngh?a v? trí u c?a hoán v? là s? v.

K?t qu?: Ghi ra t?p Output chu?n g?m nhi?u dòng, m?i dòng m?t hoán v? tìm ???c theo th? t? xu?t hi?n trong quá trình li?t kê. N?u không có hoán v? nào th?a mãn thì ghi ra giá tr? 0.

Ví d?:

Input

3 1

1 2

Output

2 1 3

2 3 1

Gi?i thích: V?i n = 3 có 2 hoán v? th?a mãn ?i?u ki?n có s? 2 ??ng ? v? trí th? nh?t.

# include &lt;stdio.h&gt;

int n, k, found, f\[30\], r\[30\], ans\[30\], used\[30\];

void backtrack(int pos) {

if (pos > n) {

found = 1;

for (int i = 1; i <= n; i++)

printf("%d%c", ans\[i\], " \\n"\[i == n\]);

return;

}

int s = f\[pos\] ? f\[pos\] : 1;

int e = f\[pos\] ? f\[pos\] : n;

for (int v = s; v <= e; v++) {

if (!used\[v\]) {

used\[v\] = 1; ans\[pos\] = v;

backtrack(pos + 1);

used\[v\] = 0;

}

}

}

int main() {

if (scanf("%d%d", &n, &k) != 2) return 0;

int valid = 1;

for (int i = 0, u, v; i < k; i++) {

scanf("%d%d", &u, &v);

if (u &lt; 1 || u &gt; n || v &lt; 1 || v &gt; n || (f\[u\] && f\[u\] != v) || (r\[v\] && r\[v\] != u))

valid = 0;

else

f\[u\] = v, r\[v\] = u;

}

if (valid) backtrack(1);

if (!found) puts("0");

return 0;

}

**TRR1_3025 - Li?t kê t? h?p có ?i?u ki?n s? d?ng ph??ng pháp quay lui**

Cho tr??c ba s? nguyên d??ng n, k và t.

Yêu c?u: S? d?ng ph??ng pháp quay lui, li?t kê t?t c? các t? h?p g?m k ph?n t? c?a n s? nguyên d??ng ??u tiên, trong ?ó ph?n t? th? nh?t c?a t? h?p nh?n giá tr? t.

D? li?u: Vào t? t?p Input chu?n g?m m?t dòng ch?a ba s? nguyên d??ng n, k và t, v?i 3 <= n <= 30, k, t <= n.

K?t qu?: Ghi ra t?p Output chu?n g?m nhi?u dòng, m?i dòng m?t t? h?p tìm ???c theo th? t? xu?t hi?n trong quá trình li?t kê. N?u không có t? h?p th?a mãn thì ghi ra giá tr? 0.

Ví d?:

Input

5 3 2

Output

2 3 4

2 3 5

2 4 5

Gi?i thích: V?i n = 5 có 3 t? h?p g?m k = 3 ph?n t? th?a mãn ?i?u ki?n v?i s? 2 ??ng ? v? trí th? nh?t.

# include &lt;stdio.h&gt;

int n, k, t;

int a\[35\];

int found = 0;

void Try(int i) {

 int j;

 if (i == k) {

 found = 1;

 for (j = 0; j < k; j++) {

 if (j > 0)

 printf(" ");

 printf("%d", a\[j\]);

 }

 printf("\\n");

 return;

 }

 for (j = a\[i - 1\] + 1; j <= n; j++) {

 a\[i\] = j;

 Try(i + 1);

 }

}

int main() {

 scanf("%d %d %d", &n, &k, &t);

 a\[0\] = t;

 Try(1);

 if (found == 0)

 printf("0");

 return 0;

}

**?? bài: TRR1_3026 - Li?t kê t? h?p có ?i?u ki?n s? d?ng ph??ng pháp quay lui**

Cho tr??c ba s? nguyên d??ng n, k và t.

Yêu c?u: S? d?ng ph??ng pháp quay lui, li?t kê t?t c? các t? h?p g?m k ph?n t? c?a n s? nguyên d??ng ??u tiên, trong ?ó ph?n t? th? k c?a t? h?p nh?n giá tr? t.

D? li?u: Vào t? t?p Input chu?n g?m m?t dòng ch?a ba s? nguyên d??ng n, k và t, v?i 3 <= n <= 30, k, t <= n.

K?t qu?: Ghi ra t?p Output chu?n g?m nhi?u dòng, m?i dòng m?t t? h?p tìm ???c theo th? t? xu?t hi?n trong quá trình li?t kê. N?u không có t? h?p th?a mãn thì ghi ra giá tr? 0.

Ví d?:

Input

5 3 4

Output

1 2 4

1 3 4

2 3 4

Gi?i thích: V?i n = 5 có 3 t? h?p g?m k = 3 ph?n t? th?a mãn ?i?u ki?n v?i s? 4 ??ng ? v? trí th? k.

# include &lt;stdio.h&gt;

int n, k, t;

int a\[35\];

int found = 0;

void Try(int i) {

 int j;

 if (i == k - 1) {

 a\[i\] = t;

 found = 1;

 for (j = 0; j < k; j++) {

 if (j > 0)

 printf(" ");

 printf("%d", a\[j\]);

 }

 printf("\\n");

 return;

 }

 for (j = a\[i - 1\] + 1; j < t; j++) {

 a\[i\] = j;

 Try(i + 1);

 }

}

int main() {

 scanf("%d %d %d", &n, &k, &t);

 a\[0\] = 0;

 Try(0);

 if (found == 0)

 printf("0");

 return 0;

}

**?? bài: TRR1_3027 - Li?t kê xâu nh? phân có ?i?u ki?n s? d?ng ph??ng pháp quay lui**

Cho tr??c hai s? nguyên d??ng n và k.

Yêu c?u: Li?t kê t?t c? các xâu nh? phân ?? dài n theo th? t? t? ?i?n s? d?ng ph??ng pháp quay lui, trong ?ó k v? trí c?a xâu nh? phân ?ã cho tr??c giá tr?.

D? li?u: Vào t? t?p Input chu?n:

\- Dòng ??u ch?a hai s? nguyên d??ng n và k, v?i 3 <= n <= 100, k <= n.

\- Trong k dòng ti?p theo, dòng th? i (1 £ i £ k) ch?a hai s? nguyên u và v, 1 <= u <= n, 0 <= v <= 1,v?i ý ngh?a v? trí u c?a xâu nh? phân là s? v.

K?t qu?: Ghi ra t?p Output chu?n g?m nhi?u dòng, m?i dòng m?t xâu nh? phân tìm ???c theo th? t? xu?t hi?n trong quá trình li?t kê. N?u không có xâu nh? phân nào th?a mãn thì ghi ra giá tr? 0.

Ví d?:

Input

3 1

2 1

Output

0 1 0

0 1 1

1 1 0

1 1 1

Gi?i thích: V?i n = 3 có 4 xâu nh? phân s?p x?p theo th? t? t? ?i?n th?a mãn ?i?u ki?n có s? 1 ??ng ? v? trí th? hai.

# include &lt;stdio.h&gt;

int n, k;

int a\[105\];

int fixed\[105\];

int found = 0;

void Try(int i) {

 int j;

 if (i > n) {

 found = 1;

 for (j = 1; j <= n; j++) {

 if (j > 1)

 printf(" ");

 printf("%d", a\[j\]);

 }

 printf("\\n");

 return;

 }

 if (fixed\[i\] != -1) {

 a\[i\] = fixed\[i\];

 Try(i + 1);

 return;

 }

 a\[i\] = 0;

 Try(i + 1);

 a\[i\] = 1;

 Try(i + 1);

}

int main() {

 int i, u, v;

 scanf("%d %d", &n, &k);

 for (i = 1; i <= n; i++)

 fixed\[i\] = -1;

 for (i = 1; i <= k; i++) {

 scanf("%d %d", &u, &v);

 if (fixed\[u\] != -1 && fixed\[u\] != v) {

 printf("0");

 return 0;

 }

 fixed\[u\] = v;

 }

 Try(1);

 if (found == 0)

 printf("0");

 return 0;

}

**?? bài: TRR1_4001 - Bài toán cái túi 01**

M?t nhà thám hi?m có m?t cái túi có th? ch?a các ?? v?t v?i t?ng tr?ng l??ng không quá b. Nhà thám hi?m có n ?? v?t c?n mang theo. ?? v?t th? i (1? i ?n) có tr?ng l??ng , có giá tr? s? d?ng , trong ?ó là các s? nguyên d??ng.

**Yêu c?u:** S? d?ng ph??ng pháp duy?t toàn th?, tìm cách ch?n ?? v?t có th? ?em theo cho nhà thám hi?m sao cho t?ng giá tr? s? d?ng các ?? v?t trong túi là l?n nh?t.

**Input:** D? li?u vào t? t?p Input chu?n theo khuôn d?ng:

- Dòng ??u ch?a hai s? nguyên d??ng n và b, v?i n ? 20, b ? 10^7.
- Trong n dòng ti?p theo, m?i dòng th? i (1 ? i ? n) ch?a hai s? nguyên d??ng và , m?i s? ? 10^6.

**Output:** K?t qu? ghi ra t?p Output chu?n theo khuôn d?ng:

- Dòng ??u ghi ra s? là t?ng giá tr? s? d?ng các ?? v?t trong túi l?n nh?t tìm ???c.
- Dòng sau ghi ra n s? (1 ? i ? n), trong ?ó = 1 n?u ?? v?t th? i ???c ch?n và = 0 n?u ?? v?t th? i không ???c ch?n.

**Ví d?:**

| **Input**                             | **Output**      | **Gi?i thích**                                                           |
| ------------------------------------- | --------------- | ------------------------------------------------------------------------ |
| 3 8<br><br>5 8<br><br>7 12<br><br>3 7 | 15<br><br>1 0 1 | ?? v?t th? 1 và th? 3 ???c ch?n v?i t?ng giá tr? s? d?ng l?n nh?t là 15. |

# include &lt;stdio.h&gt;

int n;

long long b, a\[25\], c\[25\], max_val = 0;

int x\[25\], best_x\[25\];

void Try(int i, long long w, long long v) {

 if (i > n) {

 if (v > max_val) {

 max_val = v;

 for (int j = 1; j <= n; j++) best_x\[j\] = x\[j\];

 }

 return;

 }

 // Ch?n ?? v?t i = 1 (?u tiên th? tr??c)

 if (w + a\[i\] <= b) {

 x\[i\] = 1;

 Try(i + 1, w + a\[i\], v + c\[i\]);

 }

 // Không ch?n ?? v?t i = 0

 x\[i\] = 0;

 Try(i + 1, w, v);

}

int main() {

 scanf("%d %lld", &n, &b);

 for (int i = 1; i <= n; i++)

 scanf("%lld %lld", &a\[i\], &c\[i\]);

 Try(1, 0, 0);

 printf("%lld\\n", max_val);

 for (int i = 1; i <= n; i++)

 printf("%d%c", best_x\[i\], (i == n) ? '\\n' : ' ');

 return 0;

}

**?? bài: TRR1_4003 - Bài toán phân vi?c 01**

Công ty XYZ có n nhân viên và n công vi?c c?n hoàn thành. Bi?t r?ng, công nhân i có th? hoàn thành công vi?c j v?i chi phí th?i gian \$ (1 ? i, j ? n).

**Yêu c?u:** S? d?ng ph??ng pháp duy?t toàn th?, tìm m?t ph??ng án giao cho m?i công nhân th?c hi?n m?t vi?c sao cho t?ng th?i gian hoàn thành n vi?c k? trên là nh? nh?t.

**Input:** D? li?u vào t? t?p Input chu?n theo khuôn d?ng:

- Dòng ??u ch?a s? nguyên d??ng n, v?i n ? 10.
- Trong n dòng ti?p theo, dòng th? i (1 ? i ? n) ch?a n s? nguyên d??ng \$ (1 ? j ?n), m?i s? ? 10^6.

**Output:** K?t qu? ghi ra t?p Output chu?n theo khuôn d?ng:

- Dòng ??u ghi ra s? là t?ng th?i gian hoàn thành n vi?c nh? nh?t tìm ???c.
- Dòng sau ghi ra n s? nguyên d??ng là m?t hoán v? c?a n s? nguyên d??ng ??u tiên, trong ?ó s? ??ng ? v? trí th? i (1 ? i ? n) là s? th? t? công vi?c s? giao cho công nhân th? i t??ng ?ng hoàn thành.

**Ví d?:**

| **nput**                                                      | **Output**       | **Gi?i thích**                                                                                                                           |
| ------------------------------------------------------------- | ---------------- | ---------------------------------------------------------------------------------------------------------------------------------------- |
| 4<br><br>8 1 8 9<br><br>7 4 9 2<br><br>1 9 5 8<br><br>7 8 2 9 | 5<br><br>2 4 3 1 | Giao cho công nhân th? 1, 2, 3 và 4 th?c hi?n các công vi?c t??ng ?ng là 2, 4, 1 và 3 v?i t?ng th?i gian hoàn thành nh? nh?t là 5. |

# include &lt;stdio.h&gt;

int n;

int c\[11\]\[11\];

int x\[11\];

int used\[11\];

int best\[11\];

int min = 1000000000;

void Try(int i, int sum) {

 if (i > n) {

 if (sum < min) {

 min = sum;

 for (int j = 1; j <= n; j++)

 best\[j\] = x\[j\];

 }

 return;

 }

 for (int j = 1; j <= n; j++) {

 if (used\[j\] == 0) {

 used\[j\] = 1;

 x\[i\] = j;

 Try(i + 1, sum + c\[i\]\[j\]);

 used\[j\] = 0;

 }

 }

}

int main() {

 scanf("%d", &n);

 for (int i = 1; i <= n; i++)

 for (int j = 1; j <= n; j++)

 scanf("%d", &c\[i\]\[j\]);

 Try(1, 0);

 printf("%d\\n", min);

 for (int i = 1; i <= n; i++) {

 if (i > 1)

 printf(" ");

 printf("%d", best\[i\]);

 }

 return 0;

}

**?? bài: TRR1_4004 - Bài toán phân vi?c 02**

Công ty XYZ có n nhân viên và n công vi?c c?n hoàn thành. Bi?t r?ng, công nhân i có th? hoàn thành công vi?c j v?i n?ng su?t là (1 ? i, j ? n).

**Yêu c?u:** S? d?ng ph??ng pháp duy?t toàn th?, tìm m?t ph??ng án giao cho m?i công nhân th?c hi?n m?t vi?c sao cho t?ng n?ng su?t hoàn thành n vi?c k? trên là l?n nh?t.

**Input:** D? li?u vào t? t?p Input chu?n theo khuôn d?ng:

- Dòng ??u ch?a s? nguyên d??ng n, v?i n ? 10.
- Trong n dòng ti?p theo, dòng th? i (1 ? i ? n) ch?a n s? nguyên d??ng \$ (1 ? j ? n), m?i s? ? 10^6.

**Output:** K?t qu? ghi ra t?p Output chu?n theo khuôn d?ng:

- Dòng ??u ghi ra s? là t?ng n?ng su?t hoàn thành n vi?c l?n nh?t tìm ???c.
- Dòng sau ghi ra n s? nguyên d??ng là m?t hoán v? c?a n s? nguyên d??ng ??u tiên, trong ?ó s? ??ng ? v? trí th? i (1 ? i ? n) là s? th? t? công vi?c s? giao cho công nhân th? i t??ng ?ng hoàn thành.

| **Input**                                                     | **Output**        | **Gi?i thích**                                                                                                                            |
| ------------------------------------------------------------- | ----------------- | ----------------------------------------------------------------------------------------------------------------------------------------- |
| 4<br><br>1 1 3 6<br><br>7 1 3 2<br><br>1 9 2 5<br><br>3 3 8 2 | 30<br><br>4 1 2 3 | Giao cho công nhân th? 1, 2, 3 và 4 th?c hi?n các công vi?c t??ng ?ng là 4, 1, 2 và 3 v?i t?ng n?ng su?t hoàn thành l?n nh?t là 30. |

# include &lt;stdio.h&gt;

int n;

int c\[11\]\[11\];

int x\[11\];

int used\[11\];

int best\[11\];

int max = 0;

void Try(int i, int sum) {

 int j;

 if (i > n) {

 if (sum > max) {

 max = sum;

 for (j = 1; j <= n; j++)

 best\[j\] = x\[j\];

 }

 return;

 }

 for (j = 1; j <= n; j++) {

 if (used\[j\] == 0) {

 used\[j\] = 1;

 x\[i\] = j;

 Try(i + 1, sum + c\[i\]\[j\]);

 used\[j\] = 0;

 }

 }

}

int main() {

 int i, j;

 scanf("%d", &n);

 for (i = 1; i <= n; i++) {

 for (j = 1; j <= n; j++) {

 scanf("%d", &c\[i\]\[j\]);

 }

 }

 Try(1, 0);

 printf("%d\\n", max);

 for (i = 1; i <= n; i++) {

 if (i > 1)

 printf(" ");

 printf("%d", best\[i\]);

 }

 return 0;

}

**?? bài: TRR1_4007 - Bài toán ng??i du l?ch 02**

M?t ng??i du l?ch mu?n ?i tham quan n thành ph? ?ánh s? t? 1 ??n n. Xu?t phát t?i thành ph? th? 1, ng??i du l?ch mu?n qua t?t c? các thành ph? còn l?i m?i thành ph? ?úng m?t l?n r?i tr? l?i thành ph? xu?t phát.

Bi?t r?ng, chi phí ?i l?i t? thành ph? i ??n thành ph? j (1 ? i, j ? n) là .

**Yêu c?u:** S? d?ng ph??ng pháp nhánh c?n, tìm m?t hành trình cho ng??i ?i du l?ch có t?ng chi phí là nh? nh?t.

**Input:** D? li?u vào t? t?p Input chu?n theo khuôn d?ng:

- Dòng ??u ch?a s? nguyên d??ng n, v?i n ? 30.
- Trong n dòng ti?p theo, dòng th? i (1 ? i ? n) ch?a n s? nguyên d??ng (1 ? j ? n), m?i s? ? 10^6 và = 0.

**Output:** K?t qu? ghi ra t?p Output chu?n theo khuôn d?ng:

- Dòng ??u ghi ra s? là t?ng chi phí nh? nh?t tìm ???c.
- Dòng sau ghi ra n s? nguyên d??ng là s? th? t? các thành ph? xu?t hi?n ttrong hành trình du l?ch t??ng ?ng tìm ???c.

Ví d?:

Input

4

0 1 8 9

7 0 9 2

1 9 0 8

7 8 2 0

Output

5

1 2 4 3

Gi?i thích: Ng??i du l?ch tham quan các thành ph? theo th? t? 1, 2, 4, 3 và quay v? 1 v?i t?ng chi phí nh? nh?t là 5.

# include &lt;stdio.h&gt;

int n;

int c\[31\]\[31\];

int x\[31\];

int used\[31\];

int bestPath\[31\];

long long best = 1000000000000000000LL;

void Try(int i, long long cost) {

 int j;

 if (i > n) {

 cost = cost + c\[x\[n\]\]\[1\];

 if (cost < best) {

 best = cost;

 for (j = 1; j <= n; j++)

 bestPath\[j\] = x\[j\];

 }

 return;

 }

 if (cost >= best)

 return;

 for (j = 2; j <= n; j++) {

 if (used\[j\] == 0) {

 used\[j\] = 1;

 x\[i\] = j;

 Try(i + 1, cost + c\[x\[i - 1\]\]\[j\]);

 used\[j\] = 0;

 }

 }

}

int main() {

 int i, j;

 scanf("%d", &n);

 for (i = 1; i <= n; i++) {

 for (j = 1; j <= n; j++) {

 scanf("%d", &c\[i\]\[j\]);

 }

 }

 x\[1\] = 1;

 used\[1\] = 1;

 Try(2, 0);

 printf("%lld\\n", best);

 for (i = 1; i <= n; i++) {

 if (i > 1)

 printf(" ");

 printf("%d", bestPath\[i\]);

 }

 return 0;

}

**?? bài: TRR1_4008 - Bài toán phân vi?c 03**

Công ty XYZ có n nhân viên và n công vi?c c?n hoàn thành. Bi?t r?ng, công nhân i có th? hoàn thành công vi?c j v?i chi phí th?i gian \$c_{ij}\$ (\$1 \\le i, j \\le n\$).

**Yêu c?u:** S? d?ng ph??ng pháp nhánh c?n, tìm m?t ph??ng án giao cho m?i công nhân th?c hi?n m?t vi?c sao cho t?ng th?i gian hoàn thành n vi?c k? trên là nh? nh?t.

**Input:** D? li?u vào t? t?p Input chu?n theo khuôn d?ng:

- Dòng ??u ch?a s? nguyên d??ng n, v?i \$n \\le 15\$.
- Trong n dòng ti?p theo, dòng th? i (\$1 \\le i \\le n\$) ch?a n s? nguyên d??ng \$c_{ij}\$ (\$1 \\le j \\le n\$), m?i s? \$\\le 10^6\$.

**Output:** K?t qu? ghi ra t?p Output chu?n theo khuôn d?ng:

- Dòng ??u ghi ra s? là t?ng th?i gian hoàn thành n vi?c nh? nh?t tìm ???c.
- Dòng sau ghi ra n s? nguyên d??ng là m?t hoán v? c?a n s? nguyên d??ng ??u tiên, trong ?ó s? ??ng ? v? trí th? i (\$1 \\le i \\le n\$) là s? th? t? công vi?c s? giao cho công nhân th? i t??ng ?ng hoàn thành.

Input

4

8 1 8 9

7 4 9 2

1 9 5 8

7 8 2 9

Output

5

2 4 3 1

Gi?i thích: Giao cho công nhân th? 1, 2, 3 và 4 th?c hi?n các công vi?c t??ng ?ng là 2, 4, 1 và 3 v?i t?ng th?i gian hoàn thành nh? nh?t là 5.

# include &lt;stdio.h&gt;

int n;

int c\[16\]\[16\];

int x\[16\];

int used\[16\];

int bestX\[16\];

long long best = 1000000000000000000LL;

void Try(int i, long long sum) {

 int j;

 long long bound;

 int min;

 if (i > n) {

 if (sum < best) {

 best = sum;

 for (j = 1; j <= n; j++)

 bestX\[j\] = x\[j\];

 }

 return;

 }

 bound = sum;

 for (j = i; j <= n; j++) {

 min = 1000000000;

 for (int job = 1; job <= n; job++) {

 if (used\[job\] == 0 && c\[j\]\[job\] < min)

 min = c\[j\]\[job\];

 }

 bound += min;

 }

 if (bound >= best)

 return;

 for (j = 1; j <= n; j++) {

 if (used\[j\] == 0) {

 used\[j\] = 1;

 x\[i\] = j;

 Try(i + 1, sum + c\[i\]\[j\]);

 used\[j\] = 0;

 }

 }

}

int main() {

 int i, j;

 scanf("%d", &n);

 for (i = 1; i <= n; i++) {

 for (j = 1; j <= n; j++) {

 scanf("%d", &c\[i\]\[j\]);

 }

 }

 Try(1, 0);

 printf("%lld\\n", best);

 for (i = 1; i <= n; i++) {

 if (i > 1)

 printf(" ");

 printf("%d", bestX\[i\]);

 }

 return 0;

}

**?? bài: TRR1_4009 - Bài toán phân vi?c 04**

Công ty XYZ có n nhân viên và n công vi?c c?n hoàn thành. Bi?t r?ng, công nhân i có th? hoàn thành công vi?c j v?i n?ng su?t là (1 ? i, j ? n).

**Yêu c?u:** S? d?ng ph??ng pháp nhánh c?n, tìm m?t ph??ng án giao cho m?i công nhân th?c hi?n m?t vi?c sao cho t?ng n?ng su?t hoàn thành n vi?c k? trên là l?n nh?t.

**Input:** D? li?u vào t? t?p Input chu?n theo khuôn d?ng:

- Dòng ??u ch?a s? nguyên d??ng n, v?i n ? 15.
- Trong n dòng ti?p theo, dòng th? i (1 ? i ? n) ch?a n s? nguyên d??ng (1 ? j ? n), m?i s? ? .

**Output:** K?t qu? ghi ra t?p Output chu?n theo khuôn d?ng:

- Dòng ??u ghi ra s? là t?ng n?ng su?t hoàn thành n vi?c l?n nh?t tìm ???c.
- Dòng sau ghi ra n s? nguyên d??ng là m?t hoán v? c?a n s? nguyên d??ng ??u tiên, trong ?ó s? ??ng ? v? trí th? i (1 ? i ? n) là s? th? t? công vi?c s? giao cho công nhân th? i t??ng ?ng hoàn thành.

Input

4

1 1 3 6

7 1 3 2

1 9 2 5

3 3 8 2

Output

30

4 1 2 3

Gi?i thích:Giao cho công nhân th? 1, 2, 3 và 4 th?c hi?n các công vi?c t??ng ?ng là 4, 1, 2 và 3 v?i t?ng n?ng su?t hoàn thành l?n nh?t là 30.

# include &lt;stdio.h&gt;

int n;

int c\[16\]\[16\];

int x\[16\];

int used\[16\];

int bestX\[16\];

long long best = 0;

void Try(int i, long long sum) {

 int j;

 long long bound;

 int max;

 if (i > n) {

 if (sum > best) {

 best = sum;

 for (j = 1; j <= n; j++)

 bestX\[j\] = x\[j\];

 }

 return;

 }

 bound = sum;

 for (j = i; j <= n; j++) {

 max = 0;

 for (int job = 1; job <= n; job++) {

 if (used\[job\] == 0 && c\[j\]\[job\] > max)

 max = c\[j\]\[job\];

 }

 bound += max;

 }

 if (bound <= best)

 return;

 for (j = 1; j <= n; j++) {

 if (used\[j\] == 0) {

 used\[j\] = 1;

 x\[i\] = j;

 Try(i + 1, sum + c\[i\]\[j\]);

 used\[j\] = 0;

 }

 }

}

int main() {

 int i, j;

 scanf("%d", &n);

 for (i = 1; i <= n; i++) {

 for (j = 1; j <= n; j++) {

 scanf("%d", &c\[i\]\[j\]);

 }

 }

 Try(1, 0);

 printf("%lld\\n", best);

 for (i = 1; i <= n; i++) {

 if (i > 1)

 printf(" ");

 printf("%d", bestX\[i\]);

 }

 return 0;

}

**?? bài: TRR1_5001 - Các qu? c?u**

Trong m?t h?p có ch?a h qu? c?u nh?. M?i qu? c?u có kích th??c xác ??nh và ???c s?n m?t màu nào ?ó. Các qu? c?u trong h?p có t?t c? m màu và n kích th??c khác nhau.

**Yêu c?u:** Xác ??nh s? l??ng qu? c?u ít nh?t c?n l?y ra t? h?p ?? ch?c ch?n có t qu? c?u gi?ng nhau c? v? kích th??c l?n màu s?c.

**Input:** D? li?u vào t? t?p Input chu?n g?m m?t dòng ch?a b?n s? nguyên d??ng h, m, n và t, m?i s? không v??t quá . Trong ?ó, t ? 2.

**Output:** K?t qu? ghi ra t?p Output chu?n s? l??ng ít nh?t các qu? c?u có th? l?y ra t? h?p th?a mãn ?i?u ki?n. Trong tr??ng h?p không th?c hi?n ???c yêu c?u thì ghi ra giá tr? 0 thay th?.

Input

10 3 2 2

Output

7

Gi?i thích

Ch? c?n l?y ra ít nh?t 7 qu? c?u t? h?p thì trong chúng có ít nh?t hai qu? c?u gi?ng nhau c? v? kích th??c l?n màu s?c.

Input

10 2 3 3

Output

0

Gi?i thích

S? qu? c?u ít nh?t c?n l?y ra t? h?p th?a mãn ?i?u ki?n là 13. S? qu? c?u trong h?p ch? có 10.

# include &lt;stdio.h&gt;

int main() {

 long long h, m, n, t;

 long long result;

 scanf("%lld %lld %lld %lld", &h, &m, &n, &t);

 result = (t - 1) \* m \* n + 1;

 if (result > h)

 printf("0");

 else

 printf("%lld", result);

 return 0;

}

**_?? bài: TRR1_5005 - Ch?n s? 03_**

Cho tr??c ba s? nguyên d??ng n, m và p.

**Yêu c?u:** Tìm s? l??ng t ít nh?t các s? nguyên d??ng x không v??t quá n c?n ch?n ra ?? ch?c ch?n có s? có s? d? khác p khi chia cho m.

**Input:** D? li?u vào t? t?p Input chu?n g?m m?t dòng ch?a ba s? nguyên d??ng n, m và p, m?i s? không v??t quá và p < m.

**Output:** K?t qu? ghi ra t?p Output chu?n giá tr? t tìm ???c.

Input

10 5 3

3

Output

3

Gi?i thích:Có 2 s? nguyên d??ng x không v??t quá n = 10 có s? d? p = 3 khi chia cho m = 5 g?m 3 và 8. Do ?ó ch? c?n ch?n t = 3 thì ch?c ch?n có s? không có d?ng chia cho 5 d? 3.

# include &lt;stdio.h&gt;

int main() {

 int n, m, p;

 int dem = 0;

 scanf("%d%d%d", &n, &m, &p);

 for (int x = 1; x <= n; x++) {

 if (x % m == p)

 dem++;

 }

 if (dem == n)

 printf("0");

 else

 printf("%d", dem + 1);

 return 0;

}

**?? bài: TRR1_5021 - Ch?n c?p s? 08**

Cho tr??c hai s? nguyên d??ng n và k không v??t quá .

**Yêu c?u:** Tìm s? l??ng t ít nh?t các c?p (x, y) c?n ch?n ra, trong ?ó x, y là các s? nguyên d??ng không v??t quá n, ?? ch?c ch?n có k c?p s? (a, b) sao cho a\*b chia h?t cho 4.

**Input:** D? li?u vào t? t?p Input chu?n ch?a hai s? nguyên d??ng n và k không v??t quá .

**Output:** K?t qu? ghi ra t?p Output chu?n giá tr? t tìm ???c. N?u không tìm ???c t thì ghi giá tr? 0 thay th?.

Input

4 2

Output

10

Gi?i thích: Có 8 c?p s? (a, b) mà a\*b không chia h?t cho 4: (1,1), (1,2), (1,3), (2,1), (2,3), (3,1), (3,2), (3,3). Do ?ó ch? c?n ch?n t = 10 c?p s? (a,b) thì ch?c ch?n có k = 2 c?p s? th?a mãn a\*b chia h?t cho 4.

# include &lt;stdio.h&gt;

int main() {

 int n, k;

 int dem = 0;

 scanf("%d%d", &n, &k);

 for (int a = 1; a <= n; a++) {

 for (int b = 1; b <= n; b++) {

 if ((a \* b) % 4 != 0)

 dem++;

 }

 }

 if (dem + k > n \* n)

 printf("0");

 else

 printf("%d", dem + k);

 return 0;

}

**?? bài: TRR1_5022 - Ch?n xâu nh? phân 08**

Cho tr??c hai s? nguyên d??ng n và k.

Yêu c?u: Tìm s? l??ng ít nh?t t các xâu nh? phân ?? dài n c?n ch?n ra ?? ch?c ch?n t?n t?i xâu có ?úng k ch? s? 1.

Input: D? li?u vào t? t?p Input chu?n g?m m?t dòng ch?a hai s? nguyên d??ng n, k không v??t quá 50 và 2 <= k <= n.

Output: K?t qu? ghi ra t?p Output chu?n giá tr? t tìm ???c.N?u không tìm ???c t thì ghi giá tr? 0 thay th?.

Input

3 2

Output

6

Gi?i thích:Có 5 xâu nh? phân ?? dài 3 không ch?a ?úng 2 ch? s? 1 là 000, 001, 010, 100 và 111. Do ?ó t = 6 th?a mãn.

# include &lt;stdio.h&gt;

int main() {

 int n, k;

 long long c = 1;

 long long total, result;

 scanf("%d%d", &n, &k);

 for (int i = 1; i <= k; i++) {

 c = c \* (n - i + 1) / i;

 }

 total = 1LL << n;

 result = total - c + 1;

 if (result > total)

 printf("0");

 else

 printf("%lld", result);

 return 0;

}

M?t ng??i du l?ch mu?n ?i tham quan n thành ph? ?ánh s? t? 1 ??n n. Xu?t phát t?i thành ph? th? 1, ng??i du l?ch mu?n qua t?t c? các thành ph? còn l?i m?i thành ph? ?úng m?t l?n r?i tr? l?i thành ph? xu?t phát.

Bi?t r?ng, chi phí ?i l?i t? thành ph? i ??n thành ph? j (1 <= i, j <= n) là c<sub>ij</sub>.

**Yêu c?u**: S? d?ng thu?t toán duy?t toàn b?, tìm m?t hành trình cho ng??i ?i du l?ch sao cho t?ng chi phí là nh? nh?t.

**Input:**

\- Dòng ??u ch?a s? nguyên d??ng n, v?i n <= 30.

\- Trong n dòng ti?p theo, dòng th? i (1 <= i <= n) ch?a n s? nguyên d??ng c<sub>ij</sub> (1 <= j <= n), m?i s? <= 10<sup>6</sup> và c<sub>ii</sub> = 0.

**Output:**

**\-** N?u bài toán có m?t nghi?m t?i ?u:

- Dòng ??u ghi ra s? là t?ng chi phí nh? nh?t (f\*) tìm ???c.
- Dòng sau ghi ra n s? nguyên d??ng là s? th? t? các thành ph? xu?t hi?n ttrong hành trình du l?ch t??ng ?ng tìm ???c.

\- N?u bài toán có nhi?u h?n m?t nghi?m t?i ?u:

- Dòng ??u tiên ghi ra hai giá tr?: giá tr? t?ng chi phí nh? nh?t ( f\*) và s? ph??ng án t?i ?u c?a bài toán, m?i giá tr? cách nhau m?t kho?ng tr?ng.
- Các dòng ti?p theo ghi các ph??ng án t?i ?u, m?i ph??ng án trên m?t dòng.

| **Input**                                                             | **Output**                            | **Gi?i thích**                                                                                                                                                                                            |
| --------------------------------------------------------------------- | ------------------------------------- | --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| 4 <br>0 1 8 9<br><br>7 0 9 2<br><br>1 9 0 8<br><br>7 8 2 0            | 6<br><br>1 2 4 3                      | Có m?t hành trình t?i ?u c?a ng??i du l?ch, <br><br>tham quan các thành ph? theo th? t? 1,2,4,3, <br><br>sau ?ó quay v? thành ph? 1 v?i t?ng chi phí nh? nh?t là 6                                        |
| 4 <br><br/>0 1 1 5 <br><br/>1 0 5 1 <br><br/>1 5 0 1 <br><br/>5 1 1 0 | 4 2 <br><br/>1 2 4 3 <br><br/>1 3 4 2 | Có hai hành trình t?i ?u ??u có giá tr? là 4:<br><br>\- Hành trình tham quan các thành ph? theo th? t? 1,2,4,3 và quay v? 1<br><br>\- Hành trình tham quan các thành ph? theo th? t? 1,3,4,2 và quay v? 1 |

# include &lt;stdio.h&gt;

int n, c\[35\]\[35\], visited\[35\], x\[35\];

int min_cost = 2e9, count = 0;

int best_paths\[1000\]\[35\];

void Try(int i, int cost) {

 if (cost >= min_cost) return; // C?t nhánh s?m

 if (i > n) {

 int total = cost + c\[x\[n\]\]\[1\];

 if (total < min_cost) {

 min_cost = total;

 count = 0;

 }

 if (total == min_cost) {

 for (int j = 1; j <= n; j++) best_paths\[count\]\[j\] = x\[j\];

 count++;

 }

 return;

 }

 for (int j = 2; j <= n; j++) {

 if (!visited\[j\]) {

 x\[i\] = j;

 visited\[j\] = 1;

 Try(i + 1, cost + c\[x\[i - 1\]\]\[j\]);

 visited\[j\] = 0;

 }

 }

}

int main() {

 if (scanf("%d", &n) != 1) return 0;

 for (int i = 1; i <= n; i++)

 for (int j = 1; j <= n; j++)

 scanf("%d", &c\[i\]\[j\]);

 x\[1\] = 1; visited\[1\] = 1;

 Try(2, 0);

 // In k?t qu?

 if (count == 1) {

 printf("%d\\n", min_cost);

 } else {

 printf("%d %d\\n", min_cost, count);

 }

 for (int k = 0; k < count; k++) {

 for (int j = 1; j <= n; j++)

 printf("%d%c", best_paths\[k\]\[j\], (j == n) ? '\\n' : ' ');

 }

 return 0;

}

**\------------------------Ôn t?p --------------------**

**![Picture 1](data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAtAAAAEVCAYAAADJmtIGAAAAAXNSR0IArs4c6QAAAARnQU1BAACxjwv8YQUAAAAJcEhZcwAADsMAAA7DAcdvqGQAAFk5SURBVHhe7d1xUB3XnS/4rzKJxxEwDw1Yb6RMLmiKjYzKQUuEEQgLJVZlQCWP7XnrQKErIYW3KylYSYBNOdoyUrESfs9xuQROZCxpZrBBQpRwZmM7UgkmK2ckGYNlySyMn0jyqAB3JtY8CyLeXGAymcl4/+jT3adPd9/bfe8FAfp+qlQ23X37nj59uvvXp3997rK16/I+ARERERERefIpdQIREREREbljAE1ERERE5AMD6KWkqAYt7a1oayxT5xARERFRgjCAXkIqtqXiamUVdtd3qbOIiIiIKEGW8SVCIiIiIiLvEt8DHWxAW/tx1BWpMxamwtrjaGtvxZGgOse7isZWtL1cg0J1hmdlONLeipbaAnWGd8EGtC3G9A097SSu+nMW/35Z7ApQ93Ir2tobUKHOIiIiopj5C6D1YMf4pwXKhbUN4r/H0VYSUD+VEPp3JFYBCrOWY7ynCoc71HleaAFKadyb3IXDlVWobupXZ3hUgLpNQHdlN8YDxXNQT3OnYlsWRk6ewiBysC2OmxirRO2Xxa4fx54+hcFwANkJq1siIiLyHEBXNLaibV8OJnqqsLtS/3cG2NGK/bkBpGYCfU0HsLsnpH40AcqwLTddnRi/ogKkjpyKMXiGCFCq0D0Xm+xHsAA424BOdOFw5Rkgf5H0QhfVYNXwARzr1epxeGWieosXyH5ZEPpx7OluTK2M4+kGERERWXgKoAtrj6M0AIee2vkJVApri5GhTkyE3mYcjrnXd+EoHOvHsV79r34cuxZKUCA61/rRJ7WnzmuLf18sTF04tgTaORER0ULh4SXCMhxpL0VGeAgnnm5GnzobWk9iXWYzjnWIXNySdAyePAPs2Iv1KQAQQndlAzqND4h16n+Gul1HjqhoVB7Fh4dw4ul+FL68F+vvdOPEZDH25y7HzO1JJD2QBkAP9AtQ97L4/vAQukeyUJp2RXyP9ftnBk6huimAI+2lgH6TUFSDln05SAIAzGLw5AEpSLWqaGxF6YohnDgL7NI/o2yTdTuU9YnvmrDdoJiMz4eHcOLdVGxDg7mspaz69rgHTEZ5n/4I2/R6UPdBsMFMx7Hse6nuxGcKa49jf+5ysV1XkLpPrdt+aX3StkeoY09ltLGWrRulYh2ivYi2cOLpZvRJ2zfe0w2UFGNKfL+5PTDa7ljtcezPGsGJp5uR6aVsrvXnzNf2yuuW6s3SRpRtRNR2YdbdzMApXE0rBerlY5aIiIh00Xugg+u0i/mdj9wDgF4RPBuWY/2+ncDZKuyu7MY4AtisvyBXVIOW9mJMnRRpICeHMBModX35rbO+SqSFzGLwZBV2P/0RtrWLYGhFMbbhCgbDAP7hr5X0EWvv+Ni1EcysWI3Cohq0iEBZ/37k7kVLbQjDISB9ZYEI7LIwIsrYHVqO9fuivIiVkoP9O4DTlaK8Ui6y1oMfQndlFXZXnsJgeDnW7xDpCsEGtEnBr6OiGmxGt1bes8AuOc882IC2fWL4OvHdSbl7XV5IlHKDU3Kwv30dhh3Ka94Eie2/k4P9Iu+9pTaEw5WntDoXrKk7XThc2Y1xaAGgEbB1NODEQEgJns1ym3XssYw2WgBo7NfhddINi54LLC3e0aC1PQBAF4ZDy5GaqQWh+7NGcMIoVwCl7Q3IvDaCmZTV+N+8lC1i/an7JYbtlco+3mPedHTWn8JgSATPRTVoKQlgXNTHiYFZJOXudF6feMqj191p7GT+OBERUQTRA2hhZtJPnobcmxjCVBhIStOuyBXbcpAUumL2vvY24/TArHuwYNMlBXAjuNjUhWNPixfwxqZEQKRIycH+fTnASD8yt+UgKdRt9t6K70/K3YvSwCxGrvXbyth5cQgzSMeqSOWTexnHpjADLSAz509hDNDSFkZmzemWQM5FZiqSVqzWAu7eZlQbwWoB6jYFMDPQbfYUdjSgOwQk5ZY6BPzSTUV4CCf0pwJKeSuyA0B4BH2W7dduYNx7MGVdONwTAgLrpDKUYVvWlLHOim05mOgxezi17wggO+itjKqKxlJkyPu1o9saMKMft+7If5sySlpRGghheKwGmwOzGDxr9hZ31ms3gKX7cpAUuo7veCibv/qLbXvR24+RsLjhMwSAyX7pRncWU1qjQ9+1kYhtLDNtubGuvqYDc56WRUREtJh5DqATowCrVqjT9Iv7cmTlq71zUUTqFZeFh3CisgrVTYjw/XrQr5XRcsPQ24zqSvcUjmj6mg5g99PN6BPD1ZnpAR513MR4iujFfLkGhR16+kYAqSnqwkDncAhA7CMvjE1KAT4A9H6EiUjBnJOOm9YnD8F1SB/RgzutjjNKpBFdRC+8NSD0ymGfRQiYVVovbQM6M1MdngR0YTgUIZ3CQULqL6p+HHs3ZLlRKqxdjVt6gC61Wf0FYPu2mTqHtScXei95J9M3iIiIXEUPoEWvblJWQQJeTHMO+HQTH6u9c4kW6fv1AD7SMrHSAuc28Xj+xIASYEWlDXPXHdIf84txq4tWw31sErP30a++pisYT5GGlQuuQ4bv9XXh4sCs0W4qsoGrSu+rnl4g/7P30HqRmH1WuNK9Nq296ZElpv48EDcp2o1SAQrxkSXorWjUbk6yh0WqlDTPpqNBpFtBBNJRUpaIiIjuYdED6N5mXBWBm+s4vUU1aHHJYbYSvXmOwcgcBBg2kb5fD+C1ZWw3DEU1OGLLX/WiAHUva+kFuy0vUvoQbMCRoMgHF4F0xqYaFIrH+LayAgAmcCvGHnM9+DV6iEsCllxbr/qujWAmJQfbgmXIxk1p27Xe4Yxstc2UoS6mOhZpQo714F3EJyFGCo4Xiam/6LS2mrGpBoXBUqR+bPaQy3n3bi+myioaG1AhbtRs7y0QERGRRfQAWn85Kaw9cre9BBVsQNsO4LTHx9t6rmupFHCrOceRFNbWOAa/gP6oXEoDCDaYL2eJX6Rz/f7wEC6KQKNzOASk5GCXtK2F+amYimeYNT2HWfx4i18ZJWaP4NjkrEhf0R7jW8vqkBftV7AB+9OuWHqG1eELb92Rt6kMR0oC4uVR6Vcoxc1XRkkpMGxtH50XtZdH5fZUWLsOiKmOHeqhqAablX0/NjkLpKRCy6QoQN0OLa0ho0T06IvyWl62E+sZfzfyKBoWUesvcTovDmEmJQu7NgHDtu8w8/YL87MipnDAckxoNyRz/0SIiIhocfIwjJ3JOryXIOWGWufbhzQzXrTzOeyadYitIUzk5rgOgWcpg2UoMykAUr5fXQegDhXmVkZpqDyYQ8ztVz/3call2LHxEJARWK4NkdYDlErL28faFj3QuAmU6HWpDAuolNVxHUCM5ZXIL0pa6lDfjnT7cH/BBrSVQBnGUHBsB/BWRtu+UPZ9eAiDd3Kw3rLv5eELZzHYM4KsEvvwge5DDiaw/gwe1+mwvRrt81kj6jLKUI2hEBAIIMmlfVQ0NgDDUls0jgm9fOpQlERERPcuXwE03SPkcb1lwQYckcef9qQMRxqBw+oNylKW0PojIiKihcZTCgfdSwpQtyMVtxyDvCn/eerBdbb0jaUtwfVHRERECw4DaLIqKkBWisMLZEU1aMn+yFOeuqkAdY65uUtYQuuPiIiIFiKmcJCdmiMOt/xdZ2YOceSfQF+y4qw/IiIiWtgYQBMRERER+cAUDiIiIiIiHxhAExERERH5wACaiIiIiMgHBtBERERERD4wgCYiIiIi8oEBNBERERGRDwygiYiIiIh8YABNREREROQDA2giIiIiIh8YQBMRERER+cAAmoiIiIjIBwbQREREREQ+MIAmIiIiIvKBATQRERERkQ8MoImIiIiIfGAATURERETkAwNoIqIFoQB1L7eirb0VR4LqPCIiWkgWfQAdbLmAa+9dxrVLTbiXrjkVja1oaz+OuiJ1DhEtTv049nQVdp8cwpQ6i+KSmPNlGY60t6Lt5RoUqrOI6J6z6APojurtyN/Yguv4Aooq1LlLVRmy0Y3dlQdwrFedR0SLVwHqtgF9Hep0il2izpddOFxZhd3vpmLbvdRbQ0SOlq1dl/eJOnFxKkew4hw6OtXpS1BRAQp7+9GnTiciIiueL4loDkQNoFsuXUZesnXa6PktKD8KAOVouVRtzDemH2rHtccyAIzjzY2VeM768QQzyxC+0YKt1efUBWITbEBbSUCdajHecwpTm/ZifUoI3ZUNmJ/YvQB1L+/F+pRZDJ6M3KNSWHsc+7NGcOLp5iV98ahobEVpIHp9xM57nccs2IC2kvQI69fKkDVyCtVN/erMqAprj2N/7kSUdjoX21mGI+2lQE8VDsu9qvrxFerG7vouaUYURTVo2ZeFEal8rvvfYdk5J7ZrZiCW/aTVVQbm83zioqgGLftykOR3/0SlbWN6TPUTC69ter7LRUSLXdQUjuqtW/DmuPm3GTwDwDljviWo/nIGRs9vwZvjGXi0pdz88Fw4tB15+AAvNX8AbNiOZ9X5MSpcmY6ZgVPYXVmF3ZWnMBiG9HcVukMwcha7QwFkz9cjvWApskZO4cQAsH5bmTrXoAVMy9XJS1AZsgMhdMf9eDYCj3UeMw83a3pbi+Xi7rktJHw79YBQVYC6TUB3ZTfGA8Xe81L1oE6Z3FlfhRMDQFZ+gXVGbzOq57JdOKjIDmC8J9b9VAz0aOeTzbXKtsyzwvwsYODUnATP9vagCDagrb0Vbe0NqBB/x/xSpac27a1cFY2iPIizTES0JEQNoAHgubILGBX/v+bLyst6FU14FBeMoDrYUom0v9WC6efKWvDztYkLau2ewbkvT+KlrbXo6KzF1vNIYMA+gqsRLoKdF80XfTrruzG1cj4ueAWoW3kT1U396Gs6gN3Dq12Dj76mAzgxMKtOXnAsF6VYFK3GVM9c9tZ5r/OYdTRgd09InZow3tpCgrcz2IA2KSjJKGlFW6MIYIIFwNkGdKILhyvPAPlugY2itxnVJ4cwo04H0Nd0BiOIdhMy1wqwarLb2tPuorC2QanfMhTiDA53aDcEp1EQ33ERp0yM4HSE819sunC4shtSf4yjimygu7IKJwbSUdreirZNU7jooU7tvLZpb+XqrL+J7HZtlJS27Jue9jMRLV1RUzh0wZYL+PYGLVfDmsKxHb/aGilNY35zk4MV5ejoTFAahyG+x+d3y4JP4Qg2oK0Ed/9x9UIQNYUjPt5SOOaCSwpHrO5GWkaiLYVtiNlCTZVYqOUiooXKcwANPINz723HGgCY/kDr9T3UjnOolFI6NHKwjfELyC97AahowqWaLyHF+PwtPK6vL2KutPS9kL5b/R7LPPkz43hz4wV8zsjVnsb15u2o7jQfCSPqSTNyAG0NVEXO3Z1u7B5eZzyaH++pwuEx8xF0pBxJ45F7qBsnJteh8FqDuNDq+Xz6kpFzJc1y9aNQ/5zIaTS+IzyE7pEslKZd0R7XWtIJRN5gZgPaNk3hxNMfYZu4yJzGTpEWYM0tdE4XsOcfanmr0iJuuZZO5emFw2NXpS5cP2eylDVk3V+2ehK0/QZzP6jLhYdcbljMC7Rj3RkB9Blgh1i3ZV1RAlEjKLuC1H2iXqTPmwH0TWTr9SbVufN29pttzqk9O5UD1lSLmYEhTOTmWMutpKxEOhZgKdssBntGkFViBp/u5Y5+gxatTuysbc5abqU9urQDtbzmcpE+H6XtOK0XsC0jsy5vHjvqeqzbqJx/YqqrCNuSqbcLvdzmOsZ7uoGSYkw5bE9izpd6uboxklUqPuPxfBP12HU43wGu5XHfHiJaSDylcGheQPl58ZAr+UuoamnCuS9P4i2X4Dl8owX5Gy9gNGM7LrWUA5212Kp/HrCuz5UeCI/jzY0iFzv5S3j8kJY6UrUhWQuaN7bg+rRernJt3c0fIGys5xyq/1L+W+htRnVlbPmKOusFRzphB0rRln3TyJfOKGlF2w7gdGUVdveEkJRb6vyItqgGu7JGcKKyCruH12F/brqYYQbxZl52AKV6nmBE/Tj2tJbHrZMf649dG8HMitUoNAIOLc97d88E1u87jrqxmxhPyURQXECScvdiF86IMiw3cwuDDdifCwyelPPEnfOTtbzVWTG/yvlCbCmP+K4d2hisFY2lyAh1i7roxjikvNEIn5P1NR0wUidmJkPA2BRmRHC4u75L2xfS9pwYmBX7LXJ92pkXX9e6AwAsx/p9O4Gz2ljAMyk5Yrgs9eKtCDagbV8OkrAc6/etw3Cl+fn9etoEACCA0nYxvycE6PnHrtsZoT1vstcnIAfy2rpOI8tablsbCyEpdy9a3HJ+gw0iyK3C7sozQHaWOc+13PYgXWUety51YmPewJjftVMsa523u7Ib4yk52O8wXrDZ5ma1ckvBs/PnPbQdH8cd5Btr6dgpbSyLXJ/q+acnBARKXfKAI9WVxnFbbKlMcmpFF4ZDy5GaKc1G4s+XSbnF2vGnl2uftrzr+cZoZ27HrlbfpQFxnhPv0yA8hBMOwbP79hDRQuMjgAZw9IIWqAJI2fAFTP6l1hNsKkfR2mQA0/j51XMAxjE5DaSsLYjtR04OPaT1Io9/iOcAPFe2BfkbRfpIZy22btyC/K216MA5/GpS/fD8sAZOUmAl9c6MTc7aeiSAdKxyvFAD0E++HQ3m2KXBUqxPCUl52f04dnYIM4jzBcaUHOzflwOMTKBwUwAzA93mSb2jAd2h5Vi/rxQZoXdxQFzMzN6kfty6Y66qcGU6EB5Bn7hodw6HIm9nRAWo2xTAuJHfLH5kQtRhZ70Z5LZYgsvIn7MRF+2k3L1o25eKq5VST6n0ElpFY6tDD59XZiDgVncaqcer9yNMGNOj5GgagccsBk+K7e5txumBWSCwTgoYpB4vcbMAsazzdkZozy4qtuUgKXTFCNz6mq5I5db2jb2NAUlZBbZg03FfDk+YLxG6ljt6Xrl53LrUiaKwthgZITO/ua/pgHFsFtYWIyM8JOXpduFwTwhIyUKhh7Yf+fPR246/464M23KBwbP68SDGNq7vilyfwVKsx5CZF93RgN3ysSKJVFc6t21xk1HSitJACMMO35fI8+XMwBlRTuvyrucby7HndOwCmWnLgdBNow33jcwCKalQ7wUMTttDRAuOvwAa59D7cxFBYxK/st0+ZyAtGQCSkVdzGdfeE2kTyWnuJ4sIgqvS1EkOnsG59y7jCdfuuUWmtxlX9R7rdvPFq8KVDj0R4kSdHs8LjOEhnKisQnXTb5FqPOo0GcG/Uw+xoq/pCsblnhflwu5PwLE8pjLtV8F2AKf1Xh3Aw+cciCAODhfXwtrjaGtvRfaw6HVbRPo+li/jkSVmOwuwaoXozXfkvG/GJl0CiqICZKnLK0FuYsodXWaa+82T47yxKczAocfUQbyf93XcFa2Gw5nE4FafjucfF47bE6fxnirsduqxncvzpSUQdjvfRNd5cQgz0pMNa0CtcNkeIlp4fAbQ3o2e13qLtX9u+c0eZTzkMJJHOVouXca19x7CkJ7esUR01puPPhEoRVtjmQiG7AEeAEx8HHsKiimEqbBLT6BTcOOoCxcHZo2T//7cCXS79fxGpZXH+WJXgLqXtTxKe89ypM85K6w9js2Tp3BiYBYZJdLP/UrpA049bQudFkhNYUydoUrwdialuaVORGhjTuWMFvAkuNyRjE3OAitW28tt3AA49TbPYsq2UXbxft7Xcdf7ESbcAvMI9dn38YTn80CkupoLc3a+LFqNdMxiaizS+caD3mZcDS3H+n3a/ildEblDwml7iGjhiSOATsPnbMlkL2BIBLLmcHflaLnUbg2ARY90tB7mjurLYvg8aTzpQ+1aTvWh7Vrv9vQkxvAMclx7oEU5s9K0Fxjj4B4Y+AkyoyiqQYs4YVrSQzq6MRgGMkrMHD77o18HRrnEo1LjwlaGbbnLtRSOl2tQiH4cezcEpORgl5GPWoDCrAi9JapgA/anXRF5gi49RhKzh7QAdbXqRUJ71KnmTsrD3hn7w9JTGf1zssLa49iFM6gWQ12dGICW92181nwUXpEt7/9o9Tk3XINJAMByaSxkrTzj73q94Lttpx/i8bScGxtchwzxCL6lFg5tLFI5uzAcgmVfVmzTc72Po241PJTbLZXBn75rI5ixlFtr70eCepqKNc9eTWWxkHrRK2prAL+fV/k67rQ6lc8jQAHqGvXvdqnPjptmrrSuqAZHHHLXI9VVVErPe2FtsdF+HD+f4POleY4vQN0O6z5wPt9Ep9+gG/snUhDutj1EtODENgqHxOnX/57tklMqpFEvlF8uDE9PIyVZGa1DJY/eAZdRPTCO6zfSkLdBy7/Wv89SjulphJOTpVFAatHhZRQO28tI1jenrS8RTuB2OB0P6IUNdePEZLH1bfceoDTS6BBFNTiyIwsZKfY35G1vldvyqk2Ob9lbtiWEwYF0rFeHuXMdIcH+Vv3VtL3mm+XhIZw4C+xy+KEL17f1jdEaHOpBcBsVwDI9HMI4AshIMb/L7XMycxnx/bD+UIf25r+5zeOhEDICAZflXeoTiF53//ob4DP3iz9mMSiPpAFzJAv58+q2aPstHeMhICOgbbdjXSGE7pNT2OxpO/8F//Sb38cf6EVzas8OwZrl+0IhjAcC1uHBlDYWcUQPpc2PDwwhPVcfhcNar5b983cTWP9F9+Msep04lEn9IReHkTKM055bmwcsy5rf4/b5KG0nluPOYVQIrRwR6tOhvt32P+BWV9ooPhG3RR4xSGr7kUafScT5UmOva73Nup5vwmEgRf8Cp2P3FKo/LnV8odXxOHbdHrEtiLYNRDRffATQRFEEG3AEDfYLXbAGdWPNjgEyJYgxlJbzjQgtYTzuFrTC2gbHoegKa2uQ2dTsfANCRAteHCkctGQV1aClvdV9aDFHZTji0MsClOFI9ke2iwf5JV5imsP0kHkVUxsjOx53C1pRDXY5DUVXVINt6GfwTLSIsQeaEseW7oLIj3kpMSz1bk9XoCWOx92CpqaTAV7SSYhooWMATURERETkA1M4iIiIiIh8YABNREREROQDA2giIiIiIh8YQBMRERER+cAAmoiIiIjIBwbQREREREQ+MIAmIiIiIvKBATQRERERkQ8MoImIiIiIfGAATURERETkAwNoIiIiIiIfGEATEREREfnAAJqIiIiIyAcG0EREREREPjCAJiIiIiLygQE0EREREZEPDKCJbApQ93Ir2tpbcSSoziNaxIpq0NLeirbGMnUOERH5wACayKYfx56uwu7KbgyrsxKqDEfaW9H2cg0K1VlEc6BiWyquVlZhd32XOouIiHxYtnZd3ifqRCICKhobgPoGdKozEi3YgCNowOEOdQYREREtROyBJnJUgLGL8xA8A0AHg+f5I9JzvKYwBBvQ1t6KltoCdY4vFY1xPmkQqRdxpRSJbfG87QvFnJXbZ1u4lwQb0NZ+HHVF6gyd97qraGQ6XCJo9Rhpn9xF92hqWNQA+tmuy7j2ntu/djyrfsC3Z3DOYX3a915AS4V1aaM8Xc9YZ8TFzHnV/1kvmNb5xokgQRdXJ4k5WESKQHsDlGr0SP+8w7YvUIW1x+PYXl0ZjrTvxf598a4nOq28c9OGYpGw8hTVoEVpv4lp0/HQ9uv6FHW6u4rsAMZ7qlDd1K/O8kg7d5QG1Ok+9TajurIqjhutAtRtAroruzEeKL6L+8CvuSq3/7ZwryisPY62kkgN1kfdFdVgM7qxuyeEjE1x3EAuSGU4Mm8BYxmyA7MYPHkAx3rVeSr1uq2ec+V4Rp0Xo95mVJ8cwkxg3ZxfMxeSqAH0c2VbkN/8AcLi79HzW5C/cQvyz48DyMAT713GpZZy5VPlaLmkBbrnDgGoaMI52zK6F1B+flyd6KyiCY9mjOPNjRcwmrHFFlzHTst5PTEwCwCYGTilXDD7cezpUxgMz2LwpHQR62jA7pNDQFZBwk8MnfVVODEAZOXHHsgU1hYDPVXoDgWwOaaAqAuHK/V6CaE7rgv43CusPY79ucvVyb7FX29elWFb1ghOnBwCcksXwIknQeUpqkHLvhwkKZMT0abj04XDlacwqJ/MoipDNrrjbPPauaU7pE6fZ8EC4GwDOtGFw5VngPz5uvDHac7K7bct3Dv6mg5gd0+kBuu97irygdP1Xdq18ixQuMA7YPworC1GhjpxrhStxlSPl+BZK1f6wCnsrqwS/6yfq2jci/V3urV5J0eQtS+BQXTPFFYlYl1RleFIooL/OEQNoF0drcRLN6YBACkbKq3B7KEC4C+1IHvNY5dxrSYNQ9XnpAWie65sC/I3bke19Az92T//An7eXInn8ALKN15G2v/ehEQej31NV+AeygeQeueKvQH3NuP0CJCpTPalqAZHHAK1vqYzGEGkngBTYW2D0pjKUIgzONyhBS6nURB7QAQA4SmMqdPmTGx39n1NB4yboNgluN4iKKxdjeGnm9HX24zqyptY5dAG5lPk8vjYJ3pvhDrdZ5u++7pweIm8bFc41i+du/px7Foo4Tf9c2GxlpugpcFda0af/mdvM/rG7u45LnHKsC0BnTWe9TbjmKcb+TJsy53AVbcnZsEGlAZC6NbPa73NOD0ArN/m8dweTUezPUZKJD1VpH0dhpUbg7vB20uEFU24VPMlpIge6PKj9ukYv4D8shesn/PqUDuuPZYBYBxvbqzEc+p8AEA5ghXn0DHHSalaL+YEuiuV/Nc5e9GrAHUv70XWiNrr7UNRDVr2ZWHE0+Md/wprj2N/1ghOPC2dDOdQRWMrStEd00gBrvuP4uJ7n8xxm4wq2CA9hg5J7UE73tbf6cbu4XXGMvpTJ/Mphv64tAxH2ku1nqZQN7pRis2Tp1DdBG09xmNs+TvsKhpbUbpiCCfOArv03vmQXJ+iXG7rCzagrSQ9wiNcs5wzA6dwNa3U+gKs8lTA/pRNJtXRxdXG52yfkes4PGSeH6Tp4z1VONwhbVt4CCee/gjb9DqV12t8TnpU7WU/RiqjSqqHmYFujGSVauuoh2U/767vsraFnhFklaTiqvj+ikYpLUdse6ZxjIS8lc2t/hzFuL0WUdqIzNLerG1T+07R/l2OI531qaCSgiD2xURPFS6uVI87fQ3W79bakz5PYWkr5nqMfRW+jYmUB5AOb/vYWnat7Y3VHsf+B3+Hf/lsCn7f/OaI5ZLbilbvO7Hq4hlgh3xMNKPPdtzYP2+vHyu5zOq+gHwekttasAFtJXA4fynnJP18JR1Dejn9lNH6+VOYyi5AX32kti9tV9TjxDuzLqTzkeWcHF18ATSewbn3tmMNAEx/gJf+EqjSA+rpD/DS1lt4XJ+PcVy/kYa8DZP2IFkJoNF1GU+Is6v8fcGWC/j2hmTtDxGwy9PCN1qw9dZ2sS5rUP+svs5ogb50UMsHREVtDcaapB2nPqa27NgoF0Odug78C/7pN7+PP7jf4QAPD6F7JAulaVcsO9iWtmCUQ7rwWw5IM2C/mrZXNPrIDd4WQBsnV4eTAOTg6QpS94kyiPkwyivqxKiDWQzKywtuJyank5t50ptAd+VNZFsOCnFRS3GuW73s1hOB/P1afaYPnMJp7HQ52VvZ9g1g+Yw6X91H6sVpvKcKh8fkAMB+gtTE9nnn8ljbkTldmiDYL0ZyAB3pmIhet2rZNC71b7kgiO+Fvo+lcljagXnTpf0Nad1KfWbfRDdKpQuRqKMIJ1/zIi5fLM2A2Hphs67PUq9O2yvKvO3jAzjc4XATqV4gxYVa3f8aZX9bjlt1nUr5pSCh+lqB7TwaaRt1hbUNKLzWYAbPm6as+w3KBQ8RyqhSbuqMejXK4FAmy7luJ3BWnPPu6MtI5Xo3Ffs3fdYM0hChbNHqz7JfPO6TKCK2EZVSPgQb0LKyWypX9ONIvenWtlG04Uw52HUIyuW61f+2XC8jX1Ot1+8C1DXqQZqXfXwAt7ZZA02t7CF0n5zC5n2puFrZjVWWsjqLWAe2495efmudqucyu8KiAvT19kt15XLTKZc5SmeHrYzQ6kzvUPRbxorG41h10WX7bctqx4X9mBAsN00ubOdll2uR2uY9iD2FAwAwjkktiwNITkNmZy22WvKZrfnNv6q+jFFkIOeQtIiD58ouYFSZpgfK4RstyN94AaMZ23GppRwd1dvxpvyVRyutf/vV24yrISgvPJRhFfqlHVyAuh05gJ5ndHIIMyk52BYU80SAquUfncJgOIBSpxfbeptRXdmNcXEC2V35DXxzrzW3TE5LGLs2gpkVqy2PMM18tVkMnqzCbuPitA7Deg7UySGklxxHXVGZ8fJHUu5eZA/r5VuO9V5fmDMa7HKs37cTOKtsf7ABbftykITlWL9PlEHM399YZk+zsDzul3LrQlqOlmugljWCE5XaWM3jCKDUkl4QQKm+/T0hIFCMuiI9j91cylYW/fGWqLduox2YF7Ck3L3YhTNmvbk9+go2iCDMXJd2oEoXb2MbtDzzjJJWHAlKB3egFG3ZN82ylLSibQdwWmxXkmOecmyfdy+Pt32ibe+EqLszQHaWNDPSMeGhbqPUpVUB6jYFMDPQLS4a/Tj2bghISbWmWUkn1b6PJwCkG7l72t8OAqVoKwlgfFicjO98JM4JXRiOlDKqk28yx6Ywg+VIlQvlsr7oOalAZtpypK/UHo/3NR2Qcq7V+tDe3egOwaX9KPtblFeto4rsABAeQZ+o/86LQ5gR5yDHC51NFw73hADLS0dl2JY1JdZZgLpN6Rg8q19Y9f2YhcIib2W00s/ZZ4w2Y0/ZC2HKMa93Odbv24v1GEFfZinWp0iPwNGPY2fF+a0kgJmRH+H/9FA2f/UXy/baubeRyAprj6Mt+6ZDuSIcR0U12ByYxeBFM3DprO/GOMRxLd4fmhE35Nq6+3HrDgD9GldUgKwUmMebuDZr5yGH4BkAevsxEoaxnZoAMKlfvz3sY4iyG21PL3sApftykBS66fzdKjVdAkCnpxOFwkif7EffSOQUxb5esY96m1Gtn2e9pt656By2nz8LV05hWL4OeC5jAVatMM97nfWnMHhHXQbimtEqYhSnY0LoaBDXlAj/bDc40nsp4SGc0NuS0zk5ijgD6AykiQ5hTE9GyZHNwBPvbcea6Q/wltGD7VU5itYmA5jGz6+eMwL3lLUFnnOgtZzqLZF7nwWtwegBMVBYuw64Ju9AbQdUN4nHjnIvclA7wZo5SOIEiwCyvRbWSUoO9u/LAUbkQN6Z9nJDAKX6W7gioM3KD+GwFLBrgZDP8nU0SAG7CGB6P4IRcljmi4bZ24zTA7PKxTJWZdiWC+nkpr3oaD1IpLvusSnHXFxHHQ3ixKwdvGZPdJel3iwnexeFK9OtF8jhkHSx0/Lnxt81T9B9TWcwGAYysgNmoC9dnMYmZx0eXzldPKUbBc+fj1QeLydfLUgb79Evav04Njzh8ZiIXreR61IVQGoKMPGxdLwa+zVO0g1EZ71oc0VaTl68o2zEu77O4RCScvcaI6h0Go/mtfpQaXXo8Zh3MDapXCR7P8KEz4sPOm5iHNKLusF1SDfObwGkpizH+n3SaALixt3Xdxgc2oVrMKUyOyew0uhbNomgzbWXzEFC6s8n9zbiLnXbce2m1haERJGZKj1Z1YkbQ6/XAfm6IoxNzpoBtiPtRsvaObAat6LuF6kDKlLZbb2Z7rTzVnzvDvU1HZA6xVodnsJFIs6zXuvbTUc3BsPyC/VlKES/0Xb8lVELsDNK9FG9+nHMMX1Di7GGs7Xl4h4Vao7EGUBLJm/BqWPKNI43N25B/tbaKMs50QP1ZOTVXMa196qRlyx6vdVFE6GjWwoeClCYpveKSMSFTuvh0wIA6AeNSpwIrHfFPoWHcCLSnZhKXOzlf66fdThRJZprr55fRavNx6NzoKKxFW3tWs96PC8k9jVdwbh8EyYHgY7boPS+zKd4yyN6iiykG5d4j4mIdaly3JY5oB//okffa2+eq3jX19FgnIe0IEk8UYpYH7OYivHqru4TBNchw/f6unBxYBZJYhSjimwoLz+JoEY5jzk+AYkmYj14l5nmHhzo2+FFYurPJ7c24mo5MgLLkZS71/fwpY7HvM5zUKm1D/NpcAEKs5ZLT2pciBsz7eawAIX4KOqNgixi2X0Eo5HaindaUKq9NBfDNclybXc5p2emIgkTuOV0PgWMoNdo38HVSoeivzL2NR0wnj5klEQeH7+zXjvmT2OndhOtLhsUY8RH+hdnD3wk8QXQhx4S+c3TuP6j6D27iWAMo7dxC/LVXOqEEY8hAsWoCxYg1Xj8oyvDEZGnpN6NaoGic8+OtfdjjqkHSSRFq5E+xyfvRNyNA3PbU1NYe1zLx3JMDfBLnPzFnfb+3Al0672/4qTm2Lsb7eIwF+ItT5RgOP5jIkJdqkRvoG1bgg2+gwB32vGPgVPG4/T4xL++isYGVOhPY0Ra0+baAqM+nIO7SBfNaKz7pK0kgHGPw2zJ+q6NiPSvMmRDfjQewlR4uX3Iw6Ia1MWyHyO1cR8i9tx7OVYMiak/P1zbiCvtBkZL//I3ZFjftRHMwGH/wV896Tca+9tb0dYucmuj9gBrvcUZm2pQGCxF6sfRlreKWHYf17CxyVlb6oM/Bah7WeRrx/oErWg10qWUE+d0jHQgSlqKeZwWoC4bUueF3zIWoK6xBoViXHtr+qu7vqYD2g30WWBXe6t58xdTCkfixB5AVzThknhZL3yj3TLcHGD2DgdXpSkzYvEChkQX75ov60PXlaPlkvWHXFLSMwCU43MOX+n3B1i0/LjlWF+ShSnL3ZbJCBiC68wXPPTe6xLz7r6wthgZ4SFcdOw5kR4jBmtQV6TeJYrhclJysF+9+9JJvX0VtTWAftKR77yUC498Qa3YloOkkMMQfXGRT0DWFAE1d69im54zfdzcftjLrBEnR6l+jYPSspyTyHX7vwDSyUX0dsQq2ID9aVekA1k+uWgXTwRKzaDOIWdw/kQrj7d9kpS707jIWvbpmN9jQhGxLlX6za+0LaJ305KzF4mSC1dYu9PMKZeOqaQ0Pc+iDNk+Uy6cxLc+OddRO6doNyd67nAOdhnBkkNetF+2faL0DKs3VcEGLS1FPY/p75yUlAJ6risgPYq39n5WbEvFLa/70cKhjQdLlf1qPz8cMd73EAGkw/ldW4/PYzda/c0JtzYSWWe9z/dkYO5X+Zzg/xxXgLqXizElP4XweIPZeXEIMylZ2LVJPe497GPXssOS5mYqQ53DjYgWiAdQ6nbdtgXZWp5+kuiZNdqpUVa/16QyHNmXhRG5vtV0jKIa7MpF9H1ivBu206FD0WcZV0jnot6PMOGn804PvCtvInsBjAMddRQOY/QKJ9Mf4CVbSkY5Wi6JFAsA4elppCRbR86wkkbygLbODye/hIeM75zG9WZtPGhrWczpluH0MI3wdDJSxFfqo3h4HoVDor5Ba5unX+RCIYwHAsbwQLYhrmy5p1bGuvT8KsubpSEMDqRjfcRh5MwXsYwREtQRPpTROdJDISAQ0Oa7lk95+xvA+HgIGRl62WZtI2fMDJxC9celaCtJx3gIyAhoB5M1P9D6Fuz4wBDScx3ejnctl1L/YrvNoZCg5UGfnMJmqQ7UUShsdWups1mp/P+EMP5AtC99KCJ9BBOX+lPrXyfl0JmjK0DKKVfeEA5148RksXW7eoBSh+GaNLF/3rk82l/R90nkfarOV9uj3H5sdSsP/SaLkI9o3RaXEUVsdeM8LJN1uDOnfRfCeCiAjIBTW3DY7ndTsV8ZgcAcfQS29V0aycJWl/2iq2hsAIal/arWjfK2uttIKrZj3q2O4PL2u7T9ljoSQwA6vnGvjhJim6eW22MZHbbPet4ewuCKHOuoBOpIDz1Aqe3NfJe3+IGE1p/J2zqHsyOPWBC1jQj284A02hJgHQ4O7uVRjyNLPdn26ylMbVLrVIx0oaaHRdi/JvPFZVtdeNrHatntx51ZTy4jgkD9Lp28Lnnf6qMXSaOIWOpJviY5fad6vXZaBkr7tW+XK7fj1FcZtRFRbk1moVS0F7f2One8nZO1OMZttCJN1ACalhoRQEdoFHGLYTiYJcdt3PBgDerG5niw+aWGdbnwFNWgLtPhxx3c9lVEZTjSiCXzozWeJLT+rGxDri5iztsiD0u3yPDauKTEnsJxV5g/EW7/+XCyE8n9c5hET070x4KqMhzJ/mhhnzjFSxmJyxeO1yKuyyWrAHU73FIpprw/jtUF1ynpG0tdgutPVlSDbMuQq4tYsAGb3bZl0nsedTwKa48vsPMhLSSLrAfaTA8J32jBVp8/D072x+UJ74VWHufcs3fayiNKjdMjLYqKdbmwiMfSUM8fRTVo2fYRqn31JGsvId16+h7alwmtP5MxlrstBWRxMn68RDnO5R/iWHTYA72kLLIAmoiI7jqn3E7H/F1nZn7pPXqTHWf93SvUd13gKf95YbLnlt+D7X6JYQBNREREROTDIsuBJiIiIiK6uxhAExERERH5wACaiIiIiMgHBtBERERERD4wgCYiIiIi8oEBNBERERGRDwygiYiIiIh8YABNREREROQDA2giIiIiIh8YQBMRERER+cAAmoiIiIjIBwbQREREREQ+MIAmIiIiIvKBATQRERERkQ8MoImIiIiIfGAATURERETkAwNoongV1aClvRVt7Q2oUOcRERHRkjPnAfSzXZdx7b3LuNb1jDqLaGnobUZ1ZRV299xU5xAREdESNLcBdEUTHk37AC9t3IL8shfUuURLSBmOZAOd6mQiIiJacpatXZf3iTqRiHwqKkBhbz/61OlERES05EQNoIMtF/DtDcnWidMf4KWttejAMzj33naskWaNnt+C8qMApHnmtPlmLV/s5ShA3ct7sT7FnDLeU4XDqEHdWDOO9ULrgWwvRfrAKVQ39UufNVU0tqIU3dhd36XOmkN62WcxePKAKGvsCmuPY3/ucnNCeAgnnm5epIFj9H3mSbABbSUBIDSH+zbYgLYSoLuyQenl1vdvyGGePwltn6JOZuKt24i0/YeeKhzuUOcRERHNnagpHB3V25G/8QJG9QnjF5C/tRba9eoFlG9swfVpLTjN32gGqMGWLVgzfgH558ex5stNCBprBIBn0NJSbpkyN15A+UatXG+Oq/M8KqpBS/terL/Tjd2VVca/4exWtJXkIDUTxoU8Q/2sorO+KjHBiR/BUmSNnMKJAWD9tjJ1rg9lONLeiv1ZIzgh1UP3nRzsbz+OuiJ1+YXO2z6LrgB1m4Duym6MB4rnrh46GrDbKUAuKkAWhnDCaZ5PCW2fHQ3YfXIIyCpAoTovIRK1/4iIiPyLGkCrwhNSJHqoHdfeqwT+Uu3ZfQaPr/0FXip7AThaify/TUOVFDA/27Uda+XF51iw5QJy/k4toxdlOLIvB0kOPYud9VXY3RMSf3XhcGU3Yo3RE6aoBkdqC6QJBahbeRPVTf3oazqA3cOrYwzwClD3cikyEEK30tvcWV+F7tByrN/nYwQKWznjFNP6ErTPggXA2QZ0oguHK88A+fHcpMQgExg5G+0JQBmONCagXFHrWfme3macHgEy5UUSIdiANil4zihpRVsito+IiMgj3wG0LthyAde++CHyN25Htdr1VTGOt4xeagBHK7G1+hwgPvfEPHcbdVRvjyF4Bgpri5GBWQxedOmV62hYQI+OC1C3Iwfplmn9ONYklb1DTzfxqagAWSnAzEC3Yy9n53AIQACbIwZXOqdyxiPR6/PJUqdKfc8HD/u0ojERPbXR69npe/qamh3bTFw6GsQTEO0GaLwngT3nREREHkTNgdaYucThGy14O70aT2SM482NlXhOXRQAUI6WS9XIE6nTeu6xPZ96GtebHQJwiN7tx/TL8Tje3HgBn7u0Hb/aWgl0XTaC8NHzW/DWKnO94RstIli3lsE6Txsh5FLNl5DiWga/uaVmPu1p7BR5wnLesba+rBG3nFD980OYyM3RAveTB9CXb805dswpLapBy74cJBkT9O+15m7Ln9XzXU9MFhvrH3fJJdXznt3mG98fGsTgivXa94leeyNnOjyEE2eBXQ7lvLXNrSzmY3q97BWNrSgNiPVfXO2y3cYEQclhN54oRNhnmSKv2VinWRazHtQ0ArOtaNs9ge7Km8jWl3F4kmFS1yXI9Zg1Yuabq/vcMRfdvs7xnipcXKmVbXAgHetzl4vvCLm3T/W7bPXs/D36/jNzlL3Ut3s7BKxlmRHHCnqqcBiR9lc3UFKMKYdjQt721He177Xm+Xs9/omI6F7iuwc6ZUO1CF4z8MQlNbcZUuA6jevNW7Qc6McuoKUCwNXLuD6tLRW+0eLcew0peB6/gPyNW/DSjTQ88Z4ZDD9XpuVd6zqq2y1/A0CwpRJ5yeJ7mj9AGEDKhkqtHPEKNqCtvdX893KNkeeZlLsXu3AGuytPYTC8XOQd219CtDIv9km5qRiurMLuygM4hhrsygUGT2r5xicGZpGUW2pPlehtRrXojZsZOKV9trcAdS/vBM7q+crdmMjdiyPBAtS9LILQQKkoaxW6Q0BGSYy5zL0fYQIAVixD39OnMBg2Z/U1HcCJgVmxnFrOM8COSGWxp1loKSPiD9v63IPnrJFTWj30hIBAKY5IDddxn3U0SCk6cEz5qGgsRUZIz43vxrjohTcDsABK29dp+7MnBLjmSIsUGX1dJ4cwo2+TfBMiL78jBxgQ23RyCDMpOdhmOxi7cLhS7A+xbi141sqWJepbDyBd22fUerZ/j3zzo5HbuFLf+1rRln3TaOMZm8zjyaKoBi37sjAijofTyDLXH3F/dWE4tBypmUpbqDyFwRWlaGsMoG9kFukrxb4z8vy1fVrK9BAiIlL4DqDDN1rw0g0RrSZ/yZLbDACoKMDaZADTv0BvJ4CRSYSRjLWby9HR6SXjtBwtX9Yui6N/p40d3XH1F5BiMk+0lx+3aD3Onbe0AE/WWYutG7e4B/GRdDSIi78IGKSeP7OXtx+37ugf6McxJbC0Mi/2ljSJ3mZUi2ClorFVCaKiCJZifYoITtpbjZzRjOyAWZZQt9Hb2FnfjXEsR1a+lzQMF3c+ipKLq5LqJdFl0QVLsR5DOK33qorH/3IPp/M+i8546a6oBi1SsGjeNEi9l2NTmLF+XBJAagowPix6p3v7MRIGktK0HlnLTQgg6q1KK3OwAW2W3uHI5LJdNXqao7XPWKg3HHIbV+pb7ZlPSXXMm67YloOk0BUjeO9ruuIphz2jpBWlgRCGUYr1Kcp2nx3CTKAU+3OBkWsBbMsFBo2c8i4crmR6CBER2fkOoCGCU31Ui5QN1Th3SJqZlYYUaMH1t9+7jGs1X0IKgJR028NpFxlISwaAaUyOqPNicKgd15Sh9rzpR9/ILIAAsm09e6aZSbnXK/EKa4+jrb0V2cPyS4sehYcsI2ZovY1uwUAIUy4BVN+1EcwASF/pEtAG12lpFgmrC/ey+FW4MlLWbrzKcKS9FW07gNP6DVVMunDR0vOqBNRO9J8Pz75p5AIvbQVYtSK2NjbeU4XdlQ0Yc2oL4unJeM8BHMPqiDneREREupgCaAB4rswc2s5I0bAYx5tiCLn8u/FLhBVNuPTeZfGiozQMnw964JhR4mOEiUQKNog82gg5oZG49OQ504K2iY8d8rP1HlGn9BEAFdkBpUczXhHK4lPfxxM+68ErLe0ifeCU5QlErPqarmA8JQf7xdOC9IFTEfa5NjrMxD348pzeKx+Lvo8nXG+I01cWiGB6uRiakoiIyJ3vANrsSX4B5UZgmoy8GhFEH/1QTMvAo3p6R0UTLnU9A+AcfjWprwl4tqsdz5p/Ci9gaByASPsApF5tB+mryqVea9Ozf671fIcnxoFDD9l7oPUA+z2n4F/obUZ1jzbCRGmCxjr2HwCkY5X4Xi1QdSP12gZrUDfWjcFwAKVSfjZQhjp5pIzAOiMgLqwtRkZ4CBcdg7Z+HHta5INa1ideRgzMYvCk/qKVeCy/YrVYrgzbcpcDKTnY/3INCtVy6nXqWhZteaPeimqwWeRMa0OXuaxP13HTnscadTg2YWwKM1JApY3KoqUE6DnUZrm0kUpiU4C6l4sxJXJ7d1eK9AyVciNgPBEQTwCcSWkpRTWocwgeZe7tM0o9R/ge1ycXvognQnL+utjujJJWtNQWRN9fHd0YDCs3xMF1yMAsRq71i1xp9Ya5AHWNLjnZRER0z4o6Cod95AyI3mXraBiG6Q/w0tZbeFxOmzB+udA6uob7LwMqI2hMTyOcnIwU8b3PQR2lYxrh6WSkiNSP683b0btZKvf4B7ie9iVtfXpZoo7CIXN5CVAZzUEvzczAKVxN26u9HAcA4RBCCCBgGwVCZ/+8FkBZp4+HQsgIyCMNSKswgln3cpk5uWJ77oQwHgiI+d5GGzC+Q+c0+oNl1IaQNtqDNIKEtZziBbZIZdF/6Q/a9w3eycF66Rfz7NutcqoHaXQMx32mbVemtL2WUR/U0RrCIYwjgIwUAP/8b8BnPy1WFEL3ySlslvKUnUaZsNUrYOxn60gsWt1AXj5k1p3TKC3ySCiXRrKw1TbChNPIFPZ6jFbPlhFXnv4I2yz1q48uo/9tr+/ukSyU2spmZalzsd3mL0mqo85Y95dGPZbt36PuC31/ad8Nx2OPiIjuLVED6AXBCHYjDZ1H3ukBtHMgNL8WUlnulgLUNRagr15NBSlAXW1g/seWJiIiooh8p3DcFRFSOCgabdg6eag9WlgKa3di/Qp1KlBYWwpcm6/gWbST9ruU7z/PKhrvnW0lIqLEW/g90JZUDSUdhGLg7XH9/FhIZbmb1LQCjVM6BhEREd19Cz+AJiIiIiJaQBZHCgcRERER0QLBAJqIiIiIyAcG0EREREREPjCAJiIiIiLygQE0EREREZEPDKCJiIiIiHxgAE1ERERE5AMDaCIiIiIiHxhAExERERH5wACaiIiIiMgHBtBERERERD4wgCYiIiIi8oEBNBERERGRDwygiYiIiIh8YABNREREROQDA2giIiIiIh8YQBMRERER+cAAmoiIiIjIBwbQREREREQ+MIAmIiIiIvJh2dp1eZ+oE2Utly4jL1meMo3rzdtR3QmgogmXar6EFDFn9PwWlB+Vl43C8nlpvUREREREC1TUHujqrVvw5rj+lxLkdtZi68YteHN8Gteb9eC5HC2XLuPae5dxqaXcWI+jzlpsbf4AYXU6EREREdECFTWABoDnyi5gFACQjLWblaC4ogk5E+1mUH1oO/ImLyB/4xZsrT5nXdZJ5y1MqNOIiIiIiBYoTwE08AKGRC90ytoCBKU5wc3AkBwoH61EftkL0hJEREREREuHxwAaeO7vRASd/AUUVehTy1GEW3hO/7OiCZfe09I3rl1qsgTasmDLBW2Z9y7jUssq60zbOp7BOf3v99rxrL5YYyva2htgFIWIiIiIaB54DqBx9EMjjSPvz5/Rph3ajrRbUm9zZy1ab0ybfzs51I5vb0gGxrU0j1Z8AWvk+Z212HreSLoG8ALKLX9rOuursLuyAXznkIiIiIjmk/cAGi/gLT04zngIzwJ4dtUk3vIz6gbK0fLlDABAeEILijuqL4vAnIiIiIho4fMRQAMdV38hRszIQM6hZ/A59KNDXcijiVseXjAkIiIiIlpgfAXQ6OzHz0Un9JrHtgBXYw+C01dFGeKOiIiIiGgB8hdA4xx69Qh6/HIMP3pift4YzePQQ9YcaFlyGjIBBFelqXOIiIiIiO4KnwG0mbM8+ncOQ9VVNKFqg/jZwuQv4dtd4mVDSUf1du2HWZK/hG+/dxnXvgjz5cQaMcrG0Qu4Pg0AGXjivcuoWqt/OgNPiHVyFA4iIiIiuhui/pQ3ERERERGZfPdAzy99DOgLaGFXMxEREREtAAs8gCYiIiIiWliYwkFERERE5AN7oImIiIiIfGAATURERETkAwNoIiIiIiIfGEATEREREfnAAJqIiIiIyAcG0EREREREPjCAJiIiIiLygQE0EREREZEPDKCJiIiIiHxgAE1ERERE5AMDaCIiIiIiHxhAExERERH5wACaiIiIiMiHZWvX5X2iTpTdf1/E2URERES+/Oa3y9RJRIuKpwD6n3/zG3XykvHZ++9f0tvnF+uDiIjm0mfvv58BNC16TOEgIiIiIvKBATQRERERkQ8MoImIiIiIfGAATURERETkAwNoIiIiIiIfGEATEREREfnAAJqIiIiIyAcG0EREREREPjCAJiIiIiLygQE0EREREZEPDKCJiIiIiHxYtnZd3ifqRNn9932Cf/7Nb9TJNjtfeRvfzktWpo7hzYfL0KhMXUg+e//9nrbPqh5d7z+ONZZp07je9Ci+cdYycdGJrT6I7rIdLXi7Ng8p0qTw9Zfw6Dc6UP96F/A17Tykn6dGf5yPsiNOn7Uex47LRxTEKz/9NrRTYSLOCYleH9Hd99n778dvfrtMnUy0qCSsB/rMNx7Fww+/hVF9wthbePiuBM/1eOWVoDoxYXa+8jbef/9xrME0rjfl4+GH8/Hwwy/h+nQy8mqv4f3X69WPeDCHZd7RglcOqxOJlo7616/h/do8pExfx0sP68dkPlrxn/H++9fwRKb6CcXZajxqHMfqTG/qX2nBTgBAB77xF9cRVhewCeKVn17D++9fw9sRj32v6yMiovmUsABaFZ4wQul5Vf/641irTkyUw11GL/voj+WeIOkil/l4lAui3dyVOYhX/o88pKmTiZaIna+8LQLkMbz5lWqckead+cajePjHY9IU/UbfuTe5/vX/DPyFtYc30vKGw1144kF1YhSHn0DexFt4+OF8PPqNDnUuEREtcHMWQN8N5sV0btR/UV/5GIbUC+rZXvxc9F6lPFgkeqOim8sy17+uP/olWoJ2tKBKb+BjQ85Pu46U4U1rDO2q8WsxpEfsaMHbfxbDAXykDA9/zbHERES0CCQsB1pj5gbr+Yc43IX39QvM2HVcT89T8vnkfOJpjI4BazLFRXH6Ol76SjXOWHKOx/Dmw2/ic0peYO9mNQfbW76g95xfqQxGuZQlXtcfF0/jetPbSKv1X+Z/+Hvgjz+vBwVjGM3MNHKt9TxMOd88fP0lPHrrCamO38LDX2uUyqLzlo/uvT6I7jLp3OIlR9l23Hyjw/F9BtfjTO0pdsu7vlokpk/j+o9/hrV/pi1jrEP+nHwukc+Vjsu7rI9okWEONC0Fc98DLfcAZT4I/EW++DsZazcHATSirEnP8UtG+sRf4eGH8/HS9WkgOQ/ffr1eWQbOeYFX3zbyF8PXX8LDD0cPnudWbGX+8//0qFRfwNDD+UZu+Zo/exuv7NAeK1t61Wy9bEGM/cjMRx/9cf5dykcnmjs7V6WrkyI6842/suU417+uBc+jP8430j3W/FkX6l2Wt+rF2/oCIv/aGtAmI+8rQKs4D6TkPYF6aDnXreqK9eB57C3jeDeWN7isj4iI5t3cB9CysbctQW1KunUcC2AaP7+qXYDOXP2ZyCnO8XSROHP27uRcxyNqmY3H0o0Ystx0RNOBM3f15oHoLtrRgrff117QM/9pN5+qxq9pLxyWHQEwMuHvZb2zHYicHTKN638hP6lKx+ccygApPWz07xq1m++HnW56va+PiIjm1vwG0IuaHsQCSE6HPesxiM/pHWLTP0MvA1iiOWXcZANIXyXdWIpRNcynMmN4M8oTqZ2vvK2N5KHOmBfSuYOIiBYFBtA+NP5IT8HIRI46NNyOIqwVqcujP7XnRxNRgp2txtsiSI45neFwF95//xqq8Fd42JJydXes+WJMW0FERPNszgJoe3qGF8lIy9L+b+fmB7XeINvb9eKxZVa60lvUgV9NmH/Vv67lMSbU2Wo8quRJarTh4vQXe+wvM8VY5vTVYjSPeuSIlxP1FBedVs9OPVijmDTSLIN45XV9nFqipaPxa3pPcyae+KnfNh7EK1/RniVN3Oowzzk+nLklHcCHu9Cl3lh70oFv/FTcCWQ+aqSa1L/unHZCRER3X8JG4XD9JcIfA09Ib5aPjo1hTab094/zUTZivmUenk5Gir4aMaKEzjKyxPQ0wsnJ1jfZfb6Vj5hHnbC/ue826kcsZTY+Iy+vrl/59TS53uyjCDiXzUls9UF0lzmMiAHlPKCeo0Z/nI+hL5rHZ/j6dUzk5WnH9dhbeGniUdvy9nOKdC4YewsPf21U+uVAANNjGEUm1hh/X8dLfwFUyWUV5zmn8pUdkX+J0GV9DiMCES1kHIWDloKEBdBxkYdp8hjoJcpCDBiNAFq5gZgPC7E+iIho6WAATUvBnKVwEBEREREtRQsggK5Hl/E4Mxl5tfd23p/llwkzH8f7ryc8k5uIiIiI4rAwUjjuIqYsWLE+iIhoLjGFg5aCBdADTURERES0eDCAJiIiIiLygQE0EREREZEPDKCJiIiIiHxgAE1ERERE5AMDaCIiIiIiHxhAExERERH5wACaiIiIiMgHBtBERERERD4wgCYiIiIi8oEBNBERERGRDwygiYiIiIh8YABNREREROQDA2giIiIiIh8YQBMRERER+cAAmoiIiIjIBwbQREREREQ+MIAmIiIiIvJh2dp1eZ+oE2X33xdxNhEREZEvv/ntMnUS0aLiKYCemrqjTl4yUlNXLOnt84v1QUREcyk1dQUDaFr0mMJBREREROTDouuBfiD9AaxavQpJSUnqrKhmZmZw66NbuD1x25i2mHtc46kLLMH6ICKihY890LQULKoA+oH0B5CREcA//o//gV/f8Vem+z5zH+677z4EPv/HGB8PGUHjYg0Y46kLLMH6ICKixYEBNC0FiyqFY9XqVQj9/T/EFDD+9l9/i+mZaYT+/h+wavUqdfaiE09dYAnWBxEREdF8WVQBdFJSEqZnptXJvvz2t7+NOeVhIUlEXWAJ1QcRERHRfFlUKRyFhYUYHBqyTNuy5cvYt/8blmkAcPv2bZw88Qpu3vxv6iysz8lBX18fsIhTFpzqAvdwfRAR0eLAFA5aChZ9AP3S94/j//nrHzoGhrdvmy/HyZZCwOhUF7iH64OIiBYHBtC0FCyqFA43N2/+N9y+fdv2717F+iAiIiKaO0sigAaAnC/moOH/PoLn/st/Nf41/pf/ij/90xJ10XsC64OIiIhobiyZAPo/PfUU/t+f/ARnTp82/nWeOYPK3XvURe8JrA8iunuKcfDVN3Duh03Ypc4iIloClkwA/ZnPfAaTk5MYHr5p/PvFf/8FPvWpT+H3fu/31MWXPNYHEd09V/D8159E+fd/jYcOFqsziYgWvSUTQBMRLRaPHOzAuR++gXMvLvEnQleO4rvPX1GnEhEtegkOoPfgez98Q7sw/PANfM/TtUF8JsYLyckTr8zrC3K7XjS3L9Yyz6X5rg/IwYC834sP4Xu2nqe7+Vg3lrYZxZ6mOW4HWplbbfVo2vViPN8fff3AXGyn1g7s36vvI7/tQ/ucZZ+KMtu/w+27TZb2/OohPKIuEMmeJpz7YQcirB4A8M7zQZQ/9STOf6jOWUIS3m4kxYfQGuk8HG2+fi7yu38B67nE5fNaG3JpB1HL5ofPc6rYJ47nvyjlko8Lx88T3WMSGEDvwfd+uB4fPvUkyp96Ej+4PoPMx6Ic1MWH0PrDJ5GpTvdBH67tEwCfWrYMn/nMZ4x/n/70p9XF47LrxTfw0Ifa9pV//wZmMp9ccCeS+awP/ULyzbyPcV7s9/KnnsSHD72Bc9/agAfUxYu34Au4gR88VYvT6rw5FUPbjKoYB7cA5596A2OZX3W+UMZlD77n4dg4/Z0nUf6d19TJHnhbf+K3sxgHX61Dboo6HXjk4FeB80/i/NgafMXzF7lsx2u1KP/+DWDtFiXA0VILqlx6RR852IEqnBRt+Q2MpWxAldey7GnCucfWqFNdPXKwAw8hln0XG+PmXwRHu16M9xiIJNHtRrYH3/vWBtw+rx3P5/GkEvB5mP9D5zYYXTEOvvokHrh+TDuX/PxBfFMJone9+Aa+mef241TRyuaX1p7Pj63BQ1FW88jBjgjtM0q59jRJ5/k3gMcYRBMlLoAu/iV+LAVG7zz/E4xhJT4X6cR55SiqnnoS58fUGf5d+du/xf/1bD3a2s8Y//6q9TX85G/+Br/73e/UxWNQjNG3nsR39evdlaP46RjwwB9F2sC7Z+7rA9j14pPIxCjOKwHx6e9oQarNnwC/ePUo3lGn2+zB9+K6qChiaZvR7NkCvFqL03gN333qJLApgeUFALyG7z71BhJwaLjwuP5EbmfxIbRKgUtSXp3Ug7cHj+Akvvua1n5ascVjcBdhO64cRevPAbeQwdG7J6Xg+jX8+PoMktL/RFnIyghEX6tF+flRdbard54PmueTObcHD+ENlD91DANpT+LcD9/AVyZ+NHc3solsN4pHDn4VmWNvGHV3+jvWID3afK3NuJyjotnz58jFDbSKNvLO8ycxgA34M2nzTn9HdLCYkwzRyxab0995A3eiXIu0px7Ox0rkchXj4JY1GDuvn0Nfw3fPjyJzi3PvO9G9InEB9JUr1sCo+PN4YOwncOnoSbi/+Zse7AxWYNfOHZZ/r776V+qiMbqCdyzbUozPpY3ip/O1gT7NeX0UH8JXMoGZ684X4Xee/wluq4HHa0c9tQctME+guWiblm25guefn7dIaH4lcjvFDXP5U8cwEAZmrh9D+df1G6rX8Ly0Q955/qhju/LL73reuWJtFGvSgYG3ImzzniY8ltDGOldew3e/85r5ct9T7r3wCZHIdmNRjEfWJmFm4pfStF/iTjgJX9hU7GF+fHY9tAaY/HvpfHIFv5oEMqN1/wJzXDbr8eNPlHIVb8EXUmZwxzL715hJeRCPxFtsokUscQG0rPgQWr8OtMb0aNndzMwMkpOS1ckWv/vd7yz/VH+4YgVmZpz6BvwoxsFX94kelrvDS11gDuvjkU0PIgnA7X90O2nrF2yNY560jZYS8lgmgEytl8y2nJ5X6frPJe9QF61tyut/9RAekfMCpd5SOZ9azz80t1H0SBqfdSuTyF98cY/le23bbFm3vK5o+bzmfDN337kszut33k5z+SbskpeJ+NRAXm6LOtP+XS65pYZI9SXvM9u6HPKlXWgpW0HXG61dL74hHomvwWO27ddzU9Xvj3IsRCy7LELbkdYhtw31e815EdblRi2nuk7lOLWXw6ntuNeZ6U+wIkU972hBrPakINr8eBTjc2lQAk1gdGIGSPu8S3llfspmPR70fWFPw7HWf8R95ipKuf7kD5GEj/Ery+y/x20kYYVabKJ7SMID6EcOduDctzYgKWUDvun1xQaPbn10C4HP/zH+6D+uVGd5kpyUjM9//vO49dEtdZZ3xmPoJOR+K9YTVvzirQskqj48eORgB7659mf4gSUH2anuXsN3Re8kxt5A+VNSyoyxSK2Ra+38zz3g8dQ2Re7sDKD1NF35e9yGtbd014tPIlOUT3skquXsvvN80PpY+MpRVLk8ytWCBZHOkPkkzj00qOUejsH2aDQpr07k5R7DQDgJuY/rwUakPE4zzzMpr07k7ovPf8u67c7rd9/ORw52iBzPNXhMzy0/Pwq4PorW8pQh8ivLP/xDpdzKfJF7rOaWGooPofWxlRj4vrb8h3/0VSnfvhgHv74BEDmq5d+/gZkU/RG7S760jXkjl/mY+w2Kmao0quWGGjdlScj91j7gVfX7ox0Lkcoui9B2HnsD574OtIp9kpT358bNXFUejDr7wfUZMS/Culwf0Wv5skY5RdrK2HnRq72nCeceg/lexPlRJOXVoTVi23kS534o6kzsf/t230u0NJPzY9q5x0ytOIbz549pbW1PEx7LFG0v6j4jokRLeACtv12uXVj8vAwU3e2J2xgfDyE5OQXrc3J8//ujP/qPGPnvI7g9EccoFfpjaBEY3a0TVrx1kbD6iGoP/iwvCWOXzdznd54/iYGw18eeieO5beqBb+aTOPfDr+LO962Pu40X9+J6CfYKnv+6dLMggq/RCXu4PXP9mPh+rVdII33ekZkbbF6Ar+D5V29gBtYXjpzX776d5o2ClP/+y1+73CiI/MrwDfxYjy9f+5Gl3Lb5IscSLo+Idz2+Abh+0rhROv3uz6S50kuCe5q0GyZjXoR8aQsteNHzRY0g1LMZDHxf3MiJGzBNtGMhUtllEdpO+AZ+YKTFANBz/a8cRZW4ubS+5BZhXW6KP48HMINfvCt2wGuDGIP+PoiWL2tJ7XqtFufHgKS1WwDXtiPVmeD9/RKtZ9hdtPnxWZPuvJe8iVy2028pL8IW/wnwS73ea1H+VC1Oi577xKYSRS6X1gaI7m0JD6B1+oUh0W5P3MbQ0BD6+vp8/xsaGkpcsHjlKFpjeQklgeKpi3jr451//BjwcpFzPNGKQM3TY09FvCkcXtumsX+d8hPF49WvA616j/liYQnooknMdq5JT1LyRq0cA5Bf/hozjo+I9+AhNVBQt0lPL3ho0PWlKW9EIJ8oXo6FhJXdTk/heOhDs9c4JleO4qdj5pMKa0CtpQOoRidmgJQ/9PdCp6Nf4k7Y+byjpVZEmx8Pt3QL8bRKnWYTQ9muXMYvpJcUd236PEalmwwthUPruY/ppUggerl++WvMOL50reRFE91j5iyA1k827jmyi987//ixxxPnEiR6Ed175/bge68ewiMiuHHsbY6l7uJI4TB5aJt7mvDN9J8Yj5/NdBNpGCtLT98iIYKd6Be+BG9nhJslLbhy6m12Kqd2sXcMYgAjveD2+ViH91P88teYCf8acYSbpqjHQoLLLpOGIbOlRcXg9Fv6ExptyMrb5/XjTuwf2/CBABJSj1fwzs+VkVHES25aAB9tfnxOfziqtGXthm7sQy+VGkvZtM9kbtHex/jcP5rH4iMHO/BY2g38wNM5L5Io5bpyGb8IW29mH9n0IJLCP1NerCe6t8xdAF18CF9Jkx/LuonyqGjBKsbBLSsjv6G/pJnpAI/Z8on3aOMuf/0o3hFDgUEeM7v4EL6SOeNSd1IaQfEhHHSINeIWrW3uadJ6AL/zmjE0mZqzbVxsirfgC1KPm9Yzb/bW7Hp8A5KQhNxvRe8Zj5V7MKmRg5ldj29Ako8RSNy204/TH44C8njKYl1JeXU49+IeMaxgEnK/bqZDuZdTu9jL7emRg19FJrT8X32a0Zu2Z71jio1Tb5uTXY9vwG0p5UKlP4kBinEwamP1dixEK3vspHb5UDx9wXvwvW/9IX4q3biaQfkVPH9Z2d8OqSvxeOf5n1iGflPbSrT5OscnH9G89iPLsHX29CPhT/7QMf3Ga9lk7zz/E2088q8Dv1K/x+jV10bSiMrxKUi0cmn71ExXTOz+JFqslq1dl/eJOlF2/32fYGrqjjrZTv0RAVsunoPiQ2i15PnZxxSea6mpK7xtn+0FJHvO3lLgvT50Ti+z2fej+fIQotadsayXNuSFn7YpLTt2/kl89zXrfp+5fgyt2GduS3gUY1iDzBQ9h/SXlvoYu34DD+Q9iF/Ytlept7E38IOJr0p19D/xT/gP+APx18z1Y/hpep2Z5yh/r/i8vddSK/sDY6NA5hrtODO23b5d1vXfwN/8/EH8qdN2zv4rsPwzYsFRnP/+r/EV6TjW6k38oZP3gb6uSbnMyvHluD2mXS+aOZ8z12/gdt4GQHyvPA9joxjLXINMADPXr+N2Xp5lm61DudnbsuO2yIxz2AwG/r+Pkfu/6u1sBgPf/wlWfMtax1XPX4l4LLiXXS5rtLYzivPngceMNm8vy9jYKDIz1wD4F/zTP/8+/uCzEdZlOyfb60kjLascc3o9Wrfdqe28ATxmrzMb+drh1FYizo9wLtfLHekcIX/eYTnLPnTahohlc7brxTfwGJRlLdfPGYyNAZmZSS77TK17h++OUi7589bjQrQH2OvCTWrqCvzmt8vUyUSLSuIC6EXKf8C4tLE+lhIRQKsXcKK47MH3XoRlmEp9+sGDv4xjPOKF45GDh7DG5xji5B0DaFoK5i6Fg4jmmD5urppCs1iJ7XEbvo4WBLcfOtr14nr8arEHz+IlzipcZvBMRBGxB3qB9bjm//u/49l//zcAwHOf+jSufWp+73EWWn1QrOwpGuyFpsRQUyA0UdNdiAT2QNNSwAB6gQWMr/7bv+LBT/4dAPCzZZ/C1z+t55rOj4VWH0REtLQwgKalYH67NymqPxbBMwA8+Mm/I/qPdRMRERHRfGIAvcD84zLrXXnaJxEfEBARERHRPGMAvcD8bJl1lwQYQBMREREtKAygF5i//tSnoP+OyMCyZeid55cIiYiIiCgyRmcLzM+WfQrBz9yHXZ++D9Wfvg9mRjQRERERLQQMoBeg/4llGFFyoYmIiIhoYWAATURERETkAwNoIiIiIiIfGEATEREREfnAAJqIiIiIyAcG0EREREREPjCAJiIiIiLygQE0EREREZEPDKCJiIiIiHxgAE1ERERE5AMDaCIiIiIiHxhAExERERH5wACaiIiIiMiHZWvX5X2iTpTdf1/E2URERES+/Oa3y9RJRItK1ACaiIiIiIhMTOEgIiIiIvKBATQRERERkQ8MoImIiIiIfGAATURERETkAwNoIiIiIiIf/n/MdxIX9KCc9AAAAABJRU5ErkJggg==)**

# include &lt;stdio.h&gt;

int main() {

 int n, s;

 long long kq = 1;

 scanf("%d%d", &n, &s);

 if (s > n) {

 printf("0");

 } else {

 for (int i = 1; i <= s; i++) {

 kq = kq \* (n - i + 1) / i;

 }

 printf("%lld", kq);

 }

 return 0;

}

**![Picture 2](data:image/png;base64,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)**

# include &lt;stdio.h&gt;

int main() {

 long long n;

 scanf("%lld", &n);

 long long t = 0;

 long long sum = 0;

 while (1) {

 long long next = t + 1;

 long long square = next \* next;

 if (sum + square <= n) {

 sum += square;

 t = next;

 } else {

 break;

 }

 }

 printf("%lld\\n", t);

 return 0;

}

**![Picture 4](data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAvQAAAHtCAYAAAB27erYAAAAAXNSR0IArs4c6QAAAARnQU1BAACxjwv8YQUAAAAJcEhZcwAADsMAAA7DAcdvqGQAALwzSURBVHhe7P1fbBtbnh/6frtvnySH2Iq3ry03xkaTewBmEqunOdDMwJsU79hB+kEies4AeWGrTYNClIElt31yRfCeOQ/tFgiN5mVOdKUTyG1JOBAgwnKrBRxcYDINSg8dxO4rS23MjDCcQJ4EBNosZDuNbfvajvbl6eTkou/DWlW1atUfFilSEu3vBzCwN4usP2utWvWrVb9a+lL/V7/2q69/41P84sVzEBERERFRb/my/gEREREREfWOL5kj9ERERERE1HusgJ4pN0REREREvYcpN0REREREPYwBPRERERFRD2NAT0RERETUwxjQExERERH1MAb0REREREQ9jAE9EREREVEPY0BPRERERNTDGNATEREREfUwBvRERERERD2MAT0RERERUQ9jQE9ERERE1MMY0BMRERER9TAG9EREREREPYwBPRERERFRD2NAT0RERETUwxjQExERERH1MAb0REREREQ9jAE9EREREVEPY0BPRERERNTDGNATEREREfUwBvRERERERD3gK1/+pec/BvRERERERD2MAT0RERERUQ9jQE9ERERE1MMY0BMRERER9TAG9EREREREPYwBPRERERFRj/rN3/xNfKn/q1/71de/8Sl+8eK5vrwLspgpD+AgX8IGAORKWBuO6l+y/R+H+C//fR/+LoD69jim1/UvSHI9jf0V3Jrf05f2pvQU7k8kEGl27F02OruKTBTAYRVLtxewq3+hZyVRvHcTiT4DFbM9Bmm1Pqy27V5/qrCIycGI57Le1Up5ZjFTHkEMOPlzNj2F+5kXuHV3U19CRER06nzly790/H8kEsE//+f//BhH6NNTuF++infL9sV+9HIU9e1xjOXHMbZtAGiguiz/f7mKxssd3MxvoQ4DB0EB1HoJY9sGIvEkUvqy9BTul1cxk9MXhHTU37drZwG3whx7l23cHcfSfgON2t57FMwDwB7mbq+gehjFQJi6bbU+ZJuEceAKbnfn7/guc5Btb+3elLtdnzbpJOKhgnkA2MR0fhwVA3j5+VGC+SSK91axNpvVF2B0dhVrYc7bnQXcejaAtXIJo/oyIiKiU+73f//38Xf+zt85roA+i5mJOGrLdzC3Y36WxKXXW9ZIZ+rCeeCwhifWcqD2bBPIDSDWLPCBCKAqb+IYSmuf7yzgVj7EiKqfo/7+KMIee1clMRQHak+PEngds1ypeSAHiKD+YRX9l90BoacW62P0chT1Z94jv0HLADnCfx0o51dQhUe7PmVSV+J4uR0mmDdlMRANeXPkaw9zt8cx5hhdF0H+wDMxSBALU7frJYxtA5leuHEiIiKSfvd3fxdf+9rXgOPKoU8VrqJ//4ESzENcjOfNC3ESQ/GIcxR4ZwFz6yLwabw27J8F2Lir3jD0vlaOvWvSScT7XuGzXinX9BTuDyN8oLizEDrdorX6CApYsxiINvDON8stieKFA4zdXsAu9jB3+/S36935O63d9LZ4cxRaLgk8lDfg6yUt2A+wvoUqEsiEuhEkIiI6eamUPQx1DDn0Il8WQXnH6Sncd43gQ4623QAe3sHcjpl320DV8T07H1ek7NzBkyuLmBxs4OXhefT3ATC2Ai7s6u8VhwYMRBH1+r2ST93Yr+LlYBzvlh8A128ioXzfypUOzD93bt/Oz27x2I0qqmcTOPPzKvoTeq63yG+O1/zzle28bi1fPlfC2uUD5/GY5SHzxNWc8tHZVVx7XcXLwYRd5+q7EodVLN3ew9C9m0jgEOjrs+rNPk73vif6zD01udM7rHx/AEADL19H0H/OrA9DrAdVLN1+gYyaw/00qeXH29u0c7zD1IciPYX714Hyk48xqbwnUt8ex/Rzuez2AnbNstHaiGd9uPL4vfZT+63CN/dfzfdffotr5r5Z7Uspa/O41PbseT74lIs0OitG0T33x+Jf93+9fx6/5fMegt0ODFT3zyMR/f+ica6/6TmRKixiMl4LOFeJiIhOlppDPzIygq9//evAsYzQpy+iH0GjkeJxfQQeo8DpJOKo4cmO+TLtOCpGBGc+kctzJazJmwWRd19DfKKE2Pxj1A9f4H+/LfJ0/VMbRMDSv78ifp/fQl0GeWO3S/i+x+9ThUWsTXyMR3mxzUfnEogd1vBkRzz+N78/OruKPB6IdwEc21Ro+19RB39DHftVvJPvHCy9jiPRZ+DgXy7gVn4F1UMo6QYiteSlsnqbSFGYjNewZL67oCw1U0NShUX7eM5eRCo9hfuXgbryXTHyDEQGE9YNyujsKtaGgYosr6VaHJOzUcw9MdCo/VCs77CGJ5jCfes4zfXJgO7NlqwfcVwwtjDmkau9cVf8trG/grH8Hfw/CiL/v/7MQPHeDZx50wDevMAuNjGdX0H1sCFSiRz58VnMlG8AD8VvLc3qQ5O6Egdqe9h9/haNw6ooW5m6ZS0zb5byW6j3fSzLTKuP/AqqSCBfSIbaTxHMv7LLe78hg17v4NlZPwcYmEiIfTNfYN82gMO3Vj1b+27+v+/5oGzEJejphSm47v+fnu8hZDFTXsW11/J8Xn6L+GAE9b/4n0OdE7ufvwKseiAiIjrdtra2MDc3h7m5uWMI6D/52DtYt4h0G68XBEXw8AJD98yZcdRAIIsZObONFajsvMBLRJEpD+BAjjAGBQ6pwlXEDqsoa6PW9ot62u9zJRks2cFk/bUZJCrfRwkDz8Zxa37PFQDZxP6ro6Ybd+3/Djz29BTuD593jA7vfv5KCbz28KSm3UZ8ArzzyINPFW7IUWs5KrmzgFvWCKV9PHk80I5nD+VnQEx9STQ3gJgavKKETLSBqvIi9O7nr4DoCNYuHyjre4GhDFDWjzM3ImZN0Z6u+Ke9iFQWO98/iaH4K7y7MAI8vIPpu3fsJy1WgC6/KlNAMDuAg/wdzO043x0IrA8X+VuMiDx4x4ivXPZ5Evflkw81/cRVH9jDZ2+AyDk5yh+4n1lkBiOo67nsSkDukNPrx8A78yYHm5jOl4DLUSUVTpyr1vnR9Hzwkb6Ifr99MoWoe+d7CEkU74mbc+sp1M4LvLQGE0KcE8/fooHzuHTK31cgIiLSdT+gbyqKM31eo+giUHl5bgB4KAMGR+DjEYznBmQahPv7vpQRuVThqjtAtX5vBuBqsCQCHGvfcwOIHZ7HtcsH1mN9vxdKzf2vBASE3seeRPF6AtDeSRh1BF7S2YvyJb8sZi6/8EiBkAHgE58Ug9wAYgYwIINvx/Hs7AEXzis3YvIGSwn+ikNRNDz2E4dVLN3dtNaH+FWgYqb46HWmBFi5EST61IBdkxtwjg6nk4jjPM5gy3Xs+o3W6OUoGmevYuCZmVqiBvxB9eEhnUS8L4LEOSgj78oyvMKZy0BZBqt2YOpVH0lcOmsHssH7KfRfSMr/EutztQvAu35yI0g41qXdIMkgW72hDjwffOhl7y+o7p03VOaNkKs/0J8WND0niIiIek/3A/pmo165AWcQbUonEe8D8MwOxtQRudi5iDYSKAIUdaacZjOJ7M4/QPUwikxZTHGnjzY6fu+xn6nCDSXAkcEqalag5hVsmdz7rwg69nQScT2olSOt6me7n7+y/nt0dgAHXu8QNEmHEsHjW/u3riDXDt5GZ6+i3xrdhXWj5piWMD2Fa1HYAaYMfF8+sZ80OMp8vYSKEUFiQtTPmvZUQqff1IhUrhoqrvcG9BstkSqE2gPtCYm6nz714SF1JQ7sr2Ds7hbeHTrbvtgn4MC8gXE8efGoD0cg22Q/sYnpbQORwZuivGQ6med7E652JM8ftU06AmIRwFs3cCHOB2962ftoVveOGyrRFp03LvoNZohzounTRCIiotOp+wH9zgu8hF+usQwivEY6P/kYEeMxptflhT89hWtRAwfPp1DMyUf71mgbMDp7E4m+BqoP1UCpgXeYwkzBHLHU7eGzN8rc94687ODfj86uyhdED4BcVo6kqtsHRjMJkaYx6zMdnrL/qcKiPZ920LFrK0oVFuVLlTV89knWuZ2+jxHLlezRXE9q3WQxU15EMQ3reGoPF+wbnIzIr44VppBKi3nHD9blC46vawBqePLJlPy9gXeHztHimYkEIupTlU8+RsSwpy61jhP2tJP11w37bxXk/YN5a3+fAsXZKaRk4KjWhyVtztyTxcxsVqaAqKO7WWQGRVrMTCEZXB8es6LEzplpKXt4UgPiV5JAroT7hSRi5yKoPylhQx5HqnAVMeMA9cIURvVzxfqDaXIUvdl+Qt5AG2beuUj7ak688BuH80mZfYMk8unf7Tfk+yHuOdvd54MP11MAf0F1P3o5isZrs6416Sncly8t1z6PYlQdTAg4J8TUuU1SgYiIiE6h7gf02ERlv+GaDzpVWMRaWc5gER1x/WEX1wjoJx8jgigy14En63J0HQlMytH1DLacF/30RfQjgsQQPEZopfQUrkXlKKA+B7X++/UD1GGP5g88ky9vRkcwADly7ghURKpEZFBJJ1Fs3N1Cvc/e/zweWPndgcf+L/dQO7RHLvN4IF587Evg2gXD3s7zt2ggioyV/uNhZwHl/QZiw3IUtGzmZeuj8VCO5yYGPjePR5THwLNxTH/+MSJ9CUxaaQzipUMoo8XYHpdTMQq+x2nts0gZEfvnDiKdojjTF0Fi4oYob9f+K8ztlMUorSsFRKt73/2UbdHJmQqy+7QmyuDyAW7NR11597FzESA6gjz2sCFH2K36GD6P6rIdlDfbT8ibrkh0pPkfVdpZwCNrBPwG8PAxXnqMrovR/gEc5LeAuKiLgWclbDQ7H1zEy75rw1GgL4HJpvUZVPf6uSXy460nE9eB8nIVDUSQGLqIutkGAs8J+cTJL/2MiIjoFDuGaSshR36vNp3K7ljlSlgbemu/fGhNveeeBq8npadQ/ETM5d+T0lO4P/ExHll1EWKqyA+amBXmzBPnFKKZqHNKS1/K9KQnrlt1H3RO6P0BERHRKaROW2n6vd/7veMYoYfI7V2uIT5hpnOcNPlCnzoaZ00J2DtGZ51/9n50Vo7Kyr8y6h497hXmi79byo2VOdWk44skmS+Fqi9Zb9zVpt4MkLpwPmD2oOPU2boPdU7kSmLqTgbzRETUY7797W/jypUrxzVCbxJTy312+xSMgKt/7MjSW6Pzo7My1UjOGGP9ER79D2H1IuWPFdmOOEL7XvP+I0zNRuedf4TqlJRvx+o+xDnh9YeyiIiITil1hP73fu/3cOXKFeD4Um6IiIiIiOgo1ID+D//wD3HmzBngeF6KJSIiIiKiTjKDeTCgJyIiIiLqbQzoiYiIiIh6GAN6IiIiIqIexoCeiIiIiKiHMaAnIiIiIuphDOiJiIiIiHoYA3oiIiIioh7GgJ6IiIiIqIcxoCciIiIi6mEM6ImIiIiIehgDeiIiIiKiHsaAnoiIiIiohzGgJyIiIiLqYQzoiYiIiIh6GAN6IiIiIqIexoCeLKOzq1grr+J+IakvImoiieI90X5mcvoyIh+5EtbKq1i7N4WUvoyISMEYJRgDerJs3B3HWH4LNX0BUVN7mLs9jrHlKt7pi8iHeRNUwqi+6EOxXsJYfhwVdjpE1MSHF6O0do1gQE8Oo7MD+Gx+T/+YKIQkihngybr+OXkzb4LeYuBDHnHKlTDw+QJ29c+JiDQfVozS2jXiS/1f/dqvvv6NT/GLF8/1ZUREREREdEp85cu/tP67WCxa/931EXozr7Zp3lN6Cvfl95yPF7KYcX3WCWK9gfvU4uMOm/zdbFZf4CZzSIP3oxUhjitX8jgm81gXUUw7FnSfWfdhyqtlXT4ur31PT+F+u9vzaQ+jsx0oH591Bwvblo96noZot1KqsHg8ufptlZcfcXyufTZzyJuWbzhm2XRmn73I9qDlvLfbPru/v6dXqrDoKsfTRNSN//ncbLnQ5f6307z6c4ew/aEHR4zj7gvMc0H8W0QxHWZbvRijhNj2BxWjmI5+jeh6QD93exxj2wYAIBJP+nZeo5kEIgBgbGEsX8KG/DxVuApsj6NiRHGtYw0qi5nyCGL6xy7icUfFiGJAL2RfSRTv3USiT//c2+jlKOrb47jVkUdIIY9rveQoYwBAbgTx2gqW9oFEpnnD6aTUlTiwv4Kxu5v6oqPr8nF57vvOAm7l72BuR/1mOH7tYePu+JHLx2/d/sK35aOdpyHbLQAgiaF4BPXtcUx3ObWn9fLy43d8SRSHgEp+C/Xo1Q5cpLLIxGtYWq4CgyMtXuBDSicRRxVLt50pMu21z2PY31MqVVjE5GBE//jUaLZ/zZZbutz/dppnf24J3x962lnArbx4z6gBIDbsDFh35+9gLL+F+mEVS/kHwPUw2+q1GCXktj+kGAXo2DWi6wG9qW4YQF8CGa9Gl57CtbMG6odA47UI/oUshvAA0+viglFG0tnpp6cw03LwAACbmM5voa5/7GPj7hbeXQjeTqpQkoW9h7nbK6ge6t/wksSl11sdDExaOy5bEsULB7g1vyc6lWcXmzacToqhhnJHOgtdk+Nqu/3Y2t13u72oOt0eVC2s2yqXsG25yXnaVCvtNgrUVsIdx5G0UF5BciWsKR11bFgZacklgYclbGAT0/kHwJWjXaRShYs4uL2A3Z0F3Mof4JLVtrOYCTG6E0bqCvBIC+bDce+D//52QQfO9U7anb+Dpf2G/vGp0Wz/mi0XmvS/p1Bwfx62P2zu5X4VdUSR8XpC8+YFdlvcVpgYpfV+HZ3rBy2tbFt1sm0puF0cUQevEccW0OPZFqqHQGzI3YBTV+JA7cBjdoxNzCmFuDu/oNyxJVG8nkC/9f/d5NwPl/QU8oPn9U9D2MPcfLfu+Fqh7cf6Qlujy+3amG8nQAgj6Lg6037a2nff9tLN9hB23e2US9B52mlNzsWOCVteTchZXMbkDUt9WxnJdrTHo2/PWe52OY3Oeo38tKfduvXaB7/97bx22jQdXVD/ezq11Z+3ZQ/T22KQM9+RG81m50+758DR+6XOONm21NV20cFrxPG8FJsrYQYlTKOEtWHx+Ma+48tipjyAg/wWLt27iXhtRXm0oz2GOJSPetNTuD8hU3QAAA1Ul/UUB/lo580Wxp4NYG04CsjCEtsW6+7fX0EZN+TjQ+d6RmdXkRE/035rcz16PKxi6fYehgK3HbTugP36RJSfvi6ngN/L40oVFjEZrymPzZ2PwRr7Zh0ElOFzuw7s73vRHrEZW8pjK/3xm4GK/pjNEnBcvuXis/5Q7Udw1q+9f3q9O8ogV8LaMDyPRf8dDl/iVV8/zivrsNqGVVbiOJznhi6onH3OI/P/TZ7lIh/9erUBxzlsr9+/bcL1XbvcwtSvWU/2OurbW8DwVbxbvoMnVwLqxMW/vPzPTQTsvwelPBv7VbwcTADqunJ2u0XAuhxtxtUHyjKBVneHVSzdfoGM9hjXVTeOfTDbt1q+4vte50G9sIjJc48xdtcIaJ/uR8ne61T3LaDfMffd1VYFVxm6vqe26SqqZxNI9B3zPkl2PyyvF312O7T247CKSi2OzLnHon066ks5P4beWvXteQ6pfb/a/6jr0fo/8d1XrjbhqP/BV6jkDzBgLgvdvwec723sK6C1ZWMLFVzFpYraL+j9v70ufVt+daa2gwpGrH7CdV4FSU9h5soepuf3rO06rv+zwLTS7we1ueC+SnK1y3D9uv+6A+rO91qsan5cxxuj6PWvttOgNqwL2BfPcmj/GnFiL8U6rHuM0ucG0L+/5VFAotFge9y+e+lLYPLeFFI7C7gl72Ya+ysYc+UrK5UQHcHa5QMx17HhfkIQGbyJPB5gLL+C6mHEzs3KlZCJGqjkxfa9fgsz723bkA16HGNqoOS3bd91252ma78mVq11Le03PPdF5fq9PC694xJldQN4aJfzy8GbmMkFlOHwKtauA+W8eD8i4pv/ageiY/K7iI7Ilz60ZfkVVA+jyLhehIEjKHAdl2+5BKy/afsRrE7FunuOIjOblSPsEPUtt2uVgXYC6tzt5X9GUUs32bgrylnQOxQvQeUccB7pqwkqF70NWOWclTfkcv3LVfQP+7205NwXUW43HN911W8mK0Yw5Hs4gpqis4kDI4IzqYA6cQkoL99zE6H235Kewv2JOGpyf8qIO0eorZs+WW7bBiKDNz1fPNudvyPzbg1UzP5lZwG3trdQyd/B3I4YfcO+PJ7lKhp9CWRym5jOy8fbxhbG8h4XlvWSbNsNVJfNC9Umppe3UFlWglzrPBjH0v55ZMolxJ7W0Dg7gD8ObJ/e++BeZwOx4dXgfkethwnleGXbqHvl+bratJKbHI1b/d6x7pOLOw1BTWmpP62hcfYiUq428wqJiUUUnx+g3vcJrvv1kco1bVI5R0QfY8g2ZG/bU24AscOqLBs1oIkiY57/2wZg5fkG9L9B/Xmb+5oqLDrKZun1VSsYdaUH7SzglsxjB8wnpmH7Dik6goFnSh/h2+cF251/IGIiLZ/ewa/NBfZVCtc5EKJf9113QN35Xot9+Gz7eGMU/bxXrvOBbVgXsC9+5dDBa4TpeAN67GHuiQH0xTFknvRD51F76u7wUoWriB1WUbEuQJvyEZX52yBKB6mMGNRfu3P+7Du3PXz2RllgvZSRRPGe8041NL9t+67bDlRc++UY+QDQ97Gz8jWu30uuzi03gkSfPBnLq1YuV+xy1L8MXSO853HJq05yI0igaueeyUdL0+vmdg08si52e5h7WEUDXi/3tFEuLa3fSxaZQaD60DzOTUzn5aMw5aXX0dlVZ+fjCj6Pyn2xdwko56OdRwq9DUipwlXEEEXGnJ1hIoEIIohfcXc6qcJVxAw7H1O8BOa8QLvqt4nY8CoyUQMH/zKgTnQB5eV/bobbf9NoJoGI8dhatjv/WLlpS6I4FEVDHchYL6FiBEwcsLOAR9qLb6OA/L14Me7W/J64CHiMEgfbRGUfjjpLfQLUdyDPgwjqT+zzXQQhUWQmEkBtC99v1j5d/NbZpN8xpS+iHw37urF+gDqA/mY5xIB2bbDr52T3KUBfApMTCaD2CkOebSaCxMQIYsYT/I9+faSUunAeOKzhiTzmjWeGf9+tuFRYFAGK11M9dcTy+Vs7SA7sfwP6c6m1fZV1t23faOw+rdn70kxQf+5H6Qc27m6h7tPnNbeHudsyiPQaZEFAmwvoq0Jred0Bded3Lfbjs+1jjVGCrvOBbdixEq1f8T4u3VGuEX6OOaA3Ozp5J54bQeKN2qnaYuc8Tqrnb9FABGc+0Rd0h/gzw+LOsPkLQK3p5rpbZo28KP/UE7NNqQteeeKC57KdF3jZiYtgJ9afvhiYb5iSU4wNPLNH406K57FKx3IeyZFX9Z/XqKTnvhxRfXvcGjEMWydB5YWAczP8/idx6az+gr8qijMeI9r1143Ai+DGM8Me7UlP4RKUc9ScVu3ygZWL2YrdpzVlppkshi4Y4gLneR7YF3Cvem4qaJ1nL3oHNaqdBTwylNFcPZhux2ncJ9h98635/+rfZg6rWArRX+/OP0ZdmZhCD5q9RZEYjADRAY9RSX+e51gL/W9L++pZd60J23d4M/CupRtanTnIkkC+cFFfGMivr+qEbq67ZV2KUYLazlHbcLCjXSP8HH9Aj01U9htA9CruD0VRf+ZdKWLHvUYRG3jXxXR/U6qwiMzZKpZ8RuCOopvrbktAEHEUu5+/8l337uevAM87XeDl50e8CHZi/Tsv8NIv6M2VZO6oRwrDCQgq52M5j8IEPOa+hPxuy1qok6DyCjo3W93/yDm/ITMRAHiOxh++9Q/G1w+sIGf0ivoXeUW6x0v1ZapW7eyhdiimHE0VLtp/iVFewGKXPWZXaKEsHILW+eaFxyiw20alikZ0xHoq9HLbXV8tOY375BDQZnzaspu49saGxUjn5OArO4XLl4GKmWrgN4Ls4cj9byv7KuuubS30Hd5E8BXuuHysl2SqTyJkXQb3VUfVzXW3JXQbb1HAdf7obbi5dq8Rfo4toFfvaMSjhQgiUFMBBPMAze8krtudiPMRhXJXnJtqK3+tKasRibmvfSmPGkcLITu9sOvuFnP761senXUWxYA8rdDWD5R8NMmcOst8n0LJHXSnhxxB0/U3az+bODD03MYkirNmOdmP8EYve52Ufo/4vNqLPHnNkzs9hWtRmYunlJ3vyR9Qzs3PI12zcnEyR9ImtW0XPTrB3ac1NPRZHXIl9x/S8KI9VRCpPiLlxv59szqRAsoL8D83w+//Hp7UGsp7DBA5yHJ/7xcgUw/VdblTPtxkkDO0iAHsub5n9bFyW4KSyuBTL4JIh4wM3kAeL5QcaXMARjkWZDEQBRo15z74tk/XPnisMz2Fa9EGqpUwNyRZzEx8jEfKaF1wIBamTR/3PklWW9OfBoj2AOt9FzNdVW0zsn0aBx7voHnIlcRLzNY++r3cp5NpIXrbD9K0/22ipX316qudRHCm9A8ZkRqYmFhE8SLC9x0m5WZ2dHYk/HEFMFO8WuLTV7mFOQc0odfdJccRo3i2HXmdP2obDnS0a4Sfrs9yU7y3ar8wpeQ1pQqLyHx+R+ZT6y8SumdbEB87c7Tcs4GYtBcJjS0svb6q5Mb9Z/xn/H38ffl/jf0VPDp3084TO6xi6SGQt3JRG6gbQCwaUfZNpc4KsYJ3Q0HbNlBZfotrnutuvl+VWlx09Oa6HPviLC+v3/+kFsc3Xb/XZ6IwUJGzDgUexzaQ0WdccAWJXus291mrJ1fem6n5cXmXS/D6/duPzftNf+f+1A0DsWhUlMHfvELiG+HLxHoDXj0HDquovkkggS1rBhG1Hrz3Naicg88jnV0uf43q2d8KbgN5j1mDfOtRBEnu7zpnY/GqX8dMIIDHjAABddKkDgSvY/E47z333/tYHS93GQbq0Sj61dkWtH4vcDYEk/UilfOYHO1Ubismy9KaiSJgXwX7pV99P/QX1ex9dfe1Xm3L+r12DbDXadaTe33uNqf1TRa9P7QFtWl1f49rn5zbkd/RZhyq7p9HwjHTh7vN2HnMzftI5zVN4VFn7v1TZrIB8OrzBs5fUJY7rmlm+/Drfzu7r4K2LUA7953L6/tV9A+a51GrfYe7Pdj7JNfls5/O64lX2zBnuXH3+6425xtHeK03+BwIv+6jxijustO3/df75/Fbrt979dedilH0egno33z70ObH5VUn7V4j/Ga56XpAT0RE1Dnq1H7Oz4sFo8l83N1yGvdJY04frd805qZQfH6883o3ddR99bnxJXof+AX0x5Zy0z7xlvVaC/l7RCrxco//41ii90MWM2Xlrwy+p7z+SJX4fMDO/T+KXAlrZTWVq7mu75NKvgAdNH2dWxYzntPpZjFz+cUpC3o7sK+ffOwe3Sd6z3GEnoiIeoj++F0IlbLUNadxnzSu1Fb4pgKcuKPsq+O3/mkWRL3Kb4SeAT0RERERUQ/wC+h7IOWGiIiIiIj8MKAnIiIiIuphDOiJiIiIiHoYA3oiIiIioh7GgJ6IiIiIqIcxoCciIiIi6mEM6ImIiIiIehgDeiIiIiKiHvaBBPRJFO+tYq1cwqi+iE4f+afXW/vT5kRERETvmfQU7pdXsTab1Zc4fCAB/R7mbo9jbPktBhgknn7rJYzlx/Ho3AhvwIiIiOiDlbryMWrL4xi7u6kvcvhS/1e/9quvf+NT/OLFc30ZERERkY8sZsojiKGB6vIdzO3oy4noqFLpJHZ39qz//8qXf2n9d7FYtP77FI3QZzFT7mJajEzjaPbI4v0j041O6LhHZ1dFuXv+86trM0VqEcW0vqxdnV1nqrAYsP8q2a7vTSGlL/KSK4Vcr5AqLGqpSXJ7J1TfDukp3O9QeXdcegr3j6mMxDlwSsshNNGuZnL65wR0OE3Qrw8I+dg9tI6cn5uYzo9jbPkxPtMXhTQ628FjopakCove16ZOt7UT4HVsne+LjyGdO1fC5MTNUHVxagL6VOEqsD2OihHFtU50ig5JFIeASn4L9ejVDlbmaZdE8d5NJPr0z4/Pxt1xjC1X0UAD1eVxjOXlv+UqGogi4xUk5EYQr61gaR9IZJo34lA6uM5UYRGTgxH9Y2+5AcQOq1i6vYBdfZmX9RLG8iVs6J97GJ1dxeS5x7g1L+/c01O4Xx5BTP/iSdlZwK38KR2121nArWcD3e2IAQBZDEQNVE5rOYRijsKSn9HLUdS3x+1z8Sh8+oDUlTiwv9L0sXtoHTs/s5i5fhH1NtYzOruKTFT/lI5D0HWs423tmPkd28bdcSztA/ErHYox00nEUcWSx/naGa3FrqckoM9iCA8wvS4KvIykfZFNT2HmqAF+Lgk8LGEDm5jOPwCuHC2gO/WsMtvD3O0VVA/1L5wCOwu4lRf7FhtWg6okihcOcGt+D7vzdzD27GLTRtxc0DqzmAlx56u2w935O1jab+jf8JS68BaVsMF8C1KFRWSw5exwdxZwKz+OiqF+sz2jsy08VeiKY3iytF7C2DaQ6eZxpi/i3XYLnX0n+ruO28R0fgt1/WOSkrj0egvT6/rnnRVDDeWQNwypQqkD/WZYm5hus4/buNuZ/ur0CXldORGib7UC3r4EJrVR61ba2mkUdI3enX+AGjp0F/kJUHvYXtsPpcXY9ZQE9JuYUxrP7vyCvAAmUbyeQL/yzbasLyijEHuYm+/Nu85wOlRmx2IPc08MAOpTGa1+HHXXLv91js6GGXlsv0ztttxJWWQGX6HS4dETkUYk0qEGno1jrM2L9FHYKVo3gIfNXwI6svUtVJFARn9K1Ck7C5gLHei1387oJB3PNWVjPuT5mJ5CfvC8/ikdo3DXlZMiJwnJj4ug97CKJe1JTei21pM6eL52JD4J0GLs2vWXYov3Vq2Uj8b+Cm7N79mPQ2QqQkx77FbfHsf08yncn0jAfmjS5KWbXAlrw+ZK1O/qj4sNVOTjEbEfr1DJH2DA/I6hjXrqciWsDZ9HdfkBcF2ms7iOw94GPB4r1rfHxWhOwLrMk8n70ZFPWaS9ykyu+80Wxp4NWGVk7QPgKqOgZfr+BfNL+fGoH6vc9d84y1LnKB9z36xyENt5csVZhqIdRl1pBM7jljzL1FynV9sx7P2Xx6S290otjsy5x75tLFVYxGS8FljGzb4zOrvqHr33o5w35vlp0+vCQ9D5kithbRiB9QetDl114Cp/N9dvLKJt9e+voIwbchvuc6dZeQZznh+OMnT0SV7lq3Adp7OdVffPIzEYcbcpSS2D5v2a3idKQXUpf4PtcUzDPC6zLO311be3gOGreLd8B3M7WvtRzo8zT8ZRudCF/dTL0dFfif2J1wLqwVNAHev7GKp/DD4uvT3qdR3UjvTviv15gUx5BP37VbwcTNgvsH4S7vw0r1+N/RU8OjcC3LXry9wX6xpnbKGCEVx77b+PjuOX389AvT55tSvRvrvTtvVyU685rbYZ9/br23Zb18/joD6iW8dqxyOG2B9H36f3+cHXX6Bb55xX3yGPqZXrSpvnkcm3XQQec8DvPJn12EB1+THOZIBpx7G628eJvRQ7d1veBRpbVuHtzt9BZXtLjADmSshEDVRkbnXFAGJDU0jtLOCWfMzb2F/BWFCun1XB4xjLr6B6GEHiuniMPjorg8X8OMbyW6jL0WC7wKPIlAdwkB/H2LYBBOUpWYUbQWJCjiAuV9HoS2DSHNXMr6B6qIw4+x1fwLqs0cJcCZODsHLPxaPJgHzcoDKLjmDt8oFzHwDZmOTxy9z2/mHz8Zt9EbfKry+BydApCuZ0oXoOvcf+n72IlHLyi++JsswE5Dnvzt+R6zfs1JadBdza3hLlhCnklTJc2m8gMjiCUWxiWqb8QLYPz6AwqEw92447zUl9/Fd/WkPj7EXP8tM7HD+xcxHgzYsmQUNzo7OrVpsYy3vl/9ojOb7//C4cWkfkTTz6zeOBtT5XHcg0Itd2lX+u3wCOi11k8KbchuwbtHcodj9/BfR97L4wNuU8P0TbuiHOHUefJNpHZPCm/0uTHu3MvhGNIm6WkRrwyXUv7TcQGxbvojTv15Io3lP6xOUqGuY2/epSt14S67SoKTmbODAiOPOJx7l8dgRrs1E8qTXwa8mlLuyneMKBfblNvT+V7dndzoME1HFb/WPwcbn6gLRf/+Vtd/6OrBvZ38pgXpwHH8t+3gzmm52f8voFsa9l3JCBoDsFS02d2XhmIHLOb93i+PvNOnp2EdfOykWB7ap7bdt5PokYIWOly7TaZtzXFRHMu8/joD6iW8dqDfbkxzGWP8AZx/XG45xtcv3tzjmn7ce2AURH7HftfN4xCdTieYTAdhF8zP6/8zY6a/YhD4Dryg1aQPvw0/WAHgB25x+jHh1QCi8LQDY6q3LExb31F2SSKA5FUbfyVGUQIoO7jbvy5NFeGLSDLOXu6flbeGddSVaHo4zy7bzAS49RQqtD8zu+gHWZUhfOA4c1PJEB5MYzA8B5XPK74Qii3OHWX9tHmSpcRUy+nLpWXsXaRAIRRBC/khTLDquoWMe1ieltA+iLY6idfQjy5gV2cyNI9Bl4ZJ38e5h7KF6eHQhKidhZwCPD+Z1RQNSp8uLX6KySN9gRLbQdyFzFiQRQ2/MMxoPy/mxJXDoLNF4fPfF04+64GBXrxmwGrouzF3GulnGjczOEWOxgwB6J2cNnb/TvmXXX+nmVKlxFzLBzp3fn78gbPtEnNfa37IvOegkVA4jEkwHBnpPaR9nnRBaZwQjqT+zRoN35B+JdlMvZEP1aFGf6gPoz2f/u7KF2qPRXRxQbXkUmauAAPudydASTg8Dfbkx2YT+V4CFXkn3Z0fjXsVzWcv8YfFyuPuDI/Zd6HjjbY/PzU5JBpDj2JoFUdARrw1H7+HS5ESRQtfOz1/dQ07/jozttO4vMIFC18qDlrD0BQXGrvM/j4D4C3TjW9BSuRRuoVsxj20RFbWttXX87f86524j4uzTeAzchtXweBbWLoGMO+p0/McAqY9e7m83bh49jCejFqI09ap0qXASUyhF5s2KUunlAoxMN219WTON3HSibd87HrN3j251/jLp656cF+B1jPcGw/92a3xMjwbrnb9FABGc+0Re0KTcgHt2+NsTx6eRNTv8F/0YMebNjPXVIT+GSecMo75itvPCwF7FuOKxiyXMk/ATJztIK7B2BtbgJdU83qvzrwI2ACBTswH5NnfnInD4t4J9rlqRj4nl+AL59Uv11o80nAYr0RY8ce3mj4vPkx0lcxO0ndFpgcET17XGM5UuoB5zL9W2PJ3Qube6n2V4uH8jRsaPxr2OfZU37x9aP60T7r/Ut8VRrQu8bfAQ97YSYDcjJ5ya7La2Xrff5dByO2ke0cayffIwIXuEzn3Ov7etvh885z/3ogJbOo2btwu+Ym/3Ow0bFzvKwp9QMbh9+jimgl4/hBkcwiiyGsGfddaQKi8icdb+UEZ6Bd4d+DU55vNc0r7E7jnZ88qQdFp3p5OCrrsyY4hcIiMbjNdrUwLuOvHIh7kLNkYvdz18BPqMBLz9vEgSvH1g3P6NXgCfmBSVXknmI/heZ3iIugIEjMe0wA3s1sL6XxJN2U27aYAb2Y/lxHFyWAXvmRZspNy1ocqHzU3/d8Dl3RJ/kORp/+PZoFzx5gY1d9riRCpmGZQ4UiAuI6B+PXIaaoHPZu692a30/s5iZSODltl+7FIM7rdwA+tdx+/1jS8d14v2XnXZXMUT6WtOgPkD4gLU9LZUtzPMp6Aas9TYTztH7iJaPFQh8wh90zvpffzt/zjVLgUx5zC/fVKvnUWC7CDjmwN/5sNJKt1BHBImJRRTTwe3Dz7EF9OJOP4pr9waAp1rjsCoviaG4OuohDgoAkJvyyW3fw5OamtcojM7aeV9W8JNOIu5x19N1vsfXRK6EyXOPleClyeNOIGSZ2axOQR1pTU+hmJPLYL+PAACjmQQixuM2bk406SncL4uXXqx0qfUt1zSW7sfafswRi0UMQE9psTsx5wiRMjokj9lba2XqHjEVaRJoml8rBXRmaBJkmCk5R2EF1h25efS/gATZuNv5GwY/4slXuIuoavdpDY2+BPJqgJMrYSYnZ29yLHOnyriFaWfyMbmaU+p6lB4kieK9q3in/E2IVp4YWcG4NhItUvdEys1MzvtcFk/jGqjp/b+n9vfT2kf59E/weYGwCf86brd/DHlcjj7Ar//yoaRmjBaa9TdNzs9cyQrgnVNMyoDDurZO4VpUptwEPLXbfVoTf3/E/I7+u2btKlDIsnXYxIHhMXXy7BRSbbaZcNeVdvsIUxvHun6gtVcZj/QlMFkuYdTjnA17/e3kOSf2U8s7l9P5ut4xaabt8yioXQjex9z8d7rRWXNUXn1nJLh9+On6LDcq62UBNVBwvC3cQN0AYtGIlTsG5e35oIu7XtFm3qzj80MDdUQR6wPwf/w34L//ivy2gcryW1xTcqH0nHhAdG7OmXQe48yE3WAb+1uoxUecb2ZXLvoc3/8J4L8LWNcKbj1Nes/w0aQs7BkH/hrVs7/l2J+l11fdb18HvrGtnZSut83FH1RxlZWkz/Dj4DkjhHghxtpnz+/4SE/h/kQcNccsJs79rxsGYtGo9e6C9eJhk+2oszi4ytCr7VgzgYjvuGcTcHO24aA347OYKZsziSgf6/UYuI4uc50r7TyhOgpnvTf2V/Do3E27LVr1LdrbmSf+bTiQXuZqO9JeDA46T0yB7UypS2dbscvX1YY82ubBZa9zMqiO3GV5ax6O87QhZ1CB4xi1c1k5hu7sp9bfGAbq0Shi1j6Lma3MfVRnbwkMhoLqOKh/9OHdJ2r9ESDLS5nhxKP/8i4He5/ErEN63cnc3zDnZ66E+0PnEemT+6Qcu/PaWkX1TQKJMLNrqdv2+J1aPmq7sl8uRUfbDDzqxD5X7RefW2kzVtkcVvGTWhzf9DmP/fqIbp0fzvZqxiOvlH1q/frblXNOP6/0vqPla2k755F/uwg+ZmXWJ+13XkZnF3HtbAQRqy9VysanffjNcnOsAT21KFfCDEruhpCbQvF5l+c/pVMtVVgUT2+aXTwpWK6EtaG3gReH90sSxdkkntzVjzeJYiHadJ7j49ON/XQGZ8JR1teObhwXCd0o29PQZrx041i7ofPlFyagf9/5BfTHl3LTRKqwqLwQQEAWM57TimUxc/kFg/lW5Uon+gJlp+3O30EFwY+3qQlzWrBevTC00aZThRtIeKRkpQojwNP2LrDNiEkBgqa+czuO/RTXnBsdW18Yx3Fcocn2c5Sc+O4wX8Znm/FzHMfaDael/N5XHKE/zbTHLcIJplHQ6ZMr4f4F+288UEjpKdy/DpR7NZhvm54GIzR/BH7curGfYrSw/0jrOKpuHBcJ3Sjb09BmvHTjWLuh8+Un0mnUNKEPj98IPQN6IiJ6z3m9B9CZAIPeV2wzR9P58nPnxn+YQT0DeiIiIiKiHuYX0J+aHHoiIiIiImodA3oiIiIioh7GgJ6IiIiIqIcxoCciIiIi6mEM6ImIiIiIehgDeiIiIiKiHsaAnoiIiIiohzGgJyIiIiLqYQzoiYiIiIh6GAN6IiIiIqIexoCeiIiIiKiHMaAnIiIiIuphDOiJiIiIiHoYA3oiIiIioh72wQT0qcIi1sqruF9I6ovaNjq7irXZrP4xEREREdGx+UAC+iwy8RqWlqvA4AhG9cVtGJ1dRSaqf0pEREREdLw+iIA+VbiIg9sL2N1ZwK38AS51YJR+4+44Kob+KRERERHR8fogAvrd+QVsWP+3ibn5PcdyIiIiIqJe9aX+r37tV1//xqf4xYvn+rIOSaJ47yYSb7Yw9mwAa8MiT6W+PY7pdfmV9BTuTyQQcfwOaLx8jUj/OQANVJfvYG4ni5nyCGLy95ULi5gclL86rGLp9gJ24fzO9LrIn3d/L8R+udjrhrGFCkaQgfp7r/3cAoav4t3yHcztyG32ydUZWxi7a6B47ybOPDGP5xUq+QMMKNsZu7vp3r7K8R0iIiIieh995cu/tP67WCxa/931EXorgI2OYO3yAcbyIlUlNjSFFCCC1IkEsL+Csfw4xrZFHkt9exy3iv+T9f/CJqbzW6jL/9udv4Ox5SoaaKD6cAG78juVfQPVZTuYz+OBWHd+HJU3CUzO/t9D7JcuieK9EfSb+/nsIq6dlYvWSwH7uYkDI4Izn4hgPl6Tv8+voHp2BGuzUTypNfBrySV50xFFpjyAA7MsoldRTNvbjxlb4vfLVTQANPZXGMwTERERfcC6HtDP3V5B9dA5ilx/3bC/kL6IfjRQeyrTYNYPUAfQfyFknvvOAh4ZESQy5mwzSQyde4snOxAvww5GEBm8ibXyKtbK8kXW6Fl81my/dLkRJFBF2UzXWd9DTf+Oh9jwKjJRAwcYQaLPwCMr3WcPcw+raERHMDkI/O3GJJb2GwAMVPIlkSL0/C3sPYriTB9QfyaD95091A6ByDm+mUtERET0Iet6QN+UHpDrAX4IG5UqGuZIdm4EZ56Zo/WQaTBidN7+JwPmFoxe1gPnPXz2RvvIQ31bbK9+4by+CNh5gZcA6tt3MLejL9RtorLfUJ4gaAE+EREREX2QTj6gtwLyETGKPpHAy1ABrmJnD7VDcVMwehk4cOTAR3DmE/X/21N/3QD6Pnbnr4e0+/krAFEM5PQl4Z9G7M4/Rr0vgcnyKtbKIv3HP9+fiIiIiD4EpyCgz2Jm4mM8UkbQHUHq87doKEF5qnAVMZnKMmMFx3uYe2IA0RFce73lmNGmst9AbHhR5qELowW/PHl/u09raCCKjPmHpNJTuBaVOfiz2eb7ub6F6iEQGy7Z8+DnBhAL/TQiieK9q3inPG24xdl6iIiIiD54XZ/lpnhv1TGry9Lrq/aMMzBQyW/hkjrzi8XOJVf/iFNjv4qXgwnANRtNEsV7N4CH7tF9/Y9A1bdX8G7IOduMe7880nJyJWs2HBxWUX2TQAJmDr5zBhvv/dRmuVG245iJBwYqy29xTZn5p749joPLXn/MypxZR64b5iw+RERERPQ+8ZvlpusBfXNZzMwC066ZWrIoFowW5oxPojibxJO772sw63d8SRQLUczN6+VHRERERO8Tv4D+xFNuRmc95lUHMDo7gM9CB/NeL8O+X1KFG0iY02Q6Ph8BnjKYJyIiIvpQnY4Reo8/lhT8B54k9Q9Svfd/XElP1xEa+yvMpSciIiL6APiN0J+CgJ6IiIiIiJrxC+hPPOWGiIiIiIjax4CeiIiIiKiHMaAnIiIiIuphDOiJiIiIiHoYA3oiIiIioh7GgJ6IiIiIqIcxoCciIiIi6mEM6ImIiIiIehgDeiIiIiKiHsaAnoiIiIiohzGgJyIiIiLqYQzoiYiIiIh6GAN6IiIiIqIexoCeiIiIiKiHMaAnIiIiIuphDOiJiIiIiHoYA3oi+jClp3C/vIq1cgmj+jKi9wHbOPU6tuHQGNDj27j3k0f42c8e4Sc/+La+kIjeVzsLuJUfx9L+W30J9aQkivd44XdgG6dexzYcGgN6/Ai3v3kNny78FfAPk8jpi4no/ZWeQgZ72NA/px60h7nb4xhbfouBQlJf+OFiG6dexzYcypf6v/q1X339G5/iFy+e68s+PN/5NnI//BHW9c+PTRYz5RHE0EB1+Q7mdvTlRERERPSh+sqXf2n9d7FYtP676yP0ZjqL+m/j++ZSO93F8fn3y/KzMr5nr6p7vjOPn/zsEX42lcfQd/SFnWA+Chb/7heSQK6EGdfjgE1M58cxtvwYn+mLQhidXcXabFb/+HTIlbBWXkQxrS/oXanCYrjH+2YOYCfrJj2F+x0vzyxmji1XsYvpEWHbWq4kzsmj1Itcx/0TGRFurQxDt9dQRFs5meOGtX1XH9qJOnXo8jnRbvvpahsX7arlfeoY2a5b2uduOP79CHOOjs6uhqt7lxaOp912GaRpm/Vpd2214V7Q+T606wH97W9ew5/V7f//+Z9fw+gfm/8n0l3+rK5+/m3c+8cx/PzPr+HP6jH8k2PIa//eP/1t4C9/gH/1l8Dv/tM/0hcf2ejsTSRQxVJ+HGP5cZRxA2vDUf1rUhYz1y+i3uLo/OjsKjJ+qzxpuVLA8famVGERk4MR/WNPqStxYH8FY3c39UXtSU/h/kQC4bYeXqpwFdgeR8WI4loHOxlvIj2iYkQxoAdlRxG6rSVRHAIq+S3Uo1cDLjJNrJcwtlwF4kmk9GXdlk4ijiqW8qWmj6Jbaa/NmU8ST4rf9jtUp4punxOjl6Oob4/j1vyevshfV9t4EsV7N5Ho0z8/Lie9fdPx70fYc3Tj7jiW9oH4lVbaY2vH01a7DBKqzYprgnOb7bThXuDXhx1N1wN6APiT7I/xc/nfv/6P55156t+Zxz/Bj60gP/eDPM79WxHc/0n2B/jbf/it7o7Sf7+Mf/LqB/jmd3+E9e9+C3+Ga7jX0VH6LAaiQP3JAnblJ7vzdzC2bWjfM21i+rb93bA27o6j4rfKk7ZeCjje3rQ7fwdL+w39Y08x1FDuVMcI+ZLQchXhth5WFkN4gOl10ZbKSNqjROkpzDQLZsJ8x8PG3S28u9D673Sjs3JUK2xbyyWBhyVsYBPT+QfAlVZGf7KYUUeLdhZQrqHjnXNTnwC1h+H6ilbaa3ObmM5vQRmnOT65EtaUC2FsWBm5O1KdejniOdFUEpdeb2E6ZI5n19t4egr3y3bQFxm8ibV7U8dyo5oqlGSwtoe52yuoHurfOG7Hvx+tnKO78w9QQ7MAud1yba1dhhK2zepabcM9ozt96LEE9MCf4l//5RfiPz/6bfwPasrNH57Dv8n+qfXN9e9+SxvB/zGedzTA1vxxHt/87o+s//2TbBlPHF84KgPvDoHYkNYxrpc6e8LQqbUxHy7oOlmbmFNuOnbnF+SobxLF6wn0K990C/MdP87ttiVXav3p1PqC8o7KHubmwz89GZ11j6zY5XWMHMfwgVgvYSw/jjF5Maxvj9tPvo5Qp96Ock6E0cI+Hkcbl7OJjOVF4NfYX8FYG4NLLUtPIT94Xv+UAoWoz7bLNcS6j0urbfgDd4wvxf4RNn72Lfw6AHzxV/hX3yxg/ftlbCCvBPBC7gc/xr/4nY/E/9R/jE+zfyry3Kd+Gx9Zv/9P+B/M9aGOP/s0jz9xrEXx/TJ+9vv2JfiLvxQj8iKH/7v4Xbkpx7KQ2xOPyRD8EqvyuKmxv6I9UrIfvZjLrPQZYwsVjODaa/037t+a381gC2PPBuT2zJdr7e/Vt8fFjUSuhLXh86guPwCuy1GZwyqWlA7cO43HQMXzEb94pBevreDRuZvyd8rLvQHbg/WoUa7bSilpoLpdQ3z4YzzKl7ChPaYS5RXFTPkq3pnrfaMev3K88E9VcdeJlCthbRioLL/FNfN3xpYVQIi6f4VK/gADSj04l9tbs7fTpKx82OszyyWO2vIdPLkSUH7Lj3Fmwi4zszysdVl17izb+vY4pp/r5eWxj64yNb+jP+J1thu9bdn1JPajf38FZdywj1ffrqSvB4ZZ/95tzQpOHI+A/dq0zv2YVOy3+Bwhzq2Ytb8htunYR6UM9DLXjs3Z7uztNGuv3rzOub1w9aQ9ZlfPs7b2RTnuxn4VLwcTdpkjeHtOzrZpfk8/J+y6EkKfExa/snMv0+tQdTxtXL2WVFE9m0C85r+/oc7XT+ztO/phhd5HimPYw9C9Jn257/7ox62Xuzfvc0a2kxb2w1UHmmbtPtxyr2uKk/69sOWqt7VO1TMQ3C+K8tL6Ues3Hm04YF2h+1irPzFQWX6LgSt7mFb6Nrufd65HL9vAYwZc6+tEH3piL8Xa/hSjfy4fMHz02xj/wTw2/vFr/GufYP6Lv/wBPv30x/h57FtifvgfFvBN8/eAc31BzGC+/mOxPgAf/Y5I48n9II/f/UgE8Z8u/BW+APDR7+RFyk3I7e3O38FY3q9Dl2SebcN8jOl4mcv96EVNn9l4ZiByTu3NTUkU74nGMJYfx9izi7h2Vi5yPd7StmE1kggSEzeAh+Ni//oSyMj9ShUWkYkaqCgjNjj0y9fNYkY+qo0M3sTAM/M3ESQm1Bd8vLfnetSoppQ830Pt8Dwupe2T3Ryhezl4E/cLBg6MCP7BP5MndXQEa5cPMJYXZWg/GcliZiIhctnz41b51H3yBFOFRVlGUWSuA2XzN9ER7SWWKDLlARxYy2WeX3oK+UGguiz2d2m/gcjgCEZDl5UmV5Id/TjG8g+Ay3FrUWD5yRetK4a4MJgdz+78Y9SNLTkCl8WMeQx5UTf9w4soYgG3ZLtp7K94t/Mdr+/YNyyirlZQPYwiY77slSspbUutJ7vjiwzeRB4P7LLJeD9qFfmkDdnpKqO1Pm0NkO1fthFRN+eRCZVasIlp81wwtjCWt4N5q/MPOLcmy6tKfTfJyTZvJq3yiyBxfQopOTpstWOP83YyXpPv62yhjigyjpfJfNqrJ+c5J9rwDcf3fevJsf9iW5HBm7hfSCoXxBb2JT2F+xNx1OT5VEbccWMVtD03kau7tN8AjC3r/N+dv4PKtjwn/NqoZ3vX148mZefuy+p9CUz6tMHut3Ftf559rOVa+/QPsk/2PF8nVq3tL+033E+oJTv9tCH6SjUYDurLPfen1XYgND1nAvcjfD2Gb/c+y32vKW5tlatfmw/ql0PWs82vzWr9KALacEf62CSK183+5AADE/YTt9HZEcRk/262B3M9zrYij3nY4+V8S1A/ILjKNEQf6ucYA3oAf/xj/IWZefM7v4HX/1tBmyLy2xj6hx8B+AJ/+9MfAajj9RfAR0eYH/573xBN5Od/86ciKP/0Gj6Vo+vr3/0WPv30mhiR/+F/wkv9x51kPs6UgWRsOMTbzdERrA1HUX/mMWqVG0ECVTs3e30PNf07fqyAX7kb3HnhOP7YuQhgHMjgfQ9Pag2g72PnCWexbxga+ysyaNzD3MMqGlBfevTfnrcIEhM3kUANL69cReywiorVYDYxLRt4Jmrg3/6hEmjJC179tRLkpi+iHw3UnprldYA6gH6f/G07SDZQMTvD9RIqBhBxvACp3L0/f2vnte8s4Ja82I/Orip39GHLSpVEcSiK+rZ5M7WHuWevXE8agmxUqmioF47cACDbVapwFTFEkZGzMK1NJBBBpMWXrhS5EST6DDyybpS041svYcwaAVNHhJxlIwKtPXz2xl51eH5tTZQloiPWrFOTgxGgL44hv2AykHazHHBu6SM53jfq8K7v2+ZFWXlxLFeSdWXKIjMIVK28ejlrlmPU26e9ekgVriLmuAl0D15415PY/8b+ln3zr5w7UM+tkPsymkkgYjy2tr07/1gZBAnenl+AsTv/GPXogBIQZQHIsvJto+EElV2q4N2Xtd4G3W1MaK2Nu/ZnfcuRa+3fPxj+56v+tMX32hHApy/3358bbbSDEOdM0H60UI+Oa0pgu/dZ7ntNaZHP8fi3+YB+ueV69muz+sBmQBt+3ok+FiK+yIhzfjpvD+xt3JX1n57CfcdNRhaZwYj2PuQDVA+B2GXvAaegfsDkKlOgaZ/m53gDevwIT/69jOjxGi9+qC1GDOc+AoCP8LtTj/Czn8l0mI/O4RP9q6F8GxfP6Z95+H4ZP7PSaTotiWJBqez1kjXi7Xd3bbFGAfUF4i10p3YDH296AOgM8EMKFbQHsUcX/us5j87r+Vs00EB12eupgWZnAY8M5e5XD/BDcnSATaQKi1gzRwwcT0w8BJVVOom4PjuB54UggOP4kyhefqtciOy2pv7zenIRRuqCR96mPD7zBkpMvSZGVxxPF45J3RpVM//5jbSehCjO6PWtMqdBvXxg5ZKLzy92IK/bFvM650Lx3v/666BBgSBJXDoLNF77nUPtbm8TB8rsNanCRagjTEdpo0Fl57ns+Vs0EMGZ9i50nsK28di5CPDmhW+aCNDZ/qEjPPfnv7beDo5wzhxXPapauqa04ShtvhvCtuHW7WHuiXjiLm4Y1KfjWTFV7XWgbD6RhV9bkXHX2YueN4yebSSU4D7NzzEH9OH9/M+v4dNPzX8B+fEh/fo3PKajNOef/8a/s9JxuiKujgLBbkxHENhJdYIZAE6Iu+PM2SqWgvJbvcig+V0HXs8Qx+s18hG+8xQ3KfIEnkjg5XbrnUOoix+cKTJeN2QuQWWlBcPt2ngmH9/mkjjzes95DD4dUjt2P38F+DxtePm5yFXOnK1iqWOdc+uOWpbdJV6k995HkTr2Un0Z1LTzAi9bOB+aqb9utNkuxP57jooevnWkF7bCf7St/e1tPDOsVLgh5S9RHrWNBpWdf1/mc/63ybv9+PDZV0uz5cfNc3/aaAdHOGeOqx4trV5TWnTUNt8NLbXhVpkv2C+Lp8ciJVRJZdbfhZDXYc/ReJ+YIKgfCBbclv2cYEB/Dhdds9f8Kf5GnnX29Jbfxr2faH9gSo7Y536t2fD7j3D738oVxuzpKL+3+WPc+46Yf/4jAF+8qgPf/03/EfrQ2/Oj5A8D9uMka8RbVp55wUpP4VpUptz4/DGF3ac10QjN5fpvtJEC8ZhSpPr453vZUoVFXHtt5kBrOXgB1AaoPyYPIoLA87gkO8fRjHiMmpgQuZHiEbuZRyykrsQRgYGDUJ1bFjMTH+ORcrcfrlNUAtP0FK5FG6hWwt7YKMfjeqLSSllt4sCAI/fOVT5Nyg8wH6VHkBj+GAfK6Nru/GOR+6m2tfQUijlYbRMAkJvyyXHWvvNcPLKPDdtt3vV42roZTWIo3u4ohiCOHe6nYZ7EzXRk8KbjPEgVpoKfllmUJ2FWGQmdu/iIFDc919KatlDdVm5AuakX7UQtdyCJ4myzvFZvu09raPQlkFdTAz3/IJ5ODlg4fut+XB2eTPmLjtjblsctUhfR/vbWt0Su7b0BQH9a59tGm58TQWXn1ZcFn//dbeMbz7Syk08EI4M3sTabbdI/dIDytHG00Lyt+u9PO+2u/XOmnXo8uuBrikOL5QoEtfnjI/q21tpw65Io3pN17jENtB2LqU/HN1HZ1/qhJjFBUD8QLLgt+zmZWW4U9owztu9tPsIfWFepL/AXC9/C7R/CNSvNF198gY8+0mbD8eCYNUf541bO2XT+Cn9x7rfFus1ZeEJsT7zoEjTLTRLFQhRz83C+9KHlnjnenD6sovomgQSazPqgvgHt8Rv1jXXHrBBQ35xuuGZCaeyv4NbnIn9f5/dWvfnyR79hANGoyOs132B3vKnts735qKN86vtV9A+KWVzsctVenLHekNdmVDG2sPT6qjZrwRYuef5hDf834UWdvELdiCImd9/M0XPUl3xL3poJB0B9ewsYVo7HMBCLRh3H71lW8vtuzmN0l0+z5ZL5opHergJmTlFnXXL9TnJ/R6sT9fgc22qgbgCxaATAf8Z/xt/H35c/aeyrswAFlJE6q8/fvELiG83amjKjieNzWPus52KqrN8eVrF0+wUy6gwGL18j0m/e+Httfwu1+IijrfqVqfc+KrNgAYBhoB6NIua3XLbZyoVm7dXneD3bhXbMfvWkzdAQ/tzx3hfH7+Rx96v9kc/2mrFedFPblm8bFf0FXO3dg2fZmdvQ+rKg9aCTbdyr79avJQbqiCL2Rtknz2Np3g4qtTgyjn7Yq6+1y6K+vYJ3Q836cnUmL0kt2zbagfucCbkfLdRjs3b/6vMGzl/wXx58TfGKP1osV8f2WuuXm9Zz0xhAxCeh2rAjNvFaV5g+Noni7A3EoxFXv+OMxeS50Gevx7lPfmWv8Gyrzc+doD7Ub5abYwzoqZekCiUMPS25GmqqMIWY55zbMqAPumicqCxmZoFp14mdRbFgeM6Fbgb0rs7pyE6wrHIlzIB/AyGYf5sgIiI6SX4B/Qmm3FD3ibfVnS98hOD3BynSU8goeaa9xOuPAYnPB/DZBxO4ebwM6yBfBvJJ8/oQiJfCPqQ20WXyBd6mM3qdUqnCItbKStoaEdEpxRF68qQ/6gL0R8Yq52PHwEe7J8ZjntuAx7Gux6MdG6U//rKyHyeHeDxIREREp5bfCD0DeiIiIiKiHuAX0DPlhoiIiIiohzGgJyIiIiLqYQzoiYiIiIh6GAN6IiIiIqIexoCeiIiIiKiHMaAnIiIiIuphDOiJiIiIiHrYyQb0uRLWyqtYuzeFlL6MiIiIiIiaOtmAfr2Esfw4KjV9AVGnZDHDm0bqJDkQcb+Q1JcQERGdiJMN6CEujgOfL2BX/5yoIzYxnR/H2JOPkcnpy4haN3oZqOTHcWt+T19ERER0Ir7U/9Wv/err3/gUv3jxXF9Gp0WuhLXhKHBYxdJt3vwQnZwkUuk97O7onxMREXXfV778S+u/i8Wi9d8nOkKfKiyeikfXo7OrWJvN6h937tF6egr3y4sopvUFIcnUpKUnL/QlTfke22nRqTKGua4SRrWPO9vOZAqPx3beH0kU73kcY9N2LMpmRn0Skp7C/XKYNujxW5VsJ77LjypXwlrgsQmpwg1MTnSqLREREXXGCQb0WWTiNSwtV4HBkRMNjjbujmPs7qb+MUYvR1Hf7sCj9Z0F3MrfwdxRRvVyJeQvGC2Nzo/OriIT1T89XTpWxuZTDJfOtrNU4SqwPY6KEcW19zWoSycRRxVL+RI21M8D23EWM+URxPSPdxZwK7+FenQgoOx9fqsw28n0ur6kA3zbjq6zbYmIiKhTjimgz2JGG6FLFS7i4PYCdncWcCt/gEunLjhK4tLrraYBRKpQajqq1xHrpZaD3o2746gY+qenSbgybmZ0dlUJyKLIKCO5nW1nWQzhAabXRdmWkbSDuvQUZgLX7T4HTpzfPn8C1B62mtq1ien8Fur6x4BYtv0Wl3zPk6DfAkAWl16vHLmd+FovYWy7+YkS1JZGZ9/nJzZERHTaHUtAPzrrHn3bnV9QRv82MddisNp9e5ibd4/aO6SnkB88r39KoYUo4xA27o5jLD8ugzIDlbw9ktvZdub8vb3uJIrXE+hXvqnzOgdOVsA+ry/4jMIfwZHWedR66wzftpQrnfonYURE9H7r+kuxM+VVRyBjPjZPFRYxORhxfS7yd28i8WYLY88GrJFX5+N2n0f0xpZn6oy+LaGB6vIdzO2I7cVrK9YIuJ6q4vWo37XOwyqWbu9h6N5NJN5UUT2bQKJP/hYlrA0DFT2FwZSewv2JBCIwUFl+i4Ere5j+fEQeu7mf9jHXt7eA4at4t+yV/qCUjbGFCkaQgVqWXutT6+QVKvkDDCjrUMtULxvB8Dk2Zz019sOWsf/vdHY9NFDdf4XEoLOc9XryqkurzfWJ/zO3Z/1Wvowc89rn52bdmczyNf/f3Vbr2+OoXBBlXd0/j8RgxC5nLf1DPfaO1Y/V3kwNGM+B6CcR+7vWd5TjyTVpx/JYYZWxfux+7QQev7U/c7aDKGbKV/Fu+QFwvVk/oRLr6t9fQRk37DbjOLbzqJrr7TPPafmkQi8znzah1wcREVEnndhLsdP5FVQP5YVOjpymCouYjNewlBcjq0v7DcSGVzGTUwKr6AjWLh+IeeoNIDZkziOeRPHeCGJyfWPLVTTkxd7zQporYXIQqC6LbYkUFAOVvB3Mm4Gc+f1MVIzyurdt252/I0eEG2LdZjDfByAaBx6K34tg3hVhKZIoXo+jtjyOsfwBBibkqKkrDUBNS9jEgRHBmU+UxYBVNv37K6Jsnl3EtbNyUeD61MA3ikx5AAfmiHf0qpVSlCosKmUj6/XQI9cacARoZh1HBm+IdQWWccDvNM529ACIO8vZv505viaeFNwWy2FsWQH07vwdVLa3MHZ7Abt++2zmiJtt0JVjvuk6B0QwL8o6jgeirqxgXkyJaD5xiAzexP1CsrP147HP35++I45f/Y48t4BW8sxto7PKeZrfQh2tvHfgbAdj+S28HLyJ+wUDB0YE/+CfNesn3OuKAYgM3kQeD2T5RJDIqGlQESQmbohzd7mKRl9CTnUqnmbAPK+UZRt3ZbuRT4Y8+yAiIqIu63pA75ZFZjCC+hM7R3d3/gGqh0DschRzt5XgR14c66+VQANRnOkD6s/khXNnD7VDIHLOO9hIXTgPHNbwRAZZG88MAOdlPu+evT3Teglj+RI25Ewf7tFOP8q6jMd2UOcKpL2YgYWYM91vNNoUG15FJmrgQB+JzI0ggSrK5u/X9xD2b3btzpsBnTKK+vytHdABiJ2LAMaBDA738KTWAPo+dj8pkS+Pxgw7P353/o4d7AaUceDvHPR2tIe5J2o568vVduady747/1h7eVPUCRC8z61Sy/qRVddJFIeiaOxv2cH3egkVA4jEk0CH66dlodqxk/WyeXoK972eqAVIFa4idlhFxWrjm5iWNziZqIF/+4fN+gmVffNqP/HYw2dv9O8pI/Y7L/DS+lzc8N2a3xM3No6nG0RERCfv+AP69EWPvF15cT170WN0TbeJyn5DGYnTAnzN7vxj1K2RNneA72V0dhVrZTFS5xi17AoZiEZHsBZyOsT69rgMLp1GL+tRplfQ0r6NShUNZUTYGUA6xc4Fhzx+Zdzsd5b0RfSjgXd+mWJttbNNHCiz16QKFwHlpslvnztDtGNd/XX4oLyV+jkeWTHF53WgbD4xCMmzHTx/iwYaqC67237XmdNvXj6QTxuIiIhOj+MP6OXIl+co6ZsXoWbWMIP0yfIq1mRerHfeLOwbgOFVrJVXRQ5ywB9nShUWkTlbxZLnqHCXyHnmRfpQFJkQQb2XVoK/tuws4JERQWJClGXmbBVLPikG9dcN38A5qIyDfufmlXYktdnONp4ZiAyOYBRZDGHPkYvvt8+dYeDdoRiNdx374dtwAWQL9dN9SvpXwPnmR7TlOIZcqVYBdd41WcxMJPBymyk1RER0Oh1DQK+MEqenUMyJABvRETuXOT2Fa9EGqpUwF8skiveu4p3MiR9rlqKSK2Hy3GPru14j24CWsmMFxUkMxT1GCk1KysNowSt3V2Wm+eiSKN6TAbyet/z8LRpKAJMqXEVMpty488CB3ac1cUNgTo+YnsK1qMwzns22vD5dqrCIa69lHnF+PDBQ231aQ6MvgbyaM50r2dvxKeOmvzPJVKvYsH3zI55QRJEpL6KYbrOdrW+hehjFtXsDwFOtXfnssxmMAwByUx75/vo5oC0G7Cc1jmN3pw0FaaV+vPZ59/NXjnY6mkkggggSE+ofXPJrx7b+C3bdWedVOom4xxMInfnb3fnHqCOCxHX7vEpdiSMCj1SzY2IdV27AcdMsyg3iXC543EASERF1WddnuYH5cqIyW8iu+hmg5K5qL6kaW1h6fVX5nsgfhj6zBOAxu4ikz05hMrYwdtdwbW+sclH5fgN1A4hFI87cZYs6U8wK3g1p63LNWuK1j0kUZ28gHo1Y++ia8ceafaWKl4MJbSYQjbq9wyqqbxJIwM4zVmdBUddnv6gJcazLb3FNKTd7th5XwfvPQqOXvVn/js89ytjvd+b/W5zlUzcMxKLnHWXs3c6sFXiyXqZVt9lkn6026TPLiXoO/KQWxze1Nm21K+3lU+9ZoTpTP1ZbsPZZK8/9KvoH46gt38HcJ83asXtGGns2GQCHBuqIItbnVUbu34r91WbJsdpBuH7CPlfd63907qbdh/yfvwT+u79nLkV1+THOTAR83zBQj0YRM/f1adI5I5AsK/8Zd4iIiNrjN8vNsQT0nZVEcTaJJ3f1AC+JYiHqntc8V8IMSu4La24KxedHmRv7w5MqlDD0tOQqs1RhCjHHHN10Elg/RERE7ze/gP4YUm46K1W4gYQ5FaPj8xHgqT4ymsWMx4glkMXM5ReuwKdrciWslVdxP/SUfd0kZmkJ8/Ktg98f0UpPIaPkmr/vUoVFrJXVFJRTgvVDRET0werNEXp97viAtAI9hUHQH8lTGM60D8k3HYaOG+uHiIjo/eY3Qt+DAT0RERER0YfHL6DvuZQbIiIiIiKyMaAnIiIiIuphDOiJiIiIiHoYA3oiIiIioh7GgJ6IiIiIqIcxoCciIiIi6mEM6ImIiIiIehgDeiIiIiKiHsaAnoiIiIiohzGgJyIiIiLqYQzoiYiIiIh6GAN6IiIiIqIexoCeiIiIiKiHMaAnIiIiIuphDOiJiIiIiHoYA3oiIiIioh7GgJ7ovZdE8d4q1sqrmMnpy4iIiKjXMaAneu/tYe72OMbyWzjQFxEREVHPY0BP9IEYnR0A1vVPiYiIqNcxoCf6ICRRr5SwoX9MREREPe9L/V/92q++/o1P8YsXz/VlHZH7wY/xL37nI+3TOv7s0zz+RPv0VMmVsDYc1T+1NPZXcGt+T/+4NbkS1oaBSt4MtJIo3ruJeE1fdxYz5RHEYCjf7bzR2VVkog1Ul+9gbkdfejSdWfcRyyE9hfsTCUSsD466P90m2kPizRbG7m7qC1twxHLzJNbZ34nzIFCzMmi2PCTzfDeOuB5NqrCIyXgNS7cXsKsvJCIiatFXvvxL67+LxaL1310foV//7rfw6ac/xs/ND+o/xqcnEsz/Ee794Nv6h/7WSxjLr6B6KIL3sfy49W9pv4HI4E2slUsYdfwoi5my+vJhFjOzWcc3LJ43DCLXWQ+QUoWrwPY4KkYU1wpJx7JO2rg7jqV9IH6l89voxLqPXA47C7iVH0fFAHBYxVK+B4L5Pv3z1h253FzMG4Rua1YGzZaHlURxCKjkt1CPXkUxrS9vT6qwiMlB+/aRiIioW7oe0Ou+eFXXPzoW39v8Fv6R/mGbdufvYGzbABBFRg3YcwPA9jjGlqvoH17FWvkq3lV8RvvWS3IdzWQxhAeYXhdBcRlJ7Sais3bnH6AG/UajRekpzHgEjq2sO1UoaYFVh8vhzYtjHDENuLHztYe52+KG8mg6V26js+YN7Cam81vo/pncrAyaLQ8plwQelrCBTUznHwBXWq0rb7vzd7C039A/JiIi6rhjD+hPQu4HP8YfdHo4cb0kRnrVEb31EqbX7ZHgsY6MAG9iThmx351f6FDKhJ89zM373ISEkkTxegL9+sdA+HWnp5AfPK99eNzl0Dmjs8cxmu2nQ+WWKyET7l6s96wvKOdpyDZKRER0inQ9h174I2z87Fv4dQBf/OUP8M3v/gj4fhk/+30Z5tT/Cn9x7rfxux8BwBf4i4Vv4fYP7d8AX+DndeDXYzIX/4u/wr/6ZgHrynpFXv6PcfEn33Ws58nv6Tn8cv2Yx0+mfhsfWdtTvmLxy2kXzEfq9e0tYFgEbWZuvcgZB2BsoYIRXHvtsQ5XDr1IZcD2uLgxUD4zA8L69jimYabrmDng9nfqjt8Kjkf/h1WRz2vlk4t1PLniTA9wviOgpzb45GK7ctT/Cw5/+XfR9/dEOYzd3bT35bCKSi2OzLnHjpxlV5qCub9e5bAORx09OndTBp3BufGjs6vIQMmVzpWwNnwe1eUHwHV5nNZ2lXpafotr5vHpx2OWiaNcH+PMhDOY96ofuI7bLF8lP/zZgJWiJdah1Im+L8q+W+1Qsrdv58CXcUNu27vc9HWI7aH57x1pZVqb0VLO/N9J0XLk1d8ZWxi7awSUkd1mvM5LZ/1774so01eo5A8wYLa/wDx7pV7MNq7k0Otl2Up9uM4NwP4ORLuDbzkSEdH74MRy6H39cR5/Zj6zj/0G8L9dk///Ef7R730bwJ9idOGv8AXEZ/2vyvj002v4V3/5BfDRb+NfbP6R9h0A+BFu/2/q/wP46SP8hfzgi7/8AT791C94b93u568AAP0XDFcKwsZdmasNYOOZgci5ZsObXnnJWcyUB3Bg5u8vV9E/vIjicz1dJzgFYnf+DsaWq2jAQMUMUncWcGt7C5W8CAbyg0B1WX1HYESmV9gBs3iHYAXVwygyrvcHzCcTYj/Eewe3cOemMyVCTUOoP62hcfYiUvZiJZ2pIfbHCuY9yiGdxUxZBE+RwZsYeGbuXwSJCY/982IFcxEkJm4AD8X6G30JZHIiiBLLo8hcB8r5cbF/0RHcLyTdaRU7C7i1XIX4ZBPT8j0MGFsYywcE8/EalvJirvi6nsoVHcHa5QOMyfz/2NAUUh7pJq59yZWQiRqoyHKzf2u3tcjgTeTxwC63jDvdRLz/0JBB+bgjmPX9fa5k7bNoU+eRuTcl6tq6kZX1uW0gMngT9z3StHSjl6P2Oy1qUO1ZRu7zQj0vgeB9sQPoKDJm+9s2nE/lNKOz8uYiP46xh8BAXFl4lPrIlTCpnKPiGAxx/u7YTwUZzBMRfZhOLqBX1R85guyPzusJCl/gb3/6IwDA+k//gwjYY7+J72nf8rL+Q58w94cFfPPTa0cK8FMXRFrIy88DLqLREawNR1F/5jeiZ3IHH6nCVcQQRUa+aLs2kUAEkfZeLN1ZwCMjigHlL4WOAmLEdGcBt2RgMDq76hwFzI0g0WfgkRUo7GHuYRUNONfVsr4EJicSQG2vaS67fznYN1KN/RUZLLe4f9a7DMpo6M4LvJSL7SBZuRmS6VaReNJxM9KeLDKDQPWhOQvKJqb1YFUZEa6/biEne72EMWukXx0ZttuaPRq9h8/eOH8ehvfvkygORUXbl3U2ORgB+uIYSotljf0te7Q+VHleRPHeKgae+QStbZVR8L5ArXvz6cLzt/JmzUN6CteiBipm3e0s4OCNci4doT5SF84DhzU8kaP1G88MAOdxyefGgoiIPiynI6DvUbFz4rH4u6BspYCR2VDk79V/ngFNCBvPDDkiKIKPS3CmuqyVRcCkjv6bNy0OMuDtv9DGjYXpsIqlVo6llXJQAvJuCR80NpG+6PO+QWeMzq5irSyePBz3C5r1bWd9iXdKojjjMStN/XUD6PvY/12DaAKJPiB22f0EoX1t7ouP1JW4km4m6O2k3frYnX+MunxqBI8An4iIPmwM6NtlviRoPHblHHeUlpJyJOsHVlAwegV4Yt5k5EoyT9h94yHSirxHuwOfTHRaK+WQvoj+ZjdaRxQ7F+nMTDk7L/ASEZz5RF9wdKnCIjJnT256Tu8bPgPvDn1G4w/f+qaNwdgSqVAy1akz2twXH+Jc8R81P1p9bKKy30Bs2Hzi8cp+YkRERB+8Yw/o3ek0YXyEczIXNfd7v4GPAKD+77S57M/h4ncAxM+J5ZYf4cVr+/++t1kWqTrfmcdPfvYIP/vZj3HvO8rXQ7Dyqg+rWLJSI2RwYObKp6dwLSpTbgKnLHQHAGYgZI7KTaq/T0+hmDMf/duBoEhLAWLD5hz4XmRQMLSIAeipLvZ+jF5W8v3Xt1A9BGLDdk56qnAVscMqKp5PHUQ5AAByUyimZeqAFZBnkRmMiJQbM6dap6Q1jBamgKBykNSgbDSTQKTjN1rKTU16CteiDVTllKR6IDeaESlBiYlF+/jl79R9FjZxYDjLF0iiOOtTNg7BZfsPAGWkOYmhuD5+HJ75vgiQRLEQ1J4h0p6eiFx0tS2mClMYlcvQl0DeCszFftefNAlQdxZwa9tAZPCGbw67W9B5GW1/X7ysH6COCBLXzbrrYH3kSpg891h52uHxUjoREX2wuj7Lje9fiv1z4A/MWW4A/Lxex6/HlP//82sYrdkz0XzxxUf4yFxN/cf4NPun1ne/t/nInpbyiy/wxUcfiaDenA1HmVHn539+DaN/LAP6oFluPP/wk81rthJ9NpnqmwQS6mwqKsf63TOiWLm0+swxPjOYNPareDmY0GbI8ZCewv2JOGqO2Uy0GWQMA7FoVMkr12a5UWeA8eCaSUSb7aS6fx6JwL+e6TFrj285yNlBDAOIRsVyv/3T14EGqn/zColvBNeDmHXkFepGFDH5VWf9O8unvl9F/6Bdxl6zz+jcs5+s4N2QUubGFpZeX3XPhOM4Jq1sHcsaqBtALBoB8J/xn/H38fflmhr76gxBPuUXMHuP3++hzcrimMlGO7+8zie9XGE4Z7IBXuHl4Xn0NysjdVte56XPvrhmHlJnOfLb527Vx0Mg72i7knmOyXVzlhsioveb3yw3XQ/oj6RZ0E2kTPfXrUDGnrqQo6J0QnIlzED+nQvH51MoPlfn0ScioveZX0B/7Ck31I4sZsqrTVJ3PgQsB+p94gX0xRbShrKY8XxamMXM5RcM5omI6DSP0Kt/NArKH5xyfIk+aM5UIf8/TtQ+V9oFR+npJHimALI9EhF9aPxG6E9xQE9ERERERCa/gJ4pN0REREREPYwBPRERERFRD2NAT0RERETUwxjQExERERH1MAb0REREREQ9jAE9EREREVEPY0BPRERERNTDGNATEREREfUwBvRERERERD2MAT0RERERUQ9jQE9ERERE1MMY0BMRERER9TAG9EREREREPYwBPRERERFRD2NAT0RERETUwxjQExERERH1MAb0REREREQ9jAE9EREREVEPY0BPRERERNTDvtT/1a/96uvf+BS/ePFcX0ZERPR+yJWwNhzVP0VjfwW35vf0j4mITqWvfPmX1n8Xi0XrvzlCT0RE773RC2+xlB/HmPVvBdXDBmpPGcwTUe9jQE9ERO+5JOpPF7CrfpROIo4anuyoHxIR9SYG9B2RRPHeKtbKJYzqi6hlo7OrWCsvopjWlxARtWMPu1rgnroSB2p7ziCfiKhHMaDviD3M3R7H2PJbDBSS+kJqSRYD2MJY/g7mOHJGRF2RxFAcTLchovcGA/pO2lnANF+uOpq0gcrdTf1TIqIOiuIM022I6D1yCgJ6M13F759PGkuuhLXyKu4f+4h4FjPlVczktI/l/qzNZrUFnSDLKMy601O4f6T9aGFbXnIl/zprKoni9ZuY7Il0G7PddnZfR2ePUPa9KNR5fMQ22RK5rXtTSCmf9ka9iL7J7DtdfZSVztZGu82VWv9N18jj9KwPpQy0OnTIDaCf6TZE9B45BQG9TFfZNgAYqDhmIdhCHVFkvC746yWMLVeBeNK/0+64LGbKI4jpHyOJ4hBQyW+hHr3a4YteEsV7N5Ho0z/3lroSR8TYwlhbo9ytbcvTeglj+RI29M/DyI0gXlvB0j6QyHhdrE+RLuzr6OwqMu5Z9d5vTc/jDrTJVqSTiKOKpdvOFyg37o63eU4dlySK9wZwIPvOpf0GYsPOoD5VWETmbFXM9LJcQ3wiZIDuM93jiUhP4b5nHwxZBiPo318RZVCLY9InqB+9fJ7pNkT0XjkFAX2QTUznV1A9BCKDN9wXn50FlGvw6dw7LFfCmnIhiQ0rI0S5JPCwhA1sYjr/ALjSmQBP2MPcbVEGYcRQw1LbgUdr2+qsJIoXDnBrfg+783cw9uyiu75Pje7s68bdcVQM/dMPQOB5fLxtMnUFeKQF88dGPl3zGllvyuqDhN35B6geArHLZl+URWYQqD6Ux7azgHLYm9H1khxw6YCjjvTvLOBW3uc8yY0ggSrKMu1xd/4Bqkgg4yrPLAbOMt2GiN4vpzygh7igP6yigYjnxWd3fqG90eBWrZeUpwZAfVsZsVtfUF7g3MPcfLsB9dFtzJ9QMHJkWrk5yvS06aV97Q3Hdh43cfz7oaSIXAfK+XFMr+vfCcHVBvfw2Rvlf3MDiOEVPlO+s/v5KyA60GZ6XAvMNMDyKtYuH3TthffRy1HgzQul/xNlYN/USEy3IaL30On5S7G5EtaGgYpnuoZMdTm0H4WnCouYHIxY36hv2xdCsewVKvkDDJij6o40FJ/UGb9UlfQU7k8kEAHQ2K/i5WACsLanr8tAJV9C3do/8f8b1joaqC77XdC09AJrf+Tnb7Yw9mzAevwtjtnevvkXD63UDWMLFYzg2usV3HqatI4BAKCUpVPQtsQ39NQQV9nHaz7rVurN2MLS6wEMPS3JstBTK2S5OX5tEsfcv7+CMm7IcnaWq94+hAaqf/MKiW9Ele/b5VffHsfBZeXYzPJ31Z1zX+2/NNm87NyU9iPrKwP19177uQUMX8U7j30R+2ygeO8mzjwZR+VCJ8+F5uVucpS/2db0coR9Xjm+p6xHsMu1ghGrfoLLVXKki5htylnn0+t6e1HO4XOPrfKM1/z+omj4chHUOvNo501TXILWbRLbOPNEOT79vExP4f5EHLWm6zL36Tyq2zXEh2Wd+dYXnO3K43t6H+Li8RvV6OyqOE+sNiqOV68jr+MenV3EpUqIYyYiOoV6/C/FGnh3CKDvY8TUTtojX9S+MEeRKcuc0m0DsHLbRZ5lzNgSI+7LVTRkUOYOYNSLnthWGXFH8DM6q6xL5vxfKySxO38HS/sN+4s7C7glt+XNviCNWfs84nz8Hh2RI1zikXNsaAopbGJaPjUwqakbG88MRM59iuL1BCBzS8eWq2j0eT2KVnhuS1zYM1H7XQd1mXcQrUhPIW/W27MBTA6elwu0Y8+voHoYRcbz5Vo7UIgM3kQeD+T3lSc4uRImB4GqrDNRFgYq+TuY+1/09AFn+W3cVd7nMNvDzgIeGfL3O0kU790AHtrvebwcvImZnBKk+ZWdi2iLZs7v2LOLuHZWLnKlOaj7uYkDI4Izn3iU29kRrM1G8aTWwK8llzp4LoQod8Xu/B25PgMVM5jaWcCt7S27HNtokwPPlHY3HCJ1Y70kz8sGqstm4LyJ6eUtVJa1YNfqT84jUy4h9rSGxtkB/HFgDn9r5SJGq9X243HTaj0N9PsXIhiV7wJUmt3wtCSCxJB4imDW16TXi6m5EtbM9pYfx5hHYL5xVz8m7Z/Hbzpl426I8iMi6jE9EtBHcaYPwOFb1JFFZjCC+hO7w1fzRe1AWhn5ev5WCaTFuurPzGBtD7VDIHLOe7hoNJNAxHhsXQB25x+7gmdrFNdrpDMsLf/TvKg7RiCVUdP6a/9bA0t0BGvDUdSf/a+Yuz0uRq5yJaypo6J+/LZlvfSaRPGec5TNdRPjxQza1kt2YJIbQaLPwCNrZM1Ms4piwBXg2YGtPTLuTC9IXTgPHNo5shvPDADncalZ8Gda30L1UNyYCVkM4EC0pdwIEn0RJCbM2UJEnccuR+1cb7+y07nqfA81/TseYsOryEQNHMCn3KIjmBwE/nZjsoPnQvNyd9lZwCPDWYejgAxgxcvwrbZJ83zYuLuFOiKIXwmaHce0ico+HN9NfQLUdyBzy736kygyEwmgtoXvB+bwt1guOwu4lX8AXG9jppkWjGbiqJn58n4++bh5mTs0tBz8hnfKznoJY/kDDATNUnZMYudaO0Iiol7V/YDenM7R/Oc1otNM+iL6AZEfaf63g7yAnr3oMxKq2kRlv6GMmmpBjUMSl84Cjddeb2CZsiIH9jpQli/wtiN1wRyt7iA58jq9ruSxXj6w3gNol5j6TowyNg3gVTsLeGTIF4qVtuB57Dsv8BJA/4UwAZvT7vxj1JXRXj3Ab24Pc08MRAZHMAogVRjAu4rSPg7lTCHqP9eIdnOjl/XAOSAQVNS3xzGWL6EeUG717TCjkK2cC+3ZeGbY609P4RKUdR+pTcqndiHtPq0Bsj6BLIYuGCIwDepPjC2fFJujkjN7WYG9FvjqfabrX/CNQKqwiIFnzvrf/fyV9YTTyZlX34rdz1/pHyk2MZ0fVwJ75zSS9vSZPv98ZqfxJ+rM82bUkVdPRPR+6n5Arz8+bjnwEY/mI2igWtm0AhbXi04I33GbAd9keRVrMvc1KBfX8yIBOFMmjviI2P+C2wlZzEwk8FJ9kbdN9tR3YQJGN/NR+9J+QzxBmM3KwMBrNB54+Xk7AZUMVOWNw+TgKzvtI6z1A5k+lcXQubfOm4EO1VP9deNI6woqt7A3Qq2eCy1bP7BurkavAE+sdR+1TYqbj9DtY2cPNfnUJVW4iM/MQD2oPwk1QHAUZmDvDHxncISUm1wJeTxw1+H6AeraU6rRy1HAkE+e2iBulN82uREzA/txjD0E8vKG5FJFPybtX6vnq/kkzlFnWQxEO3uDSkR0WnU/oD+SLGbKIn/VHnEUwZojvzw9hWtRGfA3lUTx3lW8k/nVY3n52N/THp7UtG3lBkSKxfAq7hfigBrwp5OIK7m2IuCyL6KjmQQiiCDhNf+zDCAz6hOM9BRm9Pn3PYnRSns/pnAtKlNulPVZQZ48hrZZQWgSQ3GPR9p+QWp6Cvfl/jjSc9a3RMrUsD1KmSpcReywzRzgXEm8zGgFCFqe8vO3aCCCM5+I/00Vrlp1ar+zINpZZHAEZ54pwYVMx8k4RhCzKIaqJ6fdpzU01DrX663ZfnqUm6jbRsg5tls5F9plPgVYxADcM4u01CaVYG10VrwkH759mE9dbiCPF0p78OhPZCDY0GZC8b+x7wQ78HUF42HlSli7LKZTNaUKJdnXiLQjK6+/pT7TZLdFpKeQ11KVmpJTTgbekIQinpy6rG85pqk8Uh9CRNRjTsEsN+qMDx58ZjtwvoBpz/rgmq1i+S2uKfm5rplMLP4zRzjWaRioR6Pol/myztk8DNQRRazPzKMWs2OYx1bfr6J/MGhWCX3GEQOV/BYuabOYLL2+6j0jhzKrSPVNAgllFgjHrBLyGGKOvF+468JrW47ybKBuALFoBICBv94/j9/S9ssRSKenMHM9jlif13e0bfvUu15Gjf0VPDp30z62wyqWHgJ5r5xsJbddLQ/3zEWmLGbKAzjQj+MI9eQaDVVnNHHVm7NMvPdTP3/s7XT2XAhR7p71JW/kPGZTCdcmTe62aY3sm2UYtA+AdQzuetbLSp1BJ2C7wNHKpYP0/bdo27fLXKvjMGXomH3Hq40cA2XGMUE/r4Jn1/En69njj4oREZ0mfrPcnIKA/rglUZxN4sldvdNOoliInugc8tQhuRJmUHIFbchNofhcn687SBYzs8B0WykhveD9OhdShSnEjn0e+fcLy5CI6HTzC+hPecpN56UKN5DweFybKowAT3srgCEvWcx4zuGdxczlFy0E83C/DPueeW/OBflybR57DETbxTIkIuppH+YIvUeKj/djfupJnn+YR38070P57fvfJnguEBER9RK/EfoPMKAnIiIiIuo9fgH9B5dyQ0RERET0PmFAT0RERETUwxjQExERERH1MAb0REREREQ9jAE9EREREVEPY0BPRERERNTDGNATEREREfUwBvRERERERD2MAT0RERERUQ9jQE9ERERE1MMY0BMRERER9TAG9EREREREPYwBPRERERFRD2NAT0RERETUwxjQExERERH1MAb0REREREQ9jAE9EREREVEPY0BPRERERNTDGNATEREREfUwBvREREREdMKymCmvYq28ivuFpL6QmmBAT0REREQnJlVYxFp5BP37KxjLj+PW/J7+FWqCAT0RERERnYhUYRGTg0B1mYH8UTCgJw9JFO+tYq1cwqi+6AMgRgqU409PYYaP/4hOldHZVayVF1FM60uITgN3+sjobCevqe/JdTo9hfxgBI39B5jb0RdSKxjQk1s6iTO1FYzlS9jQl733ssice4yx/DiW9s8jU17F2sTHOOCoAdEpksUAtjCWv8MggE6lVGEA75bHMZbfwsvBm1grr+La663OXVPfk+t06kocERio4YYcSGP+fLu+1P/Vr/3q69/4FL948VxfRh+qdBKpnT3s6p8TEZ0G7KPoQ/denANJFO/dRAIN1GsPMD2/B+RKWBuOorG/wvQbH1/58i+t/y4Wi9Z/n4oRejvFwe/f+/FYNVVYxNq9KaSsT072kdno7CrWZrPap1nMTNzEZEf3STx67KW7brNNuvY5PYX7rbRHj++fXKpA+Howj38mpy/R5Eoh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)**

**![Picture 5](data:image/png;base64,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IjgBAABYIjgBAABYWvPduq1fmgvDJXXmSqvi7v8y4606NmisEiWR0kB3g2Lm8uyo2o/abqRy69Y9q0eP/mguXrUoDwAAqrNu3bP6/Mka2xanpM5c2amZtla1t7Wqfyqn+IE+dZqrRWjeI024r80/xrJSZmbhQhMAAMB8swtOiTsaazusIfe/k71XlVGtNieM9aK8d817rSOpHXUZkZsAAMByYhec0mlN+v+f2KLa7FWdTvsXRptMGysmdyqe/cAIUwAAAEubXXDyS6Q00CVdnMPYpM4dcbrpAADAslNRcGruGdZId4NiNQ3qvmI/xikooc0b6KYDAADLT0XBabK3wxscLsW1v8d2kJNPYp+2PaSbDgAALD8VBae8yd4LujFrLrXTvKde92luAgAAy1BVwUlK6+5D6f49y9HhnoT2br9PNx0AAFiWqgtOiZT2b5jWWKUBiG46AACwjNkFp2SfRq6MFh5d0sWuk8FbFFigmw4AACxnFfzkyvLDT4wEUR4AAFSnwp9cAQAAAMEJAADAEsEJAADAEsEJAADAEsEJAADAEsEJAADAEsEJAADAEsEJAADAEsEJAADAEsEJAADAEsEJAADAEsEJAADAEsEJAADAEsEJAADAEsEJAADAEsEJAADAEsEJAADAEsEJAADAEsEJAADAEsEJAADAEsEJAADAEsEJAADAEsEJAADAEsEJAADAEsEJAADAEsEJAADAEsEJAADAEsEJAADAEsEJAADAEsEJAADAEsEJAADAEsEJAADAEsEJAADAEsEJAADAEsEJAADAEsEJAADAEsEJAADAEsEJAADAEsEJAADAEsEJAADAEsEJAADAEsEJAADA0pqdP2j40lwIAACAoM+frNGa+j9pJDgBAABYoKsOAADAEsEJAADA0v8HEzJBBNHyXYYAAAAASUVORK5CYII=)**

# include &lt;stdio.h&gt;

int main() {

 int n;

 long long b;

 scanf("%d%lld", &n, &b);

 int a\[20\];

 int c\[20\];

 for (int i = 0; i < n; i++) {

 scanf("%d%d", &a\[i\], &c\[i\]);

 }

 long long soCach = 1;

 for (int i = 0; i < n; i++) {

 soCach = soCach \* 2;

 }

 long long giaTriLonNhat = 0;

 int ketQua\[20\];

 // Duy?t t?t c? các cách ch?n ?? v?t

 for (long long x = 0; x < soCach; x++) {

 long long tongTrongLuong = 0;

 long long tongGiaTri = 0;

 int chon\[20\];

 // Xét t?ng ?? v?t

 for (int i = 0; i < n; i++) {

 if ((x >> i) & 1) {

 chon\[i\] = 1;

 tongTrongLuong += a\[i\];

 tongGiaTri += c\[i\];

 } else {

 chon\[i\] = 0;

 }

 }

 // N?u không v??t quá tr?ng l??ng c?a túi

 if (tongTrongLuong <= b) {

 if (tongGiaTri > giaTriLonNhat) {

 giaTriLonNhat = tongGiaTri;

 for (int i = 0; i < n; i++) {

 ketQua\[i\] = chon\[i\];

 }

 }

 }

 }

 printf("%lld\\n", giaTriLonNhat);

 for (int i = 0; i < n; i++) {

 printf("%d ", ketQua\[i\]);

 }

 return 0;

}