#include <stdio.h>

int main() {
    int student, subject, i, j, sum, marks;

    scanf("%d %d", &student, &subject);

    for (i = 1; i <= student; i++) {
        sum = 0;

        for (j = 1; j <= subject; j++) {
            scanf("%d", &marks);
            sum += marks;
        }

        printf("Total marks of student %d = %d\n", i, sum);
    }

    return 0;
}
