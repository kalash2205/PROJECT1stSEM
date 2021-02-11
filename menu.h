void upperLayerMenu(char menuOptions[8][255])
{
    // enum countryFood {Starters= 1, Indian, Chinese, French, Pasta, Pizzas, Drinks};
    // enum countryFood n1;
    // scanf("%[a,b,c,d,....,z]", n1);
    // printf("Your choice is: %s", n1);
    // printf("%d", strlen(menuOptions));
    printf("************************************************************\n");
    printf("\033[7m\t\t\t      MENU      \t\t\t\033[0m\n");
    printf("************************************************************\n");
    
    for(int i=0; i<8; i++)
    {
        printf("\t       %d.%s\n",(i+1), menuOptions[i]);
    }
}