#include <stdio.h>
#include <string.h>

int main() {
    char source[] = "Hello, World!";
    char destination[20];

    printf("Length of source: %zu\n", strlen(source));

    strcpy(destination, source);
    printf("Copied string: %s\n", destination);

    strcat(destination, " Welcome!");
    printf("Concatenated string: %s\n", destination);

    int compareResult = strcmp(source, destination);
    if (compareResult == 0) {
        printf("Strings are equal.\n");
    } else if (compareResult < 0) {
        printf("source is less than destination.\n");
    } else {
        printf("source is greater than destination.\n");
    }

    char *foundChar = strchr(source, 'o');
    if (foundChar != NULL) {
        printf("Found character 'o' at index: %ld\n", foundChar - source);
    } else {
        printf("Character not found.\n");
    }

    char *foundSubStr = strstr(source, "World");
    if (foundSubStr != NULL) {
        printf("Found substring 'World' at index: %ld\n", foundSubStr - source);
    } else {
        printf("Substring not found.\n");
    }

    char partialCopy[10];
    strncpy(partialCopy, source, 5);
    partialCopy[5] = '\0';  // Null-terminate the string
    printf("Partial copy: %s\n", partialCopy);

    char tokenizeString[] = "apple,banana,orange";
    char *token = strtok(tokenizeString, ",");
    while (token != NULL) {
        printf("Token: %s\n", token);
        token = strtok(NULL, ",");
    }

    return 0;
}
