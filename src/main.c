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
    size_t inputSize = 256;
    char *input = malloc(inputSize * sizeof(char));
    memset(input, 0, inputSize);
    printf("Input: ");
    size_t maxReadSize = inputSize - 1;
    getline(&input, &maxReadSize, stdin);
    return input;
}

void doOutro() {
    puts("Thanks for using rypto.");
}
