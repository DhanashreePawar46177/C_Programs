#include<stdio.h>
#include<conio.h>

int main()
{
         int Rad = 0;
         float pi = 3.14;
         float Area = 0;

         printf("\n\t=============*******=============\n");

         printf("\n\t Enter Radius Of Circle = ");
         scanf("%d",&Rad);

         Area=pi*Rad*Rad;

         printf("\n\t Area Of Circle = %0.2f",Area);

         printf("\n\n\t=============*******=============\n");
         printf("\n\t\t Thanks !!!\n");

         getch();
         return 0;
}
