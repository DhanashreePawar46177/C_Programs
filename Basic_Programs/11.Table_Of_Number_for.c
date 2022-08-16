#include<stdio.h>
#include<conio.h>

int main()
{
       int Num = 0 ,Cnt = 0;

       printf("\n\n===========******************===========\n");

       printf("\n Enter Number To Print Its Table = ");
       scanf("%d",&Num);

       printf("\n\n===========******************===========\n");

       for(Cnt = 1 ; Cnt <= 10 ; Cnt++)
       {
             printf("\n\t\t %d",Num * Cnt);
       }

       printf("\n\n===========*******************===========\n");

       getch();
       printf("\n\t Thanks !!!");

       getch();
       return 0;
}

