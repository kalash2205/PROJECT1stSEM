#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "menu.h"
#include "timeGap.h"
#include "bill.h"
#include "orderDisandPlace.h"
#include "custDetail.h"
int main()
{

        int x = 0;
        char menuOptions[][255] = {
            "APPETIZERS",
            "MAIN COURSE",
            "RICE",
            "BREADS",
            "SNACKS", //French, Spanish and Italian cuisine
            "SOUPS",
            "SALADS",
            "DESSERTS",
            "HOT BEVERAGES",
            "SOFT DRINKS",
            "CHINESE"};
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
                stepChoice = northIndianMenu(resultOrder, quantity, price, &x);

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
                stepChoice = southIndianMenu(resultOrder, quantity, price, &x);

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
                stepChoice = indianBreadsMenu(resultOrder, quantity, price, &x);
                {
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

                        stepChoice = continentalMenu(resultOrder, quantity, price, &x);
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
                case 7:
                        printf("\n");

                        stepChoice = dessertsMenu(resultOrder, quantity, price, &x);
{
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

                        stepChoice = hotBeveragesMenu(resultOrder, quantity, price, &x);
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
                case 9:
                        printf("\n");

                        stepChoice = cocktailsAndSoftDrinksMenu(resultOrder, quantity, price, &x);
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
                //inputdetails();

                return 0;
        }