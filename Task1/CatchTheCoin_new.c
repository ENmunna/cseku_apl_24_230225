#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);  // Read the number of test cases

    while (t--) {
        int a, b;
        scanf("%d %d", &a, &b);  // Read the two integers a and b

        // Check the condition for b
        if (b < -1) {
            printf("NO\n");  // If b is less than -1, print NO
        } else {
            printf("YES\n");  // Otherwise, print YES
        }
    }

    return 0;  // Exit the program
}

