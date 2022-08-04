#include<stdio.h>
#include<conio.h>

int main()
{
         int Num = 0;

         printf("\n================*********================\n");

         printf("\n Enter Your Number = ");
         scanf("%d",&Num);

         if(Num==0)
         {
               printf("\n\t %d is Neutral",Num);
         }
         else if(Num > 0)
         {
               printf("\n\t %d is Positive",Num);
         }
         else
         {
               printf("\n\t %d is Negative",Num);
         }

         printf("\n\n\t Thanks !!!");
         printf("\n\n================*********================");

         getch();
         return 0;
}
