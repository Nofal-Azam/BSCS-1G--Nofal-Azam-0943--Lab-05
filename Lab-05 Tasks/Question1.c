#include <stdio.h>

int main(){
    int Age;
    printf("Enter your Age: ");
    scanf("%d", &Age);
    if(Age < 5){
        printf("Your ticket is Free.");
    }
    else if(Age > 65){
        printf("You get a discounted ticket.");
    }
    else{
        printf("You have a Standard ticket.");
    }
    return 0;
}