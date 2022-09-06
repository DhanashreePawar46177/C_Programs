#include<stdio.h>
#include<conio.h>

int main()
{
         int No = 0, dSum = 0, Temp = 0,Dig = 0;

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
               Dig = Temp % 10;
               dSum = dSum + Dig;
               Temp = Temp / 10;
         }
         printf("\n\n Sum Of Digits in Given Number %d is = %d",No,dSum);

         printf("\n\n Thanks !!!\n");

         getch();
         return 0;
}

