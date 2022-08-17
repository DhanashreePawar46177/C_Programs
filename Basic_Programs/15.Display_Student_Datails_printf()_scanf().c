#include<stdio.h>
#include<conio.h>

int main()
{
         char Grade = '\0';
         int Roll_No = 0;
         float Per = 0.0;
         char Nm[50] = " ";

         printf("\n\t Enter Student Details :\n");
         printf("\n****************************************************\n");

         printf("\n\t Enter Student Roll Number = ");
         scanf("%d",&Roll_No);

         fflush(stdin);

         printf("\n\t Enter Student Name = ");
         gets(Nm);                        // scanf("%s",&Nm);

         printf("\n\t Enter student Percentage = ");
         scanf("%f",&Per);

         fflush(stdin);

         printf("\n\t Enter Student Grade = ");
         Grade=getche();                  //scanf("%c",&Grade);  Or  Grade=getchar();

         getch();

         system("cls");

         printf("\n\t STUDENT INFORMATION\n");
         getch();

         printf("\n****************************************************\n");

         printf("\n\t Roll Number = %d.\n\n\t Name        = %s.\n\n\t Percentage  = %0.2f.\n\n\t Grade       = %c.",Roll_No,Nm,Per,Grade);

         printf("\n\n****************************************************\n");
         printf("\n\t\t Thanks !!!\n");

         getch();
         return 0;
}
