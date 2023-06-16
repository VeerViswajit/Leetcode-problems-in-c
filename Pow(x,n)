double myPow(double x, int n){
     double result = 1.0;
    long long p = n;
    if (p < 0) {
        x = 1.0 / x;
        p = -p;
    }
    while (p) {
        if (p & 1) {
            result *= x;
        }
        x *= x;
        p >>= 1;
    }
    return result;
}
