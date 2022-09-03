#include<stdio.h>
#include<conio.h>

int main()
{
         int Num = 0;

         printf("\n================*********================\n");

         printf("\n Enter Your Number = ");
         scanf("%d",&Num);

         (Num==0)? printf("\n\t %d is Neutral",Num):(Num>0)? printf("\n\t %d is Positive",Num): printf("\n\t %d is Negative",Num);

         printf("\n\n================*********================");
         printf("\n\n\t Thanks !!!\n");

         getch();
         return 0;
}

