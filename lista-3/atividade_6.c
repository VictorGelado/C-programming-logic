#include <stdio.h>
#include <math.h>

int main() {
    int n;
    int k;
    double sum = 0.0;

    if (scanf("%d", &n) != 1 || n <= 1) {
        printf("Numero invalido!");
        return 1;
    }

    for (k = 1; k <= n; k++) {
        sum += 1.0 / k;
    }

    printf("%.6lf\n", sum);

    return 0;
}
