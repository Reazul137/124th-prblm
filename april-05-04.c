#include<stdio.h>
int main()
{
    int monno;
    char monnm[15];

    printf("Input Month No : ");
    scanf("%d",&monno);
    switch(monno)
    {
    case 1 :
    case 3 :
    case 5 :
    case 7 :
    case 8 :
    case 10 :
    case 12 :
        printf("Month have 31 days. \n");
        break;
    case 2 :
        printf("The 2nd month is February and have 28 days.\n");
        printf("In leap year the February month have 29 days.\n");
        break;
    case 4 :
    case 6 :
    case 9 :
    case 11 :
        printf("Month have 30 days. \n");
        break;
    default :
        printf("Invalid MOnth number. \n Please try again.. \n");
        break;
    }

    return 0;
}
