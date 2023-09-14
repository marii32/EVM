#include <stdio.h>
#include <math.h>

double pi(int n) {

    double ch = 0;

    for (int i = 0; i < n; i++) {
        ch += 4 * ((pow(-1, i)) / (2 * i + 1));
    }
    return ch;
}

int main() {

    int n = 200;
    printf("%lf\n", pi(n));
    return 0;
}