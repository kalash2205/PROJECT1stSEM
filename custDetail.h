/*typedef struct
{
    char NAME[50];
    char PHONE[15];
}customer;*/

/*USER login();
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
}*/

//void textfile(customer);
void textfile(cust id)
{
    FILE *fptr;
    fptr = fopen("details.txt", "a+");
    fprintf(fptr, id.NAME);
    fprintf(fptr, "\t");
    fprintf(fptr, id.PHONE);
    fprintf(fptr, "\n");
}
void inputdetails(cust id)

{
    printf("Enter you name: ");
    scanf(" %[^\n]s", id.NAME);
    printf("\nEnter you phone number: ");
    scanf("%s", &id.PHONE);
    textfile(id);
}




/*void signup();
void signup()
{
    int i;
    char username[20];
    char password[20];
    USER registration;
    printf("\nenter a username: ");
    scanf("%s", username);
     for (i = 0; i < 100; i++)
    {
        if (strcmp(number[i].NAME, username) == 0)
        {
            printf("\n username exists already");
            return 0;
        }
        else
        {
            strcpy(registration.NAME, username);
            break;
        }
    } 
    printf("\nenter a password:");
    scanf("%s", password);
    strcpy(registration.PASSWORD, password);
    textfile(registration);
}*/

/*int main()
{
    int choice;
    FILE *fptr;
    fptr = fopen("details.txt", "r");  
    printf("*************WELCOME TO THE ----------**************\n");
    printf("1. LOGIN\n2. SIGNUP\n3. GUEST ");
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
    fclose(fptr);
}*/
