#include<stdio.h>
#include<conio.h>

int main()
{
       int Num = 0 ,Cnt = 0;

       printf("\n\n===========******************===========\n");

       printf("\n Enter Number To Print Its Table = ");
       scanf("%d",&Num);

       printf("\n\n===========******************===========\n");

       Cnt=1 ;
       while( Cnt<=10)
       {
             printf("\n\t\t %3d * %3d = %3d",Num,Cnt,Num * Cnt);
             Cnt++;
       }

       printf("\n\n===========*******************===========\n");

       getch();
       printf("\n\t Thanks !!!\n");

       getch();
       return 0;
}