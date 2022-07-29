#include<stdio.h>
#include<conio.h>

int main()
{
       int No = 0 ,Cnt = 0;

       printf("\n\n\t=========******************=========\n");

       printf("\n\t Enter Number To Print Its Table = ");
       scanf("%d",&No);

       printf("\n\n\t=========******************=========\n");

        Cnt = 1 ;
       do
       {
             printf("\n\t %d",No * Cnt);
             Cnt++;
       }while(Cnt <= 10);

       printf("\n\n\t=========*******************=========\n");

       getch();
       return 0;
}

