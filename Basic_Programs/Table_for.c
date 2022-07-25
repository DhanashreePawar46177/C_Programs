#include<stdio.h>
#include<conio.h>

int main()
{
       int No = 0 ,Cnt = 0;

       printf("\n\n===========******************===========\n");

       printf("\n Enter Number To Print Its Table = ");
       scanf("%d",&No);

       printf("\n\n===========******************===========\n");

       for(Cnt=1 ; Cnt<=10 ; Cnt++)
       {
             printf("\n\t\t %d",No * Cnt);
       }

       printf("\n\n===========*******************===========\n");

       getch();
       printf("\n\t Thanks !!!");

       getch();
       return 0;
}

