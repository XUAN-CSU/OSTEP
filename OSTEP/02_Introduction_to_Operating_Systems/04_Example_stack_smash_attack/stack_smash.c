// stack_smash.c
#include <stdio.h>
#include <string.h>

void win() {
    printf("🎉 Exploit successful! Code execution achieved!\n");
    while(1) {
        printf("now attacking!\n");
    }
}


void vulnerable_function(char *input) {
    char buffer[64];
    strcpy(buffer, input);  // ❗ vulnerable, no bounds checking
}

int main() {
    char input[200];
    FILE *f = fopen("input.txt", "rb");
    if (!f) {
        perror("Failed to open the file");
        return 1;
    }

    size_t n = fread(input, 1, sizeof(input), f);
    if (n < sizeof(input)) {
        input[n] = '\0';
    }
    fclose(f);

    vulnerable_function(input);
    printf("Goodbye!\n");
    return 0;
}

