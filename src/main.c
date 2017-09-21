#include "main.h"

int main(int argc, char **argv) {
    doIntro();
    char *input = getInput();
    printf("You entered: --{%s}--\n", input);
    free(input);
    doOutro();
    return 0;
}

void doIntro() {
    puts("Welcome to rypto.");
}

char *getInput() {
    size_t n = 0;
    char *input = NULL;
    printf("n = %lu\n", n);
    printf("Input: ");
    getline(&input, &n, stdin);
    printf("n = %lu\n", n);
    return input;
}

void doOutro() {
    puts("Thanks for using rypto.");
}
