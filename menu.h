int upperLayerMenu(char menuOptions[][255])
{
    // enum countryFood {STARTERS, NORTH INDIAN,SOUTH INDIAN,SANDWICHES,DESSERTS,HOT BEVERAGES,COCKTAILS AND SOFT DRINKS};
    // enum countryFood n1;
    // scanf("%[a,b,c,d,....,z]", n1);
    // printf("Your choice is: %s", n1);
    // printf("%d", strlen(menuOptions));
    printf("************************************************************\n");
    printf("\033[7m\t\t\t      MENU      \t\t\t\033[0m\n");
    printf("************************************************************\n");

    for (int i = 0; i < strlen(*menuOptions); i++)
    {
        printf("\t\t  %d.%s\n", (i + 1), menuOptions[i]);
    }
    int choiceMenu;
    printf("Select the menu category you want to see: ");
    scanf("%d", &choiceMenu);
    return choiceMenu;
}

int startersMenu(char resultOrder[255][255], int *x)
{
    char startersItemsNames[][255] = {
        {"Kakori Kebabs------------------Veg "},
        {"Stir Fried Chilli Chicken------Nveg"},
        {"Microwave Paneer Tikkas--------Veg "},
        {"Aloo and Dal ki Tikki----------Veg "},
        {"Aloo Samose--------------------Veg "},
        {"Cheese Balls-------------------Veg "},
        {"Stuffed Bati-------------------Veg "},
        {"Chicken Satay------------------NVeg"},
        {"Bhuna Masala Chicken Wings-----NVeg"},
        {"Tangri Kebabs-----------------NVeg"},
        {"Momos-------------------------Veg "},
        {"Steamed Wontons---------------Veg  "},
        {"Gobi Manchurian---------------Veg "},
        {"Gobi 65-----------------------Veg "},
        {"Babycorn Manchurian-----------Veg "},
        {"Babycorn Chilly---------------Veg "},
        {"Egg Pepper Dry----------------NVeg"},
        {"Mushroom Manchurian-----------Veg "},
        {"Paneer ToTu Dry---------------Veg "},
        {"Egg Bhurjee-------------------NVeg"},
        {"Mix Veg Chilly----------------Veg "}};
    float startersItemsCost[] = {130, 340, 200, 140, 170, 240, 210, 300, 360, 310, 120, 150, 200, 190, 220, 270, 180, 260, 300, 150, 240};
startersDisplay:
    printf("\n*******************************STARTERS*******************************\n");
    for (int i = 0; i < 21; i++)
    {
        printf("\t%d.%s\t\t%.2f\n", (i + 1), startersItemsNames[i], startersItemsCost[i]);
    }
    int startersChoice = 0;
    printf("\n\nEnter the food number you want to order(or 0 to get other options): ");
    scanf("%d", &startersChoice);
    if (startersChoice > 0 && startersChoice <= 21)
    {
        strcpy(resultOrder[*x], startersItemsNames[startersChoice - 1]);
        *x = *x + 1;
    }
    else if (startersChoice == 0)
        goto firstTime;
    else
    {
        printf("Oops sorry! That item number doesn't exists. Please select again.\n");
        goto startersDisplay;
    }
    printf("\n%s added to order!\n", startersItemsNames[startersChoice - 1]);
    printf("\n1.Do you want to add anything more from Starters Menu?\n");
firstTime:
    if (startersChoice == 0)
        printf("\n1.Do you want to see again the Starters Menu?\n");
    printf("\n2.Do you want to step back and order from other options?\n");
    printf("\n3.Do you want to review and place your order?\n");
    int stepChoice = 0;
    scanf("%d", &stepChoice);
    if (stepChoice == 1)
        goto startersDisplay;
    else if (stepChoice == 2)
        return 2;
    else if (stepChoice == 3)
        return 3;
}
int northIndianMenu(char resultOrder[255][255], int *x)
{
    char northIndianItemsNames[][255] = {
        {"Chole Bhature------------------Veg "},
        {"Rogan Josh------Nveg"},
        {"Aloo Bhurjee"},
        {"Dum Aloo"},
        {"Alu Jeera"},
        {"Alu Gobi"},
        {"Mix Veg"},
        {"Veg Kadai"},
        {"Mushroom Masala"},
        {"Paneer Burji"},
        {"Paneer Butter Masala"},
        {"Paneer Kadai"},
        {"Palak Paneer"},
        {"Paneer Mutter"},
        {"Malai Kofta"},
        {"Dal Fry"},
        {"Dal Tadka"},
        {"Dal Makhani"},
        {"Chicken Curry"},
        {"Chicken Masala"},
        {"Chicken Kadai"},
        {"Chicken Butter Masala"},
        {"Chicken Muglai"}};
    float northIndianItemsCost[] = {210, 110, 140, 170, 130, 160, 240, 250, 230, 310, 340, 330, 350, 320, 350, 230, 250, 310, 370, 390, 320, 420, 400};
northIndianDisplay:
    printf("\n*******************************NORTH INDIAN*******************************\n");
    for (int i = 0; i < 23; i++)
    {
        printf("\t%d.%s\t\t%.2f\n", (i + 1), northIndianItemsNames[i], northIndianItemsCost[i]);
    }
    int northIndianChoice = 0;
    printf("\n\nEnter the food number you want to order: ");
    scanf("%d", &northIndianChoice);
    if (northIndianChoice >= 0 && northIndianChoice <= 23)
    {
        strcpy(resultOrder[*x], northIndianItemsNames[northIndianChoice - 1]);
        *x = *x + 1;
    }
    else if (northIndianChoice == 0)
        goto firstTime;
    else
    {
        printf("Oops sorry! That item number doesn't exists. Please select again.\n");
        goto northIndianDisplay;
    }
    printf("\n%s added to order!\n", northIndianItemsNames[northIndianChoice - 1]);
    printf("\n1.Do you want to add anything more from North Indian Menu?\n");
firstTime:
    if (northIndianChoice == 0)
        printf("\n1.Do you want to see again the North Indian Menu?\n");
    printf("\n2.Do you want to step back and order from other options?\n");
    printf("\n3.Do you want to review and place your order?\n");
    int stepChoice = 0;
    scanf("%d", &stepChoice);
    if (stepChoice == 1)
        goto northIndianDisplay;
    else if (stepChoice == 2)
        return 2;
    else if (stepChoice == 3)
        return 3;
}
int southIndianMenu(char resultOrder[255][255], int *x)
{
    char southIndianItemsNames[][255] = {
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""}
    };
    float southIndianItemsCost[] = {130, 340, 200, 140, 170, 240, 210, 300, 360, 310, 120, 150, 200, 190, 220, 270, 180, 260, 300, 150, 240};
southIndianDisplay:
    printf("\n*******************************SOUTH INDIAN*******************************\n");
    for (int i = 0; i < 21; i++)
    {
        printf("\t%d.%s\t\t%.2f\n", (i + 1), southIndianItemsNames[i], southIndianItemsCost[i]);
    }
    int southIndianChoice = 0;
    printf("\n\nEnter the food number you want to order(or 0 to get other options): ");
    scanf("%d", &southIndianChoice);
    if (southIndianChoice > 0 && southIndianChoice <= 21)
    {
        strcpy(resultOrder[*x], southIndianItemsNames[southIndianChoice - 1]);
        *x = *x + 1;
    }
    else if (southIndianChoice == 0)
        goto firstTime;
    else
    {
        printf("Oops sorry! That item number doesn't exists. Please select again.\n");
        goto southIndianDisplay;
    }
    printf("\n%s added to order!\n", southIndianItemsNames[southIndianChoice - 1]);
    printf("\n1.Do you want to add anything more from southIndian Menu?\n");
firstTime:
    if (southIndianChoice == 0)
        printf("\n1.Do you want to see again the southIndian Menu?\n");
    printf("\n2.Do you want to step back and order from other options?\n");
    printf("\n3.Do you want to review and place your order?\n");
    int stepChoice = 0;
    scanf("%d", &stepChoice);
    if (stepChoice == 1)
        goto southIndianDisplay;
    else if (stepChoice == 2)
        return 2;
    else if (stepChoice == 3)
        return 3;
}
int indianBreadsMenu(char resultOrder[255][255], int *x)
{
    char indianBreadsItemsNames[][255] = {
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""}
    };
    float indianBreadsItemsCost[] = {130, 340, 200, 140, 170, 240, 210, 300, 360, 310, 120, 150, 200, 190, 220, 270, 180, 260, 300, 150, 240};
indianBreadsDisplay:
    printf("\n*******************************INDIANBREADS*******************************\n");
    for (int i = 0; i < 21; i++)
    {
        printf("\t%d.%s\t\t%.2f\n", (i + 1), indianBreadsItemsNames[i], indianBreadsItemsCost[i]);
    }
    int indianBreadsChoice = 0;
    printf("\n\nEnter the food number you want to order(or 0 to get other options): ");
    scanf("%d", &indianBreadsChoice);
    if (indianBreadsChoice > 0 && indianBreadsChoice <= 21)
    {
        strcpy(resultOrder[*x], indianBreadsItemsNames[indianBreadsChoice - 1]);
        *x = *x + 1;
    }
    else if (indianBreadsChoice == 0)
        goto firstTime;
    else
    {
        printf("Oops sorry! That item number doesn't exists. Please select again.\n");
        goto indianBreadsDisplay;
    }
    printf("\n%s added to order!\n", indianBreadsItemsNames[indianBreadsChoice - 1]);
    printf("\n1.Do you want to add anything more from indianBreads Menu?\n");
firstTime:
    if (indianBreadsChoice == 0)
        printf("\n1.Do you want to see again the indianBreads Menu?\n");
    printf("\n2.Do you want to step back and order from other options?\n");
    printf("\n3.Do you want to review and place your order?\n");
    int stepChoice = 0;
    scanf("%d", &stepChoice);
    if (stepChoice == 1)
        goto indianBreadsDisplay;
    else if (stepChoice == 2)
        return 2;
    else if (stepChoice == 3)
        return 3;
}

int continentalMenu(char resultOrder[255][255], int *x)
{
    char continentalItemsNames[][255] = {
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""}
    };
    float continentalItemsCost[] = {130, 340, 200, 140, 170, 240, 210, 300, 360, 310, 120, 150, 200, 190, 220, 270, 180, 260, 300, 150, 240};
continentalDisplay:
    printf("\n*******************************CONTINENTAL*******************************\n");
    for (int i = 0; i < 21; i++)
    {
        printf("\t%d.%s\t\t%.2f\n", (i + 1), continentalItemsNames[i], continentalItemsCost[i]);
    }
    int continentalChoice = 0;
    printf("\n\nEnter the food number you want to order(or 0 to get other options): ");
    scanf("%d", &continentalChoice);
    if (continentalChoice > 0 && continentalChoice <= 21)
    {
        strcpy(resultOrder[*x], continentalItemsNames[continentalChoice - 1]);
        *x = *x + 1;
    }
    else if (continentalChoice == 0)
        goto firstTime;
    else
    {
        printf("Oops sorry! That item number doesn't exists. Please select again.\n");
        goto continentalDisplay;
    }
    printf("\n%s added to order!\n", continentalItemsNames[continentalChoice - 1]);
    printf("\n1.Do you want to add anything more from continental Menu?\n");
firstTime:
    if (continentalChoice == 0)
        printf("\n1.Do you want to see again the continental Menu?\n");
    printf("\n2.Do you want to step back and order from other options?\n");
    printf("\n3.Do you want to review and place your order?\n");
    int stepChoice = 0;
    scanf("%d", &stepChoice);
    if (stepChoice == 1)
        goto continentalDisplay;
    else if (stepChoice == 2)
        return 2;
    else if (stepChoice == 3)
        return 3;
}

int breakfastMenu(char resultOrder[255][255], int *x)
{
    char breakfastItemsNames[][255] = {
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""}
    };
    float breakfastItemsCost[] = {130, 340, 200, 140, 170, 240, 210, 300, 360, 310, 120, 150, 200, 190, 220, 270, 180, 260, 300, 150, 240};
breakfastDisplay:
    printf("\n*******************************BREAKFAST*******************************\n");
    for (int i = 0; i < 21; i++)
    {
        printf("\t%d.%s\t\t%.2f\n", (i + 1), breakfastItemsNames[i], breakfastItemsCost[i]);
    }
    int breakfastChoice = 0;
    printf("\n\nEnter the food number you want to order(or 0 to get other options): ");
    scanf("%d", &breakfastChoice);
    if (breakfastChoice > 0 && breakfastChoice <= 21)
    {
        strcpy(resultOrder[*x], breakfastItemsNames[breakfastChoice - 1]);
        *x = *x + 1;
    }
    else if (breakfastChoice == 0)
        goto firstTime;
    else
    {
        printf("Oops sorry! That item number doesn't exists. Please select again.\n");
        goto breakfastDisplay;
    }
    printf("\n%s added to order!\n", breakfastItemsNames[breakfastChoice - 1]);
    printf("\n1.Do you want to add anything more from breakfast Menu?\n");
firstTime:
    if (breakfastChoice == 0)
        printf("\n1.Do you want to see again the breakfast Menu?\n");
    printf("\n2.Do you want to step back and order from other options?\n");
    printf("\n3.Do you want to review and place your order?\n");
    int stepChoice = 0;
    scanf("%d", &stepChoice);
    if (stepChoice == 1)
        goto breakfastDisplay;
    else if (stepChoice == 2)
        return 2;
    else if (stepChoice == 3)
        return 3;
}

int dessertsMenu(char resultOrder[255][255], int *x)
{
    char dessertsItemsNames[][255] = {
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""}
    };
    float dessertsItemsCost[] = {130, 340, 200, 140, 170, 240, 210, 300, 360, 310, 120, 150, 200, 190, 220, 270, 180, 260, 300, 150, 240};
dessertsDisplay:
    printf("\n*******************************DESSERTS*******************************\n");
    for (int i = 0; i < 21; i++)
    {
        printf("\t%d.%s\t\t%.2f\n", (i + 1), dessertsItemsNames[i], dessertsItemsCost[i]);
    }
    int dessertsChoice = 0;
    printf("\n\nEnter the food number you want to order(or 0 to get other options): ");
    scanf("%d", &dessertsChoice);
    if (dessertsChoice > 0 && dessertsChoice <= 21)
    {
        strcpy(resultOrder[*x], dessertsItemsNames[dessertsChoice - 1]);
        *x = *x + 1;
    }
    else if (dessertsChoice == 0)
        goto firstTime;
    else
    {
        printf("Oops sorry! That item number doesn't exists. Please select again.\n");
        goto dessertsDisplay;
    }
    printf("\n%s added to order!\n", dessertsItemsNames[dessertsChoice - 1]);
    printf("\n1.Do you want to add anything more from desserts Menu?\n");
firstTime:
    if (dessertsChoice == 0)
        printf("\n1.Do you want to see again the desserts Menu?\n");
    printf("\n2.Do you want to step back and order from other options?\n");
    printf("\n3.Do you want to review and place your order?\n");
    int stepChoice = 0;
    scanf("%d", &stepChoice);
    if (stepChoice == 1)
        goto dessertsDisplay;
    else if (stepChoice == 2)
        return 2;
    else if (stepChoice == 3)
        return 3;
}
int hotBeveragesMenu(char resultOrder[255][255], int *x)
{
    char hotBeveragesItemsNames[][255] = {
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""}
    };
    float hotBeveragesItemsCost[] = {130, 340, 200, 140, 170, 240, 210, 300, 360, 310, 120, 150, 200, 190, 220, 270, 180, 260, 300, 150, 240};
hotBeveragesDisplay:
    printf("\n*******************************HOT BEVERAGES*******************************\n");
    for (int i = 0; i < 21; i++)
    {
        printf("\t%d.%s\t\t%.2f\n", (i + 1), hotBeveragesItemsNames[i], hotBeveragesItemsCost[i]);
    }
    int hotBeveragesChoice = 0;
    printf("\n\nEnter the food number you want to order(or 0 to get other options): ");
    scanf("%d", &hotBeveragesChoice);
    if (hotBeveragesChoice > 0 && hotBeveragesChoice <= 21)
    {
        strcpy(resultOrder[*x], hotBeveragesItemsNames[hotBeveragesChoice - 1]);
        *x = *x + 1;
    }
    else if (hotBeveragesChoice == 0)
        goto firstTime;
    else
    {
        printf("Oops sorry! That item number doesn't exists. Please select again.\n");
        goto hotBeveragesDisplay;
    }
    printf("\n%s added to order!\n", hotBeveragesItemsNames[hotBeveragesChoice - 1]);
    printf("\n1.Do you want to add anything more from hotBeverages Menu?\n");
firstTime:
    if (hotBeveragesChoice == 0)
        printf("\n1.Do you want to see again the hotBeverages Menu?\n");
    printf("\n2.Do you want to step back and order from other options?\n");
    printf("\n3.Do you want to review and place your order?\n");
    int stepChoice = 0;
    scanf("%d", &stepChoice);
    if (stepChoice == 1)
        goto hotBeveragesDisplay;
    else if (stepChoice == 2)
        return 2;
    else if (stepChoice == 3)
        return 3;
}
int cocktailsAndSoftDrinksMenu(char resultOrder[255][255], int *x)
{
    char cocktailsAndSoftDrinksItemsNames[][255] = {
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""}
    };
    float cocktailsAndSoftDrinksItemsCost[] = {130, 340, 200, 140, 170, 240, 210, 300, 360, 310, 120, 150, 200, 190, 220, 270, 180, 260, 300, 150, 240};
cocktailsAndSoftDrinksDisplay:
    printf("\n*******************************COCKTAILS AND SOFTDRINKS*******************************\n");
    for (int i = 0; i < 21; i++)
    {
        printf("\t%d.%s\t\t%.2f\n", (i + 1), cocktailsAndSoftDrinksItemsNames[i], cocktailsAndSoftDrinksItemsCost[i]);
    }
    int cocktailsAndSoftDrinksChoice = 0;
    printf("\n\nEnter the food number you want to order(or 0 to get other options): ");
    scanf("%d", &cocktailsAndSoftDrinksChoice);
    if (cocktailsAndSoftDrinksChoice > 0 && cocktailsAndSoftDrinksChoice <= 21)
    {
        strcpy(resultOrder[*x], cocktailsAndSoftDrinksItemsNames[cocktailsAndSoftDrinksChoice - 1]);
        *x = *x + 1;
    }
    else if (cocktailsAndSoftDrinksChoice == 0)
        goto firstTime;
    else
    {
        printf("Oops sorry! That item number doesn't exists. Please select again.\n");
        goto cocktailsAndSoftDrinksDisplay;
    }
    printf("\n%s added to order!\n", cocktailsAndSoftDrinksItemsNames[cocktailsAndSoftDrinksChoice - 1]);
    printf("\n1.Do you want to add anything more from cocktailsAndSoftDrinks Menu?\n");
firstTime:
    if (cocktailsAndSoftDrinksChoice == 0)
        printf("\n1.Do you want to see again the cocktailsAndSoftDrinks Menu?\n");
    printf("\n2.Do you want to step back and order from other options?\n");
    printf("\n3.Do you want to review and place your order?\n");
    int stepChoice = 0;
    scanf("%d", &stepChoice);
    if (stepChoice == 1)
        goto cocktailsAndSoftDrinksDisplay;
    else if (stepChoice == 2)
        return 2;
    else if (stepChoice == 3)
        return 3;
}
