#include <stdio.h>
#include <string.h>

int findSubstring(const char *str, const char *substr) {
    int strLen = strlen(str);
    int substrLen = strlen(substr);

    for (int i = 0; i <= strLen - substrLen; i++) {
        int j;
        for (j = 0; j < substrLen; j++) {
            if (str[i + j] != substr[j]) {
                break; // Exit the inner loop if characters don't match
            }
        }
        if (j == substrLen) {
            return i;
        }
    }

    return -1; 
}

int main() {
    char mainStr[100], subStr[100];

    printf("Enter the main string: ");
    scanf("%s", mainStr);

    printf("Enter the substring to search for: ");
    scanf("%s", subStr);

    int index = findSubstring(mainStr, subStr);

    if (index != -1) {
        printf("Substring found at index %d.\n", index);
    } else {
        printf("Substring not found.\n");
    }

    return 0;
}
