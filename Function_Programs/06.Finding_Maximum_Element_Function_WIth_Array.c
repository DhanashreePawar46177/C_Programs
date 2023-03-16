#include<stdio.h>
#include<conio.h>

void Accept_Details(int *Aptr,int Cnt)
{
    int i = 0;

    printf("\n Enter Elements for Finding Maximum Element =>\n");

    for(i = 0; i < Cnt; i++)
    {
        printf("\n Enter Number %d = ",i+1);
        scanf("%d",&Aptr[i]);
    }
}
void Display_Details(int *Aptr,int Cnt)
{
    int i = 0;

    for(i = 0; i < Cnt; i++)
    {
        printf("\n Element in Array = %d ",Aptr[i]);
    }
}
int Find_Max(int *Aptr,int Cnt)
{
    int i = 0,Top = 0;

    for(i = 0; i < Cnt; i++)
    {
        if(i == 0 || Top < Aptr[i])
        {
            Top = Aptr[i];
        }
    }
    return Top;
}
int main()
{
    int Num[5] = {'\0'}, Max = 0;

    Accept_Details(Num,5);

    Display_Details(Num,5);

    Max = Find_Max(Num,5);

    printf("\n\n Maximum Element is = %d",Max);

    getch();
    return 0;
}
