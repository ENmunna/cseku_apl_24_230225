#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);  // Read the number of test cases

    while (t--) {
        char str[10][11];  // Declare an array to hold 10 strings of up to 10 characters each
        int i, s = 0, j;

        // Read the 10 strings
        for (i = 0; i < 10; i++) {
            scanf("%s", str[i]);
        }

        // Calculate the score based on the position of 'X'
        for (i = 0; i < 10; i++) {
            for (j = 0; j < 10; j++) {
                if (str[i][j] == 'X') {
                    if (i == 0 || i == 9 || j == 0 || j == 9) {
                        s += 1;  // Corner or edge
                    } else if (i == 1 || i == 8 || j == 1 || j == 8) {
                        s += 2;  // Second layer
                    } else if (i == 2 || i == 7 || j == 2 || j == 7) {
                        s += 3;  // Third layer
                    } else if (i == 3 || i == 6 || j == 3 || j == 6) {
                        s += 4;  // Fourth layer
                    } else if (i == 4 || i == 5 || j == 4 || j == 5) {
                        s += 5;  // Center layer
                    }
                }
            }
        }

        printf("%d\n", s);  // Output the calculated score
    }

    return 0;  // Exit the program
}

