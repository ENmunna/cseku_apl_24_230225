#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);  // Read the number of test cases

    for (int i = 0; i < t; i++) {
        char a, b;
        scanf(" %c %c", &a, &b);  // Read two characters

        // Calculate positions in the alphabet (0-indexed)
        int m = a - 'a';  // Convert character 'a' to index
        int n = b - 'a';  // Convert character 'b' to index

        // Calculate the score based on the positions
        if (m < n) {
            printf("%d\n", (m * 25) + n);  // Adjusted formula for when m < n
        } else {
            printf("%d\n", (m * 25) + n);  // Adjusted formula for when m >= n
        }
    }

    return 0;  // Exit the program
}

