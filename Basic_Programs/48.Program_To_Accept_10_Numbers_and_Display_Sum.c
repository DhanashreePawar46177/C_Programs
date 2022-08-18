#include<stdio.h>
#include<conio.h>

int main()
{
         int Num = 0, Cnt = 0, Sum = 0;

         printf("\n\t Enter 10 Numbers =>\n");

         for(Cnt=1 ; Cnt<=10 ; Cnt++)
         {
             printf("\n\t Enter Number %d = ",Cnt);
             scanf("%d",&Num);
             Sum=Sum+Num;
         }

         system("cls");

         printf("\n\t Addition Of 10 Numbers = %d",Sum);
         printf("\n\n\t\t Thanks !!!\n");

         getch();
         return 0;
}
