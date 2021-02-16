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

int startersMenu(char *resultOrder[255][255])
{
    static int x=0;
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
        {"Steamed Wontons---------------Veg  "}
    };
    float startersItemsCost[]={130, 340, 200, 140, 240, 300, 360, 310, 120, 150};
    startersDisplay:
    for(int i=0; i<10; i++)
    {
        printf("\t%d.%s\t\t%.2f\n", (i+1), startersItemsNames[i], startersItemsCost[i]);
    }
    int startersChoice=0;
    printf("\n\nEnter the food number you want to order: ");
    scanf("%d", &startersChoice);
    strcpy(*resultOrder[x++], startersItemsNames[startersChoice-1]);
    printf("\n%s added to order!\n", startersItemsNames[startersChoice-1]);
    printf("\n1.Do you want to add anything more from Starters Menu?\n");
    printf("\n2.Do you want to step back and order from other options?\n");
    printf("\n3.Do you want to review and place your order?\n");
    int stepChoice=0;
    scanf("%d", &stepChoice);
    if(stepChoice==1)
    goto startersDisplay;
    else if(stepChoice==2)
    return 2;
    else if(stepChoice==3)
    return 3;
}