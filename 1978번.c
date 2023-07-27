#include <stdio.h>

int is_prime(int num) {
    if (num < 2)
        return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int N;
    scanf("%d", &N);

    int prime_count = 0;
    for (int i = 0; i < N; i++) {
        int num;
        scanf("%d", &num);
        
        if (is_prime(num)) {
            prime_count++;
        }
    }

    printf("%d\n", prime_count);

    return 0;
}



