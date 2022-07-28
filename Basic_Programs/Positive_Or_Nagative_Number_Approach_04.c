#include<stdio.h>
#include<conio.h>

int main()
{
         int Num = 0;

         Up:
         printf("\n================*********================\n");

         printf("\n Enter Your Number = ");
         scanf("%d",&Num);

         if(Num==0)
         {
               printf("\n\t %d is Neural.\n\t Please Enter Another Number.");
               system("cls");
               goto Up;
         }
         if(Num>0)
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
