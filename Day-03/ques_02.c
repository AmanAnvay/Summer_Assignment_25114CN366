#include<stdio.h>

int main() {
    int st, ed, flag;

    printf("Enter start and end Numbers => : ");
    scanf("%d %d", &st, &ed);

    for (int i=st; i<=ed; i++) {
        if (i<=1)
            continue;

        flag = 1;

        for (int j=2; j<=i/2; j++) {
            if (i%j == 0) {
                flag = 0;
                break;
            }
        }

        if (flag)
            printf("%d ", i);
    }

    return 0;
}

