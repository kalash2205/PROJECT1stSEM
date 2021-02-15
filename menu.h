int upperLayerMenu(char menuOptions[8][255])
{
    // enum countryFood {STARTERS, NORTH INDIAN,SOUTH INDIAN,SANDWICHES,DESSERTS,HOT BEVERAGES,COCKTAILS AND SOFT DRINKS};
    // enum countryFood n1;
    // scanf("%[a,b,c,d,....,z]", n1);
    // printf("Your choice is: %s", n1);
    // printf("%d", strlen(menuOptions));
    printf("************************************************************\n");
    printf("\033[7m\t\t\t      MENU      \t\t\t\033[0m\n");
    printf("************************************************************\n");
    
    for(int i=0; i<8; i++)
    {
        printf("\t\t  %d.%s\n",(i+1), menuOptions[i]);
    }
    int choiceMenu;
    printf("Select the menu category you want to see: ");
    scanf("%d", &choiceMenu);
    return choiceMenu;
}

void startersMenu()
{
    char startersItemsNames[][255]={
        {"Kakori Kebabs------------------Veg "},
        {"Stir Fried Chilli Chicken------Nveg"},
        {"Microwave Paneer Tikkas--------Veg "},
        {"Aloo and Dal ki Tikki----------Veg "},
        {"Cheese Balls-------------------Veg "},
        {"Chicken Satay------------------NVeg"},
        {"Bhuna Masala Chicken Wings-----NVeg"},
        {"Tangri Kebabs------------------NVeg"},
        {"Momos--------------------------Veg "},
        {"Steamed Wontons----------------Veg "}
    };
    float startersItemsCost[]={130, 340, 200, 140, 240, 300, 360, 310, 120, 150};

    for(int i=0; i<10; i++)
    {
        printf("\t%d.%s\t\t%.2f\n", (i+1), startersItemsNames[i], startersItemsCost[i]);
    }
}