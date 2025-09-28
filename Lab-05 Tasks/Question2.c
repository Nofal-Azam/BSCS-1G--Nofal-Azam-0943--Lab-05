#include<stdio.h>

int main(){
    int PowerOn;
    char LightColor;
    printf("Is the power on (1. for yes 2. for NO): ");
    scanf("%d",&PowerOn);
    if(PowerOn == 1){
        printf("Enter Light colour (R: RED G:GREEN Y:YELLOW): ");
        scanf(" %c", &LightColor);
        if(LightColor == 'R'){
            printf("Stop!");
        }
        else if(LightColor =='Y' ){
            printf("CAUTION!");
        }
        else printf("GO!");
    }

    return 0;
}