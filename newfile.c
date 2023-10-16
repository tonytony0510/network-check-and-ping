#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int main() {
    while (1) {
        if (system("ping -c 1 8.8.8.8") == 0) {
            puts("Ping successful.");
        }
    }
    return 0;
}