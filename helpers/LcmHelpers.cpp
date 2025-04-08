#include "LcmHelpers.h"

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) { return (a * b) / gcd(a, b); }

int lcm(int a, int b, int c) { return lcm(lcm(a, b), c); }