#include<stdio.h>
#include<conio.h>

int main()
{
       int No = 0 ,Cnt = 0;

       printf("\n\n\t=========******************=========\n");

       printf("\n\t Enter Number To Print Its Table = ");
       scanf("%d",&No);

       printf("\n\n\t=========******************=========\n");

       Cnt=10 ;
       while( Cnt>=1)
       {
             printf("\n\t %d",No * Cnt);
             Cnt--;
       }

       printf("\n\n\t=========*******************=========\n");
       printf("\n\t\t Thanks!!!");

       getch();
       return 0;
}

