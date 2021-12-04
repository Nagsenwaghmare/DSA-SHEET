
#include <bits/stdc++.h>
using namespace std;


long long modPow(long long x, long long y, int m = 1000000007)
{
    if (y == 0)
        return 1;
    auto p = modPow(x, y / 2, m);
    return p * p * (y % 2 ? x : 1) % m;
}
int countGoodNumbers(long long n) {
    return modPow(5, (n + 1) / 2) * modPow(4, n / 2) % 1000000007;
}  