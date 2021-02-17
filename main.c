#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "menu.h"
#include "timeGap.h"
#include "bill.h"
#include "orderDisandPlace.h"

int main()
{
        int x = 0;
        char menuOptions[][255] = {
            "STARTERS",
            "NORTH INDIAN",
            "SOUTH INDIAN",
            "INDIAN BREADS",
            "CONTINENTAL", //French, Spanish and Italian cuisine
            "BREAKFAST",
            "DESSERTS",
            "HOT BEVERAGES",
            "COCKTAILS AND SOFT DRINKS",
        };
        char resultOrder[255][255];
        printf("\033[1m\t\t\t\033[7mWELCOME TO PUZZLES!!\033[0m\n\n\n");
initialMenuBegin:
        printf("\n");
        int choiceMenu = upperLayerMenu(menuOptions);
        int stepChoice = 0;
        switch (choiceMenu)
        {
        case 1:
                printf("\n");
                stepChoice = startersMenu(resultOrder, &x);
                if (stepChoice == 2)
                        goto initialMenuBegin;
                else if (stepChoice == 3)
                {
                        orderDisplay(resultOrder, &x);
                        int chFin = 0;
                        printf("\n1. Place the order.");
                        scanf("%d", &chFin);
                        if (chFin == 1)
                                goto placedOrder;
                }
                break;
        case 2:
                printf("\n");
                stepChoice = northIndianMenu(resultOrder, &x);
                if (stepChoice == 2)
                        goto initialMenuBegin;
                else if (stepChoice == 3)
                {
                        orderDisplay(resultOrder, &x);
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
                stepChoice = indianBreadsMenu(resultOrder, &x);
                if (stepChoice == 2)
                        goto initialMenuBegin;
                else if (stepChoice == 3)
                {
                        orderDisplay(resultOrder, &x);
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

                stepChoice = continentalMenu(resultOrder, &x);
                if (stepChoice == 2)
                        goto initialMenuBegin;
                else if (stepChoice == 3)
                {
                        orderDisplay(resultOrder, &x);
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

                stepChoice = breakfastMenu(resultOrder, &x);
                if (stepChoice == 2)
                        goto initialMenuBegin;
                else if (stepChoice == 3)
                {
                        orderDisplay(resultOrder, &x);
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

                stepChoice = dessertsMenu(resultOrder, &x);
                if (stepChoice == 2)
                        goto initialMenuBegin;
                else if (stepChoice == 3)
                {
                        orderDisplay(resultOrder, &x);
                        int chFin = 0;
                        printf("\n1. Place the order.\n");
                        printf("Enter your choice: ");
                        scanf("%d", &chFin);
                        if (chFin == 1)
                                goto placedOrder;
                }
                break;
        case 7:
                printf("\n");

                stepChoice = hotBeveragesMenu(resultOrder, &x);
                if (stepChoice == 2)
                        goto initialMenuBegin;
                else if (stepChoice == 3)
                {
                        orderDisplay(resultOrder, &x);
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

                stepChoice = cocktailsAndSoftDrinksMenu(resultOrder, &x);
                if (stepChoice == 2)
                        goto initialMenuBegin;
                else if (stepChoice == 3)
                {
                        orderDisplay(resultOrder, &x);
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
                break;
        }
placedOrder:
        //timegap(10);
        //displayBill();
        return 0;
}