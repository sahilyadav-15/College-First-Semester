#include <stdio.h>

// Generate a large number of functions using macros
#define REPEAT_MACRO(x) x x x x x x x x x x
#define EXPAND_MACRO(x) REPEAT_MACRO(REPEAT_MACRO(x))
#define GENERATE_FUNCTIONS REPEAT_MACRO(EXPAND_MACRO(void func_##__COUNTER__() {}))

GENERATE_FUNCTIONS // Expands to thousands of functions

int main() {
    printf("This program takes time to compile!\n");
    return 0;
}

