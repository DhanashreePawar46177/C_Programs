#include<stdio.h>
#include<conio.h>

int main()
{
         int Num = 0, Temp = 0, Fact = 0;

         printf("\n\t Enter a Number For Finding Factorial = ");
         scanf("%d",&Num);

         Fact = 1;
         Temp = Num;

         while(Temp>1)
         {
               Fact = Fact*Temp;
               Temp--;
         }
         printf("\n\t Factorial of %d = %d",Num,Fact);

         printf("\n\n\t Thanks !!!\n");

         getch();
         return 0;
}
