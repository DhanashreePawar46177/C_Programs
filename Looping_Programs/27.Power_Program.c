#include<stdio.h>
#include<conio.h>

int main()
{
    int No1 = 0, No2 = 0, i = 0, Res = 0;

    printf("\n Enter Number First = ");
    scanf("%d",&No1);

    printf("\n Enter Number Second = ");
    scanf("%d",&No2);

    for(i = 1, Res = 1; i <= No2; i++)
    {
        Res = Res * No1;
    }

    printf("\n The Value Of %d Power %d = %d",No1,No2,Res);

    printf("\n\n Thanks !!!\n");

    getch();
    return 0;
}
