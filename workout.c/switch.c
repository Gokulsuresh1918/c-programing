#include <stdio.h>

int main()
{
    int choose,a,b;
    printf("1 for dosa\n2 for iddiyappam\n3for porotta\n4 for iddle\nPleace enter your choose");
    scanf("%d",&choose);
    switch(choose){
        case 1:
        printf("you have entered dosa");
        break;
        case 2:
        printf("you have entered iddiyappam");
        break;
        default:
        printf("you have entered a wrrong selection");
    } 
   
    return 0; 
}
