/*CALCULATION PAGE*/

#include <stdio.h>
#include <stdlib.h>

#define Nlenght 32
#define Plenght 9

void Main_Menu();
void SubMenuAdd();
void AddTwoNumbers();
void AddThreeNumbers();
void SubMenuMinus();
void MinusTwoNumbers();
void MinusThreeNumbers();

int Menu;
float A,B,C,D;
int S;

int main()
{
    int attempt;

    printf("\n\n\t\t\t*------------WELCOME TO CALCULATION PAGE------------*\n\n\t\t\t");
    sleep(3);
    system("cls");


    while(attempt<=3)
    {
        printf("\n\n\t\t---------------------------------\n\t\tENTER YOUR USERNAME AND PASSWORD\n\t\t---------------------------------\n\n\t\t\t");

        char Username[Nlenght];
        char Username1[Nlenght] ="Fayyadhah Nursaffa";

        char Password[Plenght];
        char Password1[Plenght] ="1234";

        printf("\n\n\t\tENTER YOUR USERNAME: \n\n\t\t");
        scanf("%[^\n]%*C",&Username);


        printf("\n\n\t\tENTER YOUR PASSWORD:  \n\n\t\t");
        scanf("%[^\n]%*C",&Password);
        system("cls");
        attempt++;

        if(strcmp(Username,Username1)==0&&strcmp(Password,Password1)==0)
        {
            system("cls");
            printf("\n\n\t\t\tLOGIN SUCCESFULL !\n\n\t\t\t");
            sleep(2);
            system("cls");
            Main_Menu();
            break;

        }
        else
        {
            system("cls");
            printf("\n\n\t\t\tUSERNAME OR PASSWORD IS WRONG\n\n\t\t\t");
        }

        sleep(3);
        system("cls");

    }

    return 0;
}
void SubMenuAdd()
{
    do
        {
            printf("\n\t\t\t-----------------\n\t\t\tSUB MENU ADDITION\n\t\t\t-----------------\n\n\t\t\t1.ADD 2 NUMBERS\n\t\t\t2.ADD 3 NUMBERS\n\t\t\t3.RETURN\n\n\t\t\tPlease Make Your Selection.\n\n\n\t\t\t");
            scanf("%d",&Menu);
            system("cls");

            switch (Menu)
            {
                case 1:
                AddTwoNumbers();
                break;

                case 2:
                AddThreeNumbers();
                break;

                case 3:
                Main_Menu();
                break;

                default:
                printf("\n\t\t\tWRONG\n\t\t\t");

            }
        }
    while (Menu>=0|| Menu<4);
}
void Main_Menu()
{
     do
        {
            printf("\n\t\t\t----------\n\t\t\tMAIN MENU\n\t\t\t----------\n\n\t\t\t1.ADD\n\t\t\t2.MINUS\n\t\t\t3.EXIT\n\n\t\t\tPlease Make Your Selection.\n\n\n\t\t\t");
            scanf("%d",&Menu);
            system("cls");

            switch (Menu)
            {
                case 1:
                SubMenuAdd();
                break;

                case 2:
                SubMenuMinus();
                break;

                case 3:
                printf("\n\t\t\tTHANK YOU, BYE!\n\t\t\t");
                break;

                default:
                printf("\n\t\t\tWRONG\n\t\t\t");
            }
        }
    while (Menu>=0|| Menu<4);
}
void SubMenuMinus()
{
    do
        {
            printf("\n\t\t\t---------------\n\t\t\tSUB MENU MINUS\n\t\t\t---------------\n\n\t\t\t1.MINUS 2 NUMBERS\n\t\t\t2.MINUS 3 NUMBERS\n\t\t\t3.RETURN\n\n\t\t\tPlease Make Your Selection.\n\n\n\t\t\t");
            scanf("%d",&Menu);
            system("cls");

            switch (Menu)
            {
                case 1:
                MinusTwoNumbers();
                break;

                case 2:
                MinusThreeNumbers();
                break;

                case 3:
                Main_Menu();
                break;

                default:
                printf("\n\t\t\tWRONG\n\t\t\t");

            }
        }
    while (Menu>=0|| Menu<4);
}
void AddTwoNumbers()
{
       do
    {
         printf("\n\tBASIC ADDICTION PROGRAM\n\t----------------------\n\t");

         printf("\n\tEnter first digit:     ");
         scanf("%f",&A);

         printf("\n\tEnter second digit:    ");
         scanf("%f",&B);

         C = A + B;

         printf("\n\tThe SUM is:                %.2f\n\n\t",C);

         sleep(3);
         system("cls");

         printf("\n\tType 1 to continue \n\tType 0 to exit program\n\n\t");
         scanf("%d",&S);
         system("cls");

         if(S==0)
         {
             printf("\n\tBASIC ADDITION PROGRAM\n\t----------------------\n\n\tBYE!\n\t");
             sleep(2);
             system("cls");
             SubMenuAdd();
         }

    } while(S>0|| S==1);
}
void AddThreeNumbers()
{
    do
    {
         printf("\n\tBASIC ADDICTION PROGRAM\n\t----------------------\n\t");

         printf("\n\tEnter first digit:     ");
         scanf("%f",&A);

         printf("\n\tEnter second digit:    ");
         scanf("%f",&B);

         printf("\n\tEnter third digit:     ");
         scanf("%f",&C);

         D = A + B + C;

         printf("\n\tThe SUM is:                %.2f\n\n\t",D);

         sleep(3);
         system("cls");

         printf("\n\tType 1 to continue \n\tType 0 to exit program\n\n\t");
         scanf("%d",&S);
         system("cls");

         if(S==0)
         {
             printf("\n\tBASIC ADDITION PROGRAM\n\t----------------------\n\n\tBYE!\n\t");
             sleep(2);
             system("cls");
             SubMenuAdd();
         }

    } while(S>0|| S==1);
}
void MinusTwoNumbers()
{
       do
    {
         printf("\n\tBASIC MINUS PROGRAM\n\t----------------------\n\t");

         printf("\n\tEnter first digit:     ");
         scanf("%f",&A);

         printf("\n\tEnter second digit:    ");
         scanf("%f",&B);

         C = A - B;

         printf("\n\tThe SUB is:                %.2f\n\n\t",C);

         sleep(3);
         system("cls");

         printf("\n\tType 1 to continue \n\tType 0 to exit program\n\n\t");
         scanf("%d",&S);
         system("cls");

         if(S==0)
         {
             printf("\n\tBASIC MINUS PROGRAM\n\t------------------------\n\n\tBYE!\n\t");
             sleep(2);
             system("cls");
             SubMenuMinus();
         }

    } while(S>0|| S==1);
}
void MinusThreeNumbers()
{
    do
    {
         printf("\n\tBASIC MINUS PROGRAM\n\t----------------------\n\t");

         printf("\n\tEnter first digit:     ");
         scanf("%f",&A);

         printf("\n\tEnter second digit:    ");
         scanf("%f",&B);

         printf("\n\tEnter third digit:    ");
         scanf("%f",&C);

         D = A - B - C;

         printf("\n\tThe SUB is:                %.2f\n\n\t",D);

         sleep(3);
         system("cls");

         printf("\n\tType 1 to continue \n\tType 0 to exit program\n\n\t");
         scanf("%d",&S);
         system("cls");

         if(S==0)
         {
             printf("\n\tBASIC MINUS PROGRAM\n\t---------------------\n\n\tBYE!\n\t");
             sleep(2);
             system("cls");
             SubMenuMinus();

         }

    } while(S>0|| S==1);
}
