/*
    Computes a^b modulo m
*/
const int MOD = 1e9 + 7;
template <typename T>
T power(T a, T b, int m = MOD) {
    a %= m;
    T res = (a != 0);
    while (b > 0)
    {
        if (b & 1)
            res = 1ll * res * a % m;
        a = 1ll * a * a % m;
        b >>= 1;
    }
    return res;
}
