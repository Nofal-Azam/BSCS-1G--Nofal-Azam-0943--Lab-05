#include<stdio.h>
#include <string.h>

int main(){
    char correctUsername[50] = "Jacktrump143";
    char correctpass[13] = "123jack4^5";
    char username[50];
    char pass[13];
    printf("Enter your Usename.");
    scanf("%s", username);
    if(strcmp(username,correctUsername)==0){
        printf("Enter Password: ");
        scanf("%s",pass);
        if(strcmp(pass,correctpass)==0){
            printf("Succesfully logged in.");
        }
        else printf("Incorrect password.");
    }
    else printf("Username Not Found.");
    
    
    return 0;
}