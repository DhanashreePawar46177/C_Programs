#include<stdio.h>
#include<conio.h>

int main()
{
         int Num = 0;

         printf("\n================*********================\n");

         Up:
         printf("\n Enter Your Number = ");
         scanf("%d",&Num);

         if(Num==0)
         {
               printf("\n\t %d is Neutral.\n Please Enter Another Number.",Num);
               goto Up;
         }
         (Num%2==0)? printf("\n\t %d is Even",Num):printf("\n\t %d is odd",Num);

         printf("\n\n================*********================");
         printf("\n\n\t Thanks !!!\n");

         getch();
         return 0;
}
