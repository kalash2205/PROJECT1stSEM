typedef struct
        {
                char NAME[50];
                char PHONE[15];
        }cust;
        cust id;
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "menu.h"
#include "timeGap.h"
#include "bill.h"
#include "orderDisandPlace.h"
#include "game.h"
#include "custDetail.h"
 
        
int main()
{
        //clrscr();
        
        int x = 0;
        char menuOptions[][255] = {
            "STARTERS",
            "NORTH INDIAN",
            "SOUTH INDIAN",
            "CONTINENTAL",
            "INDIAN BREADS",
            "CHINESE", //French, Spanish and Italian cuisine
            "SOUPS AND SALADS",
            "DESSERTS",
            "HOT BEVERAGES",
            "SOFT DRINKS",
        };
        char resultOrder[255][255];
        int quantity[100];
        int price[100];
        printf("\033[1m\t\t\t\033[7mWELCOME TO PUZZLES!!\033[0m\n\n\n");
initialMenuBegin:
        printf("\n");
        int choiceMenu = upperLayerMenu(menuOptions);
        int stepChoice = 0;
        switch (choiceMenu)
        {
        case 1:
                printf("\n");
                stepChoice = startersMenu(resultOrder, quantity, price, &x);

                if (stepChoice == 2)
                        goto initialMenuBegin;
                else if (stepChoice == 3)
                {
                        orderDisplay(resultOrder, &x, quantity);
                        int chFin = 0;
                        printf("\n1. Place the order.");
                        scanf("%d", &chFin);
                        if (chFin == 1)
                                goto placedOrder;
                }
                else
                break;
        case 2:
                printf("\n");
                stepChoice = northIndianMenu(resultOrder, quantity, price, &x);

                if (stepChoice == 2)
                        goto initialMenuBegin;
                else if (stepChoice == 3)
                {
                        orderDisplay(resultOrder, &x, quantity);
                        int chFin = 0;
                        printf("\n1. Place the order.\n");
                        printf("Enter your choice: ");
                        scanf("%d", &chFin);
                        if (chFin == 1)
                                goto placedOrder;
                }
                break;
        case 3:
                printf("\n");
                stepChoice = southIndianMenu(resultOrder, quantity, price, &x);

                if (stepChoice == 2)
                        goto initialMenuBegin;
                else if (stepChoice == 3)
                {
                        orderDisplay(resultOrder, &x, quantity);
                        int chFin = 0;
                        printf("\n1. Place the order.\n");
                        printf("Enter your choice: ");
                        scanf("%d", &chFin);
                        if (chFin == 1)
                                goto placedOrder;
                }
                break;
        case 4:
                printf("\n");

                stepChoice = continentalMenu(resultOrder, quantity, price, &x);
                if (stepChoice == 2)
                        goto initialMenuBegin;
                else if (stepChoice == 3)
                {
                        orderDisplay(resultOrder, &x, quantity);
                        int chFin = 0;
                        printf("\n1. Place the order.\n");
                        printf("Enter your choice: ");
                        scanf("%d", &chFin);
                        if (chFin == 1)
                                goto placedOrder;
                }
                break;
        case 5:
                printf("\n");
                stepChoice = indianBreadsMenu(resultOrder, quantity, price, &x);

                if (stepChoice == 2)
                        goto initialMenuBegin;
                else if (stepChoice == 3)
                {
                        orderDisplay(resultOrder, &x, quantity);
                        int chFin = 0;
                        printf("\n1. Place the order.\n");
                        printf("Enter your choice: ");
                        scanf("%d", &chFin);
                        if (chFin == 1)
                                goto placedOrder;
                }
                break;

        case 6:
                printf("\n");
                stepChoice = chineseMenu(resultOrder, quantity, price, &x);
                if (stepChoice == 2)
                        goto initialMenuBegin;
                else if (stepChoice == 3)
                {
                        orderDisplay(resultOrder, &x, quantity);
                        int chFin = 0;
                        printf("\n1. Place the order.\n");
                        printf("Enter your choice: ");
                        scanf("%d", &chFin);
                        if (chFin == 1)
                                goto placedOrder;
                }

                /*stepChoice = breakfastMenu(resultOrder, quantity, price, &x);
                if (stepChoice == 2)
                        goto initialMenuBegin;
                else if (stepChoice == 3)
                {
                        orderDisplay(resultOrder, &x, quantity);
                        int chFin = 0;
                        printf("\n1. Place the order.\n");
                        printf("Enter your choice: ");
                        scanf("%d", &chFin);
                        if (chFin == 1)
                                goto placedOrder;
                }*/
                break;
        case 7:

                stepChoice = soupsAndSaladsMenu(resultOrder, quantity, price, &x);
                if (stepChoice == 2)
                        goto initialMenuBegin;
                else if (stepChoice == 3)
                {
                        orderDisplay(resultOrder, &x, quantity);
                        int chFin = 0;
                        printf("\n1. Place the order.\n");
                        printf("Enter your choice: ");
                        scanf("%d", &chFin);
                        if (chFin == 1)
                                goto placedOrder;
                }
                break;
        case 8:
                printf("\n");

                stepChoice = dessertsMenu(resultOrder, quantity, price, &x);
                if (stepChoice == 2)
                        goto initialMenuBegin;
                else if (stepChoice == 3)
                {
                        orderDisplay(resultOrder, &x, quantity);
                        int chFin = 0;
                        printf("\n1. Place the order.\n");
                        printf("Enter your choice: ");
                        scanf("%d", &chFin);
                        if (chFin == 1)
                                goto placedOrder;
                }
                break;
        case 9:
                printf("\n");

                stepChoice = hotBeveragesMenu(resultOrder, quantity, price, &x);
                if (stepChoice == 2)
                        goto initialMenuBegin;
                else if (stepChoice == 3)
                {
                        orderDisplay(resultOrder, &x, quantity);
                        int chFin = 0;
                        printf("\n1. Place the order.\n");
                        printf("Enter your choice: ");
                        scanf("%d", &chFin);
                        if (chFin == 1)
                                goto placedOrder;
                }
                break;
        case 10:
                printf("\n");

                stepChoice = cocktailsAndSoftDrinksMenu(resultOrder, quantity, price, &x);
                if (stepChoice == 2)
                        goto initialMenuBegin;
                else if (stepChoice == 3)
                {
                        orderDisplay(resultOrder, &x, quantity);
                        int chFin = 0;
                        printf("\n1. Place the order.\n");
                        printf("Enter your choice: ");
                        scanf("%d", &chFin);
                        if (chFin == 1)
                                goto placedOrder;
                }
                break;
        default:
                printf("Sorry, thats not a valid menu choice\n\n");
                goto initialMenuBegin;
                break;
        }
placedOrder:
        printf("\nYOUR ORDER HAS BEEN SUCCESSFULLY PLACED!!\nIt will be served shortly..\n\n");
        printf("Would you like to play a guessing game while the food's coming?(Y/N): ");
        char gameChoice;
        scanf(" %c", &gameChoice);
        int gameDiscountOffer=0;
        if (gameChoice == 'Y' || gameChoice == 'y')
        {
                gameDiscountOffer=guessGame();
                if(gameDiscountOffer==1)
                printf("For winning the game, we have applied a discount of 10\% to your order!\n");
        }
        else
        {
                printf("Alright! Wait for sometime\n\n\n");
                timegap(10);
        }
        printf("Please enter your details for bill generation: \n");
        inputdetails(id);
        displayBill(resultOrder, quantity, price, &x, id, gameDiscountOffer);
        return 0;
}