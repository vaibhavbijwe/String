#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "Hello";
    char str2[] = "World";

    printf("Length of str1: %lu\n", strlen(str1));

    strcat(str1, str2);
    printf("Concatenated string: %s\n", str1);

    int compareResult = strcmp(str1, str2);
    if (compareResult == 0) {
        printf("str1 and str2 are equal.\n");
    } else if (compareResult < 0) {
        printf("str1 is smaller than str2.\n");
    } else {
        printf("str1 is larger than str2.\n");
    }

    char str3[50];
    strcpy(str3, str1);
    printf("Copied string: %s\n", str3);

 
   char *ptr = strchr(str3, 'W');
    if (ptr != NULL) {
        printf("Found 'W' at position: %ld\n", ptr - str3);
    } else {
        printf("'W' not found in str3.\n");
    }

    return 0;
}
