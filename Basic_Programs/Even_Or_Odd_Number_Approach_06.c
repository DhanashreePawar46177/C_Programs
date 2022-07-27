#include<stdio.h>
#include<conio.h>

int main()
{
         int Num = 0;

         printf("\n================*********================\n");

         printf("\n Enter Your Number = ");
         scanf("%d",&Num);

         (Num==0)? printf("\n\t %d is Neutral Number",Num):(Num%2==0)? printf("\n\t %d is Even Number",Num): printf("\n\t %d is Odd Number",Num);

         printf("\n\n\t Thanks !!!");
         printf("\n\n================*********================");

         getch();
         return 0;
}
