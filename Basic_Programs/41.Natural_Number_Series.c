#include<stdio.h>
#include<conio.h>

int main()
{
         int Num = 0, Cnt = 0;

         printf("\n\n\t============*********===============\n");

         printf("\n\t Enter Positive Integer Number = ");
         scanf("%d",&Num);

         for(Cnt = 1; Cnt <= Num; Cnt++)
         {
             printf("\n\t %d",Cnt);
         }

         printf("\n\n\t============*********===============\n");
         printf("\n\t\t Thanks !!!\n");

         getch();
         return 0;
}

