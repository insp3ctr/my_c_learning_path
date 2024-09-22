#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <inttypes.h>
#include <math.h>

int main() {
    // Need for Calc
    uint64_t value = 2; // Startwert
    bool is_prime;

    // Start exposing prime decimals
    while (true) {
        is_prime = true;
        
        for (uint64_t i = 2; i <= sqrt(value); i++) {
            if (value % i == 0) {
                is_prime = false;
                break;
            }
        }

        if (is_prime) {
            printf("Found Prime: %" PRIu64 "\n", value);
        }

        value++;
    }

    return 0;
}
