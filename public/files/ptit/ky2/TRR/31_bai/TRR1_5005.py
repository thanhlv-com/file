import sys

def main():
    # ??c toàn b? token t? stdin ?? tránh l?i do ??nh d?ng xu?ng dòng
    input_data = sys.stdin.read().split()
    if not input_data:
        return

    n = int(input_data[0])
    m = int(input_data[1])
    p = int(input_data[2])

    # Tính s? l??ng s? x trong [1, n] chia m d? p
    if p == 0:
        count_p = n // m
    else:
        if n >= p:
            count_p = 1 + (n - p) // m
        else:
            count_p = 0

    # t = count_p + 1
    # N?u count_p == n (t?t c? các s? t? 1..n ??u d? p) -> không ch?n ???c s? khác p
    if count_p == n:
        print(0) # Ho?c print(-1) n?u h? th?ng quy ??c -1
    else:
        print(count_p + 1)

if __name__ == '__main__':
    main()