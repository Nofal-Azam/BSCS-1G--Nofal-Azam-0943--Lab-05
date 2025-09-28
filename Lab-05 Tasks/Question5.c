#include<stdio.h>
#include <string.h>

int main(){
    int hasPrerequisite,isCourseFull;
    printf("HAS the student completed the prerequisite(0 for not met : 1 for has met): ");
    scanf("%d",&hasPrerequisite);
    printf("IS the course Full(0 for not full : 1 for full): ");
    scanf("%d",&isCourseFull);
    if(hasPrerequisite == 1){
        if(isCourseFull == 0){
            printf("Enrolled Successfully");
        }
        else printf("Cannot enroll: course is full");
    }
    else
        if(isCourseFull == 0){
            printf("Cannot enroll: prerequisite missing");
        }
        else printf("Cannot enroll: prerequisite missing and course is full");
    return 0;
}