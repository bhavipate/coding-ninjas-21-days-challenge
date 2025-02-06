int countDigits(int n) {
    int t = 0;
    if (n == 0) return 1;

    while (n > 0) {
        n = n / 10;
        ++t;
    }
    return t;
}
