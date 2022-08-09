#include<stdio.h>
#include<conio.h>

int main()
{
       int No = 0 ,Cnt = 0;

       printf("\n\n===========******************===========\n");

       printf("\n Enter Number To Print Its Table = ");
       scanf("%d",&No);

       printf("\n\n===========******************===========\n");

       Cnt=1 ;
       while( Cnt<=10)
       {
             printf("\n\t\t %d",No * Cnt);
             Cnt++;
       }

       printf("\n\n===========*******************===========\n");

       getch();
       printf("\n\t Thanks !!!");

       getch();
       return 0;
}
