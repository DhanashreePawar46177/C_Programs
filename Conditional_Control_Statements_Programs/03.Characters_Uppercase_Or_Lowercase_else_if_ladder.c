#include<stdio.h>
#include<conio.h>

int main()
{
         char Ch = '\0';

         printf("\n\n=============*************=============\n");

         printf("\n Enter Your Character = ");
         scanf("%c",&Ch);

         if(Ch >= 'A' && Ch <= 'Z')
         {
               printf("\n %c is Uppercase Letter",Ch);
         }
         else if(Ch >= 'a' && Ch <= 'z')
         {
               printf("\n %c is Lowercase Letter",Ch);
         }
         else
         {
               printf("\n Invalid Letter");
         }

         printf("\n\n=============*************=============\n");

         getch();

         printf("\n\t Thanks !!!\n");

         getch();
         return 0;
}
