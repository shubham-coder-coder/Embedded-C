#include <stdio.h>

int main()
{
    int command;

    printf("Enter command: ");
    scanf("%d", &command);

    switch (command)
    {
        case 1:
            printf("motor ON");
            break;
        case 2:
            printf("motor OFF");
            break;
        case 3:
            printf("motor Forward");
            break;
        case 4:
            printf("motor Reverse");
            break;
        default:
            printf("invalid command\n");
    }

    return 0;
}
