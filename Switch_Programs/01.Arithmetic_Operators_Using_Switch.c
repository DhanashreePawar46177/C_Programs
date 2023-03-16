#include<stdio.h>
#include<conio.h>

int main()
{
         int Num1 = 0, Num2 = 0 ,i=0;

         Up:
         printf("\n===================*************=====================\n");

         printf("\n\t Enter First Number = ");
         scanf("%d",&Num1);

         printf("\n\t Enter Second Number = ");
         scanf("%d",&Num2);

          if( Num1 < 0 || Num2 < 0)
         {
                printf("\n\n\t Invalid Number.\n\n\t Please Enter Another Number. \n\n");
                getch();
                system("cls");
                goto Up;
         }

         printf("\n Enter Your Choice  \n\n 1)Addition.\n 2)Subtraction. \n 3)Multiplication. \n 4)Division.\n\n ");
         scanf("%d",&i);

         switch(i)
         {
                 case 1:
                 {
                         printf("\n Addition Of %d + %d = %d",Num1,Num2,Num1-Num2);
                 }
                 break;
                 case 2:
                 {
                         printf("\n Subtraction of %d - %d = %d",Num1,Num2,Num1-Num2);
                 }
                 break;
                 case 3:
                 {
                         printf("\n Multiplication of %d * %d = %d", Num1,Num2,Num1*Num2);
                 }
                 break;
                 case 4:
                 {
                          (Num1 > Num2 ) ? printf("\n Division Of %d / %d = %d",Num1,Num2,Num1/Num2): printf("\n\t For Division Please Enter Num1 is Greater.");
                 }
                 break;
                 default:
                 {
                         printf("\n Invalid Choice");
                 }
         }

         printf("\n\n===================*************======================\n");
         printf("\n\t Thanks !!!\n");

         getch();
         return 0;
}
