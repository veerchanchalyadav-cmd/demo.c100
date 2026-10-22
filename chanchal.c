#include <stdio.h>
int main()
{
    int day=2;
    printf("enter number out of 1 to 4: ");
    scanf("%d",&day);
    switch (day){
    case 1:
    printf("monday\n");
    break ; 
    case 2:
    printf("tuesday\n");
    case 3:
    printf("wednesday\n");
    break ;
    case 4:
    printf("thursday\n");
    break ;
    default:
    printf("invalid\n");
}
return 0;

}
