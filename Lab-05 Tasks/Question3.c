#include<stdio.h>

int main(){
    int a,b,c;
    float discriminant;
    printf("To solve equation ax^2 + bx +c enter values of a, b and c\n");
    printf("a: ");
    scanf("%d",&a);
    printf("\nb: ");
    scanf("%d",&b);
    printf("\nc: ");
    scanf("%d",&c);
    discriminant = (b*b)-4*a*c;
    if(discriminant > 0){
        printf("\nThe equation has 2 real roots.");
    }
    else if(discriminant < 0){
        printf("\nThe equation has imaginary roots.");
    }
    else printf("\nThe equation has 1 real root.");
    return 0;
}