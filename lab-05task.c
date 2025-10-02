#include <stdio.h>

int main() {
    int depart, spec;

    printf("Enter your Department\n");
    printf("1: ENGINEERING\n");
    printf("2: MEDICAL\n");
    scanf("%d", &depart);

    switch (depart) {
        case 1:
            printf("You chose Engineering\n");
            printf("1: Computer Science\n");
            printf("2: Mechanical\n");
            scanf("%d", &spec);

            switch (spec) {
                case 1:
                    printf("Subject: OOP\n");
                    break;
                case 2:
                    printf("Subject: Analysis Machine\n");
                    break;
                default:
                    printf("Invalid Input\n");
            }
            break; 

        case 2:
            printf("You chose Medical\n");
            printf("1: MBBS\n");
            printf("2: BDS\n");
            scanf("%d", &spec);

            switch (spec) {
                case 1:
                    printf("Subject: Anatomy\n");
                    break;
                case 2:
                    printf("Subject: Oral Surgery\n");
                    break;
                default:
                    printf("Invalid Input\n");
            }
            break;

        default:
            printf("Invalid Input\n");
    }

    return 0;
}

