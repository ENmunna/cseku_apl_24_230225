#include<stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, i, m = 0;
        scanf("%d", &n);
        int str[n];

        for (i = 0; i < n; i++) {
            scanf("%d", &str[i]);
        }

        if (n == 2) {
            printf("YES\n");
        }
        else{

        for (i = 0; i < n - 2; i++) {
            if ((str[i] % 2 == 0 && str[i + 2] % 2 != 0) || (str[i] % 2 != 0 && str[i + 2] % 2 == 0)) {
                m = 1;
                break;
            }
        }

        if (m != 1) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    }

    return 0;
}

