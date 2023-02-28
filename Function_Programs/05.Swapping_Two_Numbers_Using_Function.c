#include<stdio.h>
#include<conio.h>

void Swap(int No1, int No2)
{
    int Num1 = No1, Num2 = No2;

    Num1=Num1+Num2;
    Num2=Num1-Num2;
    Num1=Num1-Num2;

    printf("\n\n **After Swapping Numbers are =>\n");
    printf("\n 1st Number = %d \n 2nd Number = %d",Num1,Num2);

}
int main()
{
    int No1 = 0, No2 = 0;

    printf("\n Enter 1st Number = ");
    scanf("%d",&No1);

    printf("\n Enter 2nd Number = ");
    scanf("%d",&No2);

    system("cls");

    printf("\n **Before Swapping Numbers are =>\n");
    printf("\n 1st Number = %d \n 2nd Number = %d",No1,No2);

    Swap(No1,No2);

    getch();
    return 0;
}
