#include<stdio.h>
#include<conio.h>

struct Customer
{
        int Cust_ID;
        char Cust_Name[20];
        long long int Mob_No;
        float Bill;
};

int main()
{
        struct Customer Obj1 = {12, "Amey Wagh", 7865421456, 808.77}, Obj2, Obj3 ;

        Obj2.Cust_ID = 101;
        strcpy(Obj2.Cust_Name,"Amey Wagh");
        Obj2.Mob_No = 7856345678;
        Obj2.Bill = 780.56;

        printf("\n Enter 3rd Customer Details => \n");
        printf("\n Enter Customer ID = ");
        scanf("%d",&Obj3.Cust_ID);

        fflush(stdin);

        printf("\n Enter Customer Name = ");
        gets(Obj3.Cust_Name);

        printf("\n Enter Customer Mobile Number = ");
        scanf("%lli",&Obj3.Mob_No);

        printf("\n Enter Customer Bill = ");
        scanf("%f",&Obj3.Bill);

        system("cls");

        printf("\n\n 1st Customer Details are => \n\n Customer ID = %d \n Customer Name = %s \n Customer Mobile Number = %lli \n Customer Bill = %0.2f",Obj1.Cust_ID,Obj1.Cust_Name,Obj1.Mob_No,Obj1.Bill);
        printf("\n\n 2nd Customer Details are => \n\n Customer ID = %d \n Customer Name = %s \n Customer Mobile Number = %lli \n Customer Bill = %0.2f",Obj2.Cust_ID,Obj2.Cust_Name,Obj2.Mob_No,Obj2.Bill);
        printf("\n\n 3rd Customer Details are => \n\n Customer ID = %d \n Customer Name = %s \n Customer Mobile Number = %lli \n Customer Bill = %0.2f",Obj3.Cust_ID,Obj3.Cust_Name,Obj3.Mob_No,Obj3.Bill);

        printf("\n\n Thanks !!!\n");

        getch();
        return 0;
}
