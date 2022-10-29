# Binary Exponentiation

Binary exponentiation (also known as exponentiation by squaring) is a trick which allows to calculate using only multiplications (instead of multiplications required by the naive approach).

## Iterative Algorithm:

```cpp
long long binpow(long long a, long long b) {
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}
```

## Applications:

### Effective computation of large exponents modulo a number

Problem: Compute $x^n\: mod\; m$ This is a very common operation. For instance it is used in computing the modular multiplicative inverse.

Solution: Since we know that the module operator doesn't interfere with multiplications $a.b\; =\; (a\;mod\;m).(b\;mod\;m).(mod\;m)$ we can directly use the same code, and just replace every multiplication with a modular multiplication

```cpp
long long binpow(long long a, long long b, long long m) {
    a %= m;
    long long res = 1;
    while (b > 0) {
        if (b & 1) //is b odd?
            res = res * a % m;
        a = a * a % m;
        b >>= 1; //divide b by 2
    }
    return res;
}

```

### Effective computation of Fibonacci numbers

Problem: Compute $n$-th Fibonacci number $F_n$.
