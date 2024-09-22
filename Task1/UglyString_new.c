#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);  // Read the number of test cases

    while (t--) {
        int n, i, s = 0;
        scanf("%d", &n);  // Read the length of the string
        char str[n + 1];  // Declare a string with space for the null terminator
        scanf("%s", str);  // Read the string

        // Check for occurrences of "pie" and "map"
        for (i = 0; i < n - 2; i++) {  // Loop until n-2 to prevent overflow
            if ((str[i] == 'p' && str[i + 1] == 'i' && str[i + 2] == 'e') ||
                (str[i] == 'm' && str[i + 1] == 'a' && str[i + 2] == 'p')) {
                s++;  // Increment count for each match
                str[i] = 'x';  // Replace matched characters with 'x'
                str[i + 1] = 'x';
                str[i + 2] = 'x';
            }
        }

        printf("%d\n", s);  // Output the count of matches
    }

    return 0;  // Exit the program
}

