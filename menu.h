int upperLayerMenu(char menuOptions[][255])
{
    printf("************************************************************\n");
    printf("\033[7m\t\t\t      MENU      \t\t\t\033[0m\n");
    printf("************************************************************\n");

    for (int i = 0; i < 10; i++)
    {
        printf("\t\t  %d.%s\n", (i + 1), menuOptions[i]);
    }
    int choiceMenu;
    printf("Select the menu category you want to see: ");
    scanf("%d", &choiceMenu);
    return choiceMenu;
}

int startersMenu(char resultOrder[255][255], int quantity[100], int price[100], int *x)
{
    char startersItemsNames[][255] = {
        {"Kakori Kebabs------------------Veg"},
        {"Stir Fried Chilli Chicken-----Nveg"},
        {"Microwave Paneer Tikkas--------Veg"},
        {"Aloo and Dal ki Tikki----------Veg"},
        {"Aloo Samose--------------------Veg"},
        {"Cheese Balls-------------------Veg"},
        {"Stuffed Bati-------------------Veg"},
        {"Chicken Satay-----------------NVeg"},
        {"Bhuna Masala Chicken Wings----NVeg"},
        {"Tangri Kebabs-----------------NVeg"},
        {"Momos--------------------------Veg"},
        {"Steamed Wontons----------------Veg"},
        {"Gobi Manchurian----------------Veg"},
        {"Gobi 65------------------------Veg"},
        {"Babycorn Manchurian------------Veg"},
        {"Babycorn Chilly----------------Veg"},
        {"Egg Pepper Dry----------------NVeg"},
        {"Mushroom Manchurian------------Veg"},
        {"Paneer ToTu Dry----------------Veg"},
        {"Egg Bhurjee-------------------NVeg"},
        {"Mix Veg Chilly-----------------Veg"}};
    float startersItemsCost[] = {130, 340, 200, 140, 170, 240, 210, 300, 360, 310, 120, 150, 200, 190, 220, 270, 180, 260, 300, 150, 240};
startersDisplay:
    printf("\n*******************************STARTERS*******************************\n");
    for (int i = 0; i < 21; i++)
    {
        printf("\t%d.%s\t\t%.2f\n", (i + 1), startersItemsNames[i], startersItemsCost[i]);
    }
    int startersChoice = 0, sq;
    printf("\n\nEnter the food number you want to order (or 0 to get other options): ");
    scanf("%d", &startersChoice);
    printf("Enter the quantity: ");
    scanf("%d", &sq);
    if (startersChoice > 0 && startersChoice <= 21)
    {
        strcpy(resultOrder[*x], startersItemsNames[startersChoice - 1]);
        price[*x] = startersItemsCost[startersChoice - 1];
        quantity[*x] = sq;
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
int northIndianMenu(char resultOrder[255][255], int quantity[100], int price[100], int *x)
{
    char northIndianItemsNames[][255] = {
        {"Chole Bhature------------------Veg"},
        {"Rogan Josh--------------------Nveg"},
        {"Aloo Bhurjee-------------------Veg"},
        {"Dum Aloo-----------------------Veg"},
        {"Alu Jeera----------------------Veg"},
        {"Alu Gobi-----------------------Veg"},
        {"Mix Veg------------------------Veg"},
        {"Veg Kadai----------------------Veg"},
        {"Mushroom Masala----------------Veg"},
        {"Paneer Burji-------------------Veg"},
        {"Paneer Butter Masala-----------Veg"},
        {"Paneer Kadai-------------------Veg"},
        {"Palak Paneer-------------------Veg"},
        {"Paneer Mutter------------------Veg"},
        {"Malai Kofta--------------------Veg"},
        {"Dal Fry------------------------Veg"},
        {"Dal Tadka----------------------Veg"},
        {"Dal Makhani--------------------Veg"},
        {"Chicken Curry------------------Veg"},
        {"Chicken Masala-----------------Veg"},
        {"Chicken Kadai------------------Veg"},
        {"Chicken Butter Masala----------Veg"},
        {"Chicken Muglai-----------------Veg"}};
    float northIndianItemsCost[] = {210, 110, 140, 170, 130, 160, 240, 250, 230, 310, 340, 330, 350, 320, 350, 230, 250, 310, 370, 390, 320, 420, 400};
northIndianDisplay:
    printf("\n*******************************NORTH INDIAN*******************************\n");
    for (int i = 0; i < 23; i++)
    {
        printf("\t%d.%s\t\t%.2f\n", (i + 1), northIndianItemsNames[i], northIndianItemsCost[i]);
    }
    int northIndianChoice = 0, nq;
    printf("\n\nEnter the food number you want to order (or 0 to get other options): ");
    scanf("%d", &northIndianChoice);
    printf("Enter the quantity: ");
    scanf("%d", &nq);
    if (northIndianChoice >= 0 && northIndianChoice <= 23)
    {
        strcpy(resultOrder[*x], northIndianItemsNames[northIndianChoice - 1]);
        quantity[*x] = nq;
        price[*x] = northIndianItemsCost[northIndianChoice - 1];
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
int southIndianMenu(char resultOrder[255][255], int quantity[100], int price[100], int *x)
{
    char southIndianItemsNames[][255] = {
        {"Tamarind Rice------------------Veg"},
        {"Curd Rice----------------------Veg"},
        {"Malabar Fish Biryani----------NVeg"},
        {"Avial with Kerela Red Rice-----Veg"},
        {"Plain Butter Dosa--------------Veg"},
        {"Mysore Masala Dosa-------------Veg"},
        {"Onion Plain Dosa---------------Veg"},
        {"Veg Rava Paneer Dosa-----------Veg"},
        {"Potato Green Peas Poriyal------Veg"},
        {"Kadala Curry-------------------Veg"},
        {"Fish Gassi--------------------NVeg"},
        {"Arachu Vitta Sambar------------Veg"},
        {"Chicken Stew With Appams------NVeg"},
        {"Tomato Gujju-------------------Veg"},
        {"Pepper Garlic Rasam------------Veg"},
        {"Mulangi Sambar-----------------Veg"},
        {"Ginger Chutney-----------------Veg"},
        {"Roasted Chana Dal Chutney------Veg"},
        {"Mango Kuzhambu-----------------Veg"},
        {"Kasi Halwa---------------------Veg"},
        {"Thick Butter Milk--------------Veg"},
        {"Garlic Podi Idli Fry-----------Veg"},
        {"Pesarattu----------------------Veg"},
        {"Coconut Raita------------------Veg"},
        {"Tomato Pachadi-----------------Veg"}};
    float southIndianItemsCost[] = {130, 340, 200, 140, 170, 240, 210, 300, 360, 310, 120, 150, 200, 190, 220, 270, 180, 260, 300, 150, 240, 100, 200, 250, 100,};
southIndianDisplay:
    printf("\n*******************************SOUTH INDIAN*******************************\n");
    for (int i = 0; i < 25; i++)
    {
        printf("\t%d.%s\t\t%.2f\n", (i + 1), southIndianItemsNames[i], southIndianItemsCost[i]);
    }
    int southIndianChoice = 0, SIq;
    printf("\n\nEnter the food number you want to order (or 0 to get other options): ");
    scanf("%d", &southIndianChoice);
    printf("Enter the quantity: ");
    scanf("%d", &SIq);
    if (southIndianChoice > 0 && southIndianChoice <= 21)
    {
        strcpy(resultOrder[*x], southIndianItemsNames[southIndianChoice - 1]);
        price[*x] = southIndianItemsCost[southIndianChoice - 1];

        quantity[*x] = SIq;
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
int indianBreadsMenu(char resultOrder[255][255], int quantity[100], int price[100], int *x)
{
    char indianBreadsItemsNames[][255] = {

        {"Tandoori Roti------------------veg"},
        {"Romali Roti--------------------veg"},
        {"Naan---------------------------veg"},
        {"Garlic Naan--------------------veg"},
        {"Chicken Tikka Naan------------nveg"},
        {"Keema Naan--------------------nveg"},
        {"Cheese Naan--------------------veg"},
        {"Aloo Paratha-------------------veg"},
        {"Lachha Paratha-----------------veg"},
        {"Pudina Paratha-----------------veg"},
        {"Cheese Burst Paratha-----------veg"},
        {"Stuffed Paratha----------------veg"},
        {"Onion Kulcha-------------------veg"},
        {"Paneer Kulcha------------------veg"},
        {"Masala Kulcha------------------veg"},
        {"Masala Papad-------------------veg"},
        {"Papad Fry----------------------veg"},
        {"Cinnamon Sugar Bread-----------veg"},
        /*{""},
        {""},
        {""}*/};
    float indianBreadsItemsCost[] = {130, 340, 200, 140, 170, 240, 210, 300, 360, 310, 120, 150, 200, 190, 220, 270, 180, 260};
indianBreadsDisplay:
    printf("\n*******************************INDIANBREADS*******************************\n");
    for (int i = 0; i < 18; i++)
    {
        printf("\t%d.%s\t\t%.2f\n", (i + 1), indianBreadsItemsNames[i], indianBreadsItemsCost[i]);
    }
    int indianBreadsChoice = 0, ibq;
    printf("\n\nEnter the food number you want to order (or 0 to get other options): ");
    scanf("%d", &indianBreadsChoice);
    printf("Enter the quantity: ");
    scanf("%d", &ibq);
    if (indianBreadsChoice > 0 && indianBreadsChoice <= 21)
    {
        strcpy(resultOrder[*x], indianBreadsItemsNames[indianBreadsChoice - 1]);
        price[*x] = indianBreadsItemsCost[indianBreadsChoice - 1];
        quantity[*x] = ibq;
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

int continentalMenu(char resultOrder[255][255], int quantity[100], int price[100], int *x)
{
    char continentalItemsNames[][255] = {
        {"Crispy Calamari Rings----------veg"},
        {"Paneer Steak-------------------veg"},
        {"Mutton Stew-------------------nveg"},
        {"Cauliflower Mornay-------------veg"},
        {"Cocktail Prawns---------------nveg"},
        {"Poached Salmon----------------nveg"},
        {"Potato Croquet-----------------veg"},
        {"Roasted Bell Pepper Hummus-----veg"},
        {"Baba Ghanouj------------------nveg"},
        {"Falafel Platter----------------veg"},
        {"Chicken Tenders---------------nveg"},
        {"Legume Diane-------------------veg"},
        {"Beef Stroganoff---------------nveg"},
        {"Smoked Kidney Bean Salad-------veg"},
        {"Mushroom Stuffed Tomatoes------veg"},
        {"Peppy Tomato Vegetable Roll----veg"},
        {"Broiled Boston Scrod----------nveg"},
        {"Lasagna------------------------veg"},
        {"Stuffed Grape Leaves-----------veg"},
        {"Tyropita----------------------nveg"},
        {"Shrimp Basket With fries------nveg"}};
    float continentalItemsCost[] = {130, 340, 200, 140, 170, 240, 210, 300, 360, 310, 120, 150, 200, 190, 220, 270, 180, 260, 300, 150, 240};
continentalDisplay:
    printf("\n*******************************CONTINENTAL*******************************\n");
    for (int i = 0; i < 21; i++)
    {
        printf("\t%d.%s\t\t%.2f\n", (i + 1), continentalItemsNames[i], continentalItemsCost[i]);
    }
    int continentalChoice = 0, cq;
    printf("\n\nEnter the food number you want to order (or 0 to get other options): ");
    scanf("%d", &continentalChoice);
    printf("Enter the quantity: ");
    scanf("%d", &cq);
    if (continentalChoice > 0 && continentalChoice <= 21)
    {
        strcpy(resultOrder[*x], continentalItemsNames[continentalChoice - 1]);
        price[*x] = continentalItemsCost[continentalChoice - 1];

        quantity[*x] = cq;
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

/*int breakfastMenu(char resultOrder[255][255], int quantity[100], int price[100], int *x)
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
        {""}};
    float breakfastItemsCost[] = {130, 340, 200, 140, 170, 240, 210, 300, 360, 310, 120, 150, 200, 190, 220, 270, 180, 260, 300, 150, 240};
breakfastDisplay:
    printf("\n*******************************BREAKFAST*******************************\n");
    for (int i = 0; i < 21; i++)
    {
        printf("\t%d.%s\t\t%.2f\n", (i + 1), breakfastItemsNames[i], breakfastItemsCost[i]);
    }
    int breakfastChoice = 0, bq;
    printf("\n\nEnter the food number you want to order (or 0 to get other options): ");
    scanf("%d", &breakfastChoice);
    printf("Enter the quantity: ");
    scanf("%d", &bq);
    if (breakfastChoice > 0 && breakfastChoice <= 21)
    {
        strcpy(resultOrder[*x], breakfastItemsNames[breakfastChoice - 1]);
        price[*x] = breakfastItemsCost[breakfastChoice - 1];
        quantity[*x] = bq;
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
}*/
int soupsAndSaladsMenu(char resultOrder[255][255],int quantity[100], int price[100],  int *x)
{
    char soupsAndSaladsItemsNames[][255] = {
        {"Tomato Soup--------------------veg"},
        {"CLear Vegetable Soup-----------veg"},
        {"French Onion Soup--------------veg"},
        {"Crab And Corn Soup------------nveg"},
        {"Mushroom Soup------------------veg"},
        {"Chicken Soup------------------nveg"},
        {"Cream of Spinach Soup----------veg"},
        {"Rice Soup----------------------veg"},
        {"Shrimp Wonton Soup------------nveg"},
        {"Onion Egg Soup-----------------veg"},
        {"Caeser-------------------------veg"},
        {"Fresh Tuna Salad--------------nveg"},
        {"Asian Sesame Grain-------------veg"},
        {"Melon and Peach Salad----------veg"},
        {"Italian Salad------------------veg"},
        {"Green Salad--------------------veg"},
        {"Aloo Chana Salad---------------veg"},
        {"Peanut Coconut Salad-----------veg"},
        {"Coleslaw-----------------------veg"},
        {"Greek Salad--------------------veg"},
        {"Mixed Bean Salad---------------veg"}};
    float soupsAndSaladsItemsCost[] = {130, 340, 200, 140, 170, 240, 210, 300, 360, 310, 120, 150, 200, 190, 220, 270, 180, 260, 300, 150, 240};
soupsAndSaladsDisplay:
    printf("\n*******************************soupsAndSalads*******************************\n");
    for (int i = 0; i < 21; i++)
    {
        printf("\t%d.%s\t\t%.2f\n", (i + 1), soupsAndSaladsItemsNames[i], soupsAndSaladsItemsCost[i]);
    }
    int soupsAndSaladsChoice = 0, ss;
    printf("\n\nEnter the food number you want to order(or 0 to get other options): ");
    scanf("%d", &soupsAndSaladsChoice);
    printf("Enter the quantity: ");
    scanf("%d", &ss);
    if (soupsAndSaladsChoice > 0 && soupsAndSaladsChoice <= 21)
    {
        strcpy(resultOrder[*x], soupsAndSaladsItemsNames[soupsAndSaladsChoice - 1]);
        price[*x] = soupsAndSaladsItemsCost[soupsAndSaladsChoice - 1];
        quantity[*x] = ss;
        *x = *x + 1;
    }
    else if (soupsAndSaladsChoice == 0)
        goto firstTime;
    else
    {
        printf("Oops sorry! That item number doesn't exists. Please select again.\n");
        goto soupsAndSaladsDisplay;
    }
    printf("\n%s added to order!\n", soupsAndSaladsItemsNames[soupsAndSaladsChoice - 1]);
    printf("\n1.Do you want to add anything more from soupsAndSalads Menu?\n");
firstTime:
    if (soupsAndSaladsChoice == 0)
        printf("\n1.Do you want to see again the soupsAndSalads Menu?\n");
    printf("\n2.Do you want to step back and order from other options?\n");
    printf("\n3.Do you want to review and place your order?\n");
    int stepChoice = 0;
    scanf("%d", &stepChoice);
    if (stepChoice == 1)
        goto soupsAndSaladsDisplay;
    else if (stepChoice == 2)
        return 2;
    else if (stepChoice == 3)
        return 3;
}
int chineseMenu(char resultOrder[255][255], int quantity[100], int price[100],  int *x)
{
    char chineseItemsNames[][255] = {
        {"Veg Chow-----------------------veg"},
        {"Veg Manchurian-----------------veg"},
        {"Gobi Manchurian----------------veg"},
        {"Baby Corn Manchurian-----------veg"},
        {"Chinese Chopsuey---------------veg"},
        {"American Chopsuey--------------veg"},
        {"Chilli Garlic Noodles----------veg"},
        {"Schezwan Noodles---------------veg"},
        {"Chicken Noodles---------------nveg"},
        {"Veg Hakka Noodles--------------veg"},
        {"Fried Rice---------------------veg"},
        {"Steamed Dumplings--------------veg"},
        {"Crunchy Iceburg Dumplings------veg"},
        {"Pork Balls in Gravy-----------nveg"},
        {"Kung Pao Chicken--------------nveg"},
        {"Chow Mein----------------------veg"},
        {"Ma Po Tofu---------------------veg"},
        {"Honey Chilli Potato------------veg"}
        /*{""},
        {""},
        {""}*/};
    float chineseItemsCost[] = {130, 340, 200, 140, 170, 240, 210, 300, 360, 310, 120, 150, 200, 190, 220, 270, 180, 260};
chineseDisplay:
    printf("\n*******************************chinese*******************************\n");
    for (int i = 0; i < 18; i++)
    {
        printf("\t%d.%s\t\t%.2f\n", (i + 1), chineseItemsNames[i], chineseItemsCost[i]);
    }
    int chineseChoice = 0, cc;
    printf("\n\nEnter the food number you want to order(or 0 to get other options): ");
    scanf("%d", &chineseChoice);
    printf("Enter the quantity: ");
    scanf("%d", &cc);

    if (chineseChoice > 0 && chineseChoice <= 21)
    {
        strcpy(resultOrder[*x], chineseItemsNames[chineseChoice - 1]);
        quantity[*x] = cc;
        price[*x] = chineseItemsCost[chineseChoice - 1];
        *x = *x + 1;
    }
    else if (chineseChoice == 0)
        goto firstTime;
    else
    {
        printf("Oops sorry! That item number doesn't exists. Please select again.\n");
        goto chineseDisplay;
    }
    printf("\n%s added to order!\n", chineseItemsNames[chineseChoice - 1]);
    printf("\n1.Do you want to add anything more from chinese Menu?\n");
firstTime:
    if (chineseChoice == 0)
        printf("\n1.Do you want to see again the chinese Menu?\n");
    printf("\n2.Do you want to step back and order from other options?\n");
    printf("\n3.Do you want to review and place your order?\n");
    int stepChoice = 0;
    scanf("%d", &stepChoice);
    if (stepChoice == 1)
        goto chineseDisplay;
    else if (stepChoice == 2)
        return 2;
    else if (stepChoice == 3)
        return 3;
}

int dessertsMenu(char resultOrder[255][255], int quantity[100], int price[100], int *x)
{
    char dessertsItemsNames[][255] = {
        {"Chocolate Fondue                  "},
        {"Brownie Sundae                    "},
        {"Lemon Souffles                    "},
        {"Tiramisu layer Cake               "},
        {"Hot Fudge Cake                    "},
        {"Apple Pie                         "},
        {"Strawberry Cheesecake             "},
        {"Lemon Sorbet                      "},
        {"Oreo Cake                         "},
        {"Mysore Pak                        "},
        {"Rasmalai                          "},
        {"Indian Shrikhand                  "},
        {"Shahi Tukra                       "},
        {"Kulfi                             "},
        {"Gajar Ka Halwa                    "},
        {"Gulab Jamun                       "},
    };
    float dessertsItemsCost[] = {130, 340, 200, 140, 170, 240, 210, 300, 360, 310, 120, 150, 200, 190, 220, 270};
dessertsDisplay:
    printf("\n*******************************DESSERTS*******************************\n");
    for (int i = 0; i < 16; i++)
    {
        printf("\t%d.%s\t\t%.2f\n", (i + 1), dessertsItemsNames[i], dessertsItemsCost[i]);
    }
    int dessertsChoice = 0, dq;
    printf("\n\nEnter the food number you want to order (or 0 to get other options): ");
    scanf("%d", &dessertsChoice);
    printf("Enter the quantity: ");
    scanf("%d", &dq);
    if (dessertsChoice > 0 && dessertsChoice <= 21)
    {
        strcpy(resultOrder[*x], dessertsItemsNames[dessertsChoice - 1]);
        price[*x] = dessertsItemsCost[dessertsChoice - 1];

        quantity[*x] = dq;
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
int hotBeveragesMenu(char resultOrder[255][255], int quantity[100], int price[100], int *x)
{
    char hotBeveragesItemsNames[][255] = {
        {"Espresso                          "},
        {"Cappucino                         "},
        {"Mocha                             "},
        {"Masala Chai                       "},
        {"Butter Tea                        "},
        {"Hot Chocolate                     "},
        {"South Indian Filter Coffee        "},
        {"Hot Fruit Punch                   "},
        {"Kesaria Doodh                     "},
        {"Steamed Milk                      "},
        {"Caramel Latte                     "},

        /*{""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""},
        {""}*/
    };
    float hotBeveragesItemsCost[] = {130, 340, 200, 140, 170, 240, 210, 300, 360, 310, 120};
hotBeveragesDisplay:
    printf("\n*******************************HOT BEVERAGES*******************************\n");
    for (int i = 0; i < 11; i++)
    {
        printf("\t%d.%s\t\t%.2f\n", (i + 1), hotBeveragesItemsNames[i], hotBeveragesItemsCost[i]);
    }
    int hotBeveragesChoice = 0, hbq;
    printf("\n\nEnter the food number you want to order (or 0 to get other options): ");
    scanf("%d", &hotBeveragesChoice);
    printf("Enter the quantity: ");
    scanf("%d", &hbq);
    if (hotBeveragesChoice > 0 && hotBeveragesChoice <= 21)
    {
        strcpy(resultOrder[*x], hotBeveragesItemsNames[hotBeveragesChoice - 1]);
        price[*x] = hotBeveragesItemsCost[hotBeveragesChoice - 1];

        quantity[*x] = hbq;
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
int cocktailsAndSoftDrinksMenu(char resultOrder[255][255], int quantity[100], int price[100], int *x)
{
    char cocktailsAndSoftDrinksItemsNames[][255] = {

        {"Caprioska                         "},
        {"Mojito                            "},
        {"Cosmopolitan                      "},
        {"Long Island Ice tea               "},
        {"Pina Colada                       "},
        {"Sangaria                          "},
        {"Margarita                         "},
        {"Fresh Lime Squash                 "},
        {"Coconut Spritzer                  "},
        {"Pepsi                             "},
        {"Coca Cola                         "},
        {"Sprite                            "},
        {"Fruit Punch                       "},
        {"Iced Tea                          "},
        {"Shirley temple                    "},
        {"Lassi                             "},
        {"Cold Coffee                       "}
        /*{""},
        {""},
        {""},
        {""}*/};
    float cocktailsAndSoftDrinksItemsCost[] = {130, 340, 200, 140, 170, 240, 210, 300, 360, 310, 120, 150, 200, 190, 220, 270, 180};
cocktailsAndSoftDrinksDisplay:
    printf("\n*******************************COCKTAILS AND SOFTDRINKS*******************************\n");
    for (int i = 0; i < 17; i++)
    {
        printf("\t%d.%s\t\t%.2f\n", (i + 1), cocktailsAndSoftDrinksItemsNames[i], cocktailsAndSoftDrinksItemsCost[i]);
    }
    int cocktailsAndSoftDrinksChoice = 0, csq;
    printf("\n\nEnter the food number you want to order (or 0 to get other options): ");
    scanf("%d", &cocktailsAndSoftDrinksChoice);
    printf("Enter the quantity: ");
    scanf("%d", &csq);
    if (cocktailsAndSoftDrinksChoice > 0 && cocktailsAndSoftDrinksChoice <= 21)
    {
        strcpy(resultOrder[*x], cocktailsAndSoftDrinksItemsNames[cocktailsAndSoftDrinksChoice - 1]);
        quantity[*x] = csq;
        price[*x] = cocktailsAndSoftDrinksItemsCost[cocktailsAndSoftDrinksChoice - 1];
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