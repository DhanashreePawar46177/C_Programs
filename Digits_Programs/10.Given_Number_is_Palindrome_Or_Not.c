#include<stdio.h>
#include<conio.h>

int main()
{
        int No = 0, Dig = 0, Temp = 0, Rev = 0;

        printf("\n Enter Integer Number = ");
        scanf("%d",&No);

        Temp = No;

        while(Temp > 0 || Temp < 0)
        {
                Dig = Temp % 10;
                Rev = (Rev * 10) + Dig;
                Temp = Temp / 10;
        }

         if(No == Rev)
         {
                printf("\n %d is Palindrome",No);
         }
         else
         {
                printf("\n %d is not Palindrome",No);
         }
         printf("\n\n Thanks !!!\n");

         getch();
         return 0;
}

