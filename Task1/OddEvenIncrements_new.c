
#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);  // Read the number of test cases

    while (t--) {
        int n, i, m = 0;
        scanf("%d", &n);  // Read the size of the array
        int str[n];  // Declare the array

        // Read the array elements
        for (i = 0; i < n; i++) {
            scanf("%d", &str[i]);
        }

        // Special case for n == 2
        if (n == 2) {
            printf("YES\n");
        } else {
            // Check for alternating even/odd elements
            for (i = 0; i < n - 2; i++) {
                if ((str[i] % 2 == 0 && str[i + 2] % 2 != 0) ||
                    (str[i] % 2 != 0 && str[i + 2] % 2 == 0)) {
                    m = 1;  // Found a valid pair
                    break;
                }
            }

            // Output the result based on the condition
            if (m != 1) {
                printf("YES\n");
            } else {
                printf("NO\n");
            }
        }
    }

    return 0;  // Exit the program
}
