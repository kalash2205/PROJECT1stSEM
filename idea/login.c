#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct
{
    char NAME[10];
    char PASSWORD[10];
} USER;
USER number[100];

USER login();
USER login()
{
    char username[20];
    char password[20];
    USER login;
    printf("enter username: ");
    scanf("%s", username);
    strcpy(login.NAME, username);
    printf("enter password:");
    scanf("%s", password);
    strcpy(login.PASSWORD, password);
    return login;
}

void textfile();//


void signup();
void signup()
{
    int i;
    char username[20];
    char password[20];
    USER signup;
    printf("\nenter a username: ");
    scanf("%s", username);
     for (i = 0; i < 100; i++)
    {
        if (strcmp(number[i].NAME, username) == 0)
        {
            printf("\n username exists already");
            signup();
        }
        else
        {
            strcpy(signup.NAME, username);
            break;

        }
    }
    
    printf("\nenter a password:");
    scanf("%s", password);
    strcpy(signup.PASSWORD, password);

   
}

int main()
{
    int choice;
    
    printf("*************WELCOME TO THE ----------**************\n");
    printf("1. LOGIN\n2.SIGNUP\n3.GUEST ");
    printf("Enter you choice: ");
    scanf("%d", &choice);
    if (choice == 1)
    {
        login();

    }
    else if(choice==2)
    {
        signup();
    }
}
