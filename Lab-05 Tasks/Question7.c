#include <stdio.h>

int main(){
    int permissions;
    printf("Enter permissions value (1=READ, 2=WRITE, 4=EXECUTE, add them for combos): ");
    scanf("%d", &permissions);

    if (permissions & 4) {
    printf("Access granted: full control");
    }
    else {
        if ((permissions & 1) && (permissions & 2)) {
        printf("Access granted: read and write");
        }
        else {
            if ((permissions & 1) && !(permissions & 2)) {
            printf("Access granted: read-only");
            }
         else {
            printf("Access denied");
            }
        }
    }


    return 0;
}