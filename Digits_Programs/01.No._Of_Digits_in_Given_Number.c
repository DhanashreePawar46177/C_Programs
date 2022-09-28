#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
         int No = 0, dCnt = 0, Temp = 0;

         Up:
         printf("\n\n Enter Positive Integer Number To Calculate Number Of Digits = ");
         scanf("%d",&No);

         if(No <= 0)
         {
               printf("\n Invalid Number. Please Enter Positive Integer Number.");
               getch();
               system("cls");
               goto Up;
         }

         Temp = No;

         while(Temp > 0)
         {
               dCnt++;
               Temp = Temp / 10;
         }
         printf("\n\n No Of Digits in Given Number %d is = %d",No,dCnt);

         printf("\n\n Thanks !!!\n");

         getch();
         return 0;
}
