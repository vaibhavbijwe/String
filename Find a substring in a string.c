#include <stdio.h>
#include <string.h>

int main() {
    char mainString[] = "This is a sample string.";
    char subString[] = "sample";

    char *result = strstr(mainString, subString);

    if (result != NULL) {
        printf("Substring found at index: %ld\n", result - mainString);
    } else {
        printf("Substring not found.\n");
    }

    return 0;
}
