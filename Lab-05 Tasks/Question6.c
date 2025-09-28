# include <stdio.h>

int main(){
    char Room,Action;
    printf("ENTER ROOM (L. Living Room : K. Kitchen): ");
    scanf(" %c", &Room);
    printf("\nEnter Action (L.Lights : T.Thermostat): ");
    scanf(" %c", &Action);
    switch (Room)
    {
    case 'L':
        switch (Action)
        {
        case 'L':
            printf("Adjusting ambient lighting.");
            break;
        case 'T':
            printf("Setting Living Room Temperature.");
            break;
        default:
            printf("Incorrect Action selected.");
            break;
        }
        break;
    case 'K':
        switch (Action)
        {
        case 'L':
            printf("Turning on bright task lighting.");
            break;
        case 'T':
            printf("Setting Kitchen Temperature.");
            break;
        default:
            printf("Incorrect Action selected.");
            break;
        }
        break;

    
    default:
        printf("Incorrect Room selcted.");
        break;
    }
    return 0;
}