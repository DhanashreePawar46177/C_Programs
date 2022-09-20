#include<stdio.h>
#include<conio.h>

int main()
{
        int No = 0, Dig = 0, Temp = 0, Rev = 0;

        Up:
        printf("\n Enter Positive Integer Number = ");
        scanf("%d",&No);

        Temp = No;

        while(Temp > 0 || Temp < 0)
        {
                Dig = Temp % 10;
                Rev = (Rev * 10) + Dig;
                Temp = Temp / 10;
        }
        printf("\n Reverse Of %d is = %d",No,Rev);
        printf("\n\n Thanks !!!\n");

        getch();
        return 0;
}
