#include<stdio.h>
#include<conio.h>

int main()
{
         int Num = 0;

         printf("\n================*********================\n");

         printf("\n Enter Your Number = ");
         scanf("%d",&Num);

         if(Num == 0)
         {
             printf("\n\t %d is Neutral Number",Num);
             goto Down;
         }
         if(Num % 2 == 0)
         {
               printf("\n\t %d is Even Number",Num);
         }
         else
         {
               printf("\n\t %d is Odd Number",Num);
         }

         Down:
         
         printf("\n\n================*********================");
         printf("\n\n\t Thanks !!!\n");

         getch();
         return 0;
}
