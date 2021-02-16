#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "menu.h"
#include "timeGap.h"
#include "bill.h"
#include "orderDisandPlace.h"

int main()
{
        int x=0;
        char menuOptions[8][255] ={
                "STARTERS",
                "NORTH INDIAN",
                "SOUTH INDIAN",
                "CONTINENTAL", //French, Spanish and Italian cuisine
                "SANDWICHES",
                "DESSERTS",
                "HOT BEVERAGES",
                "COCKTAILS AND SOFT DRINKS",
            };
        char resultOrder[255][255];           
        printf("\033[1m\t\t\t\033[7mWELCOME TO PUZZLES!!\033[0m\n\n\n");
        initialMenuBegin:
        printf("\n");
        int choiceMenu= upperLayerMenu(menuOptions);
        switch(choiceMenu)
        {
                case 1: printf("\n*******************************");
                        printf("%s", menuOptions[0]);
                        printf("*******************************\n");
                        int stepChoice=0;
                        stepChoice=startersMenu(resultOrder, &x);
                        if(stepChoice==2)
                        goto initialMenuBegin;
                        else if(stepChoice==3)
                        {
                                orderDisplay(resultOrder, &x);
                                int chFin=0;
                                printf("\n1. Place the order.");
                                if(chFin==1)
                                goto placedOrder;
                        }
                        break;
                case 2: printf("\n*****************");
                        printf("%s", menuOptions[1]);
                        printf("*****************\n");
                        break;
                case 3: printf("\n*****************");
                        printf("%s", menuOptions[2]);
                        printf("*****************\n");
                        break;
                case 4: printf("\n*****************");
                        printf("%s", menuOptions[3]);
                        printf("*****************\n");
                        break;
                case 5: printf("\n*****************");
                        printf("%s", menuOptions[4]);
                        printf("*****************\n");
                        break;
                case 6: printf("\n*****************");
                        printf("%s", menuOptions[5]);
                        printf("\n*****************\n");
                        break;
                case 7: printf("*****************");
                        printf("%s", menuOptions[6]);
                        printf("\n*****************\n");
                        break;
                case 8: printf("*****************");
                        printf("%s", menuOptions[7]);
                        printf("\n*****************\n");
                        break;
                default: printf("Sorry, thats not a valid menu choice\n\n");
                         break;
                
        }
        placedOrder:
        //timegap(10);
        //displayBill();
        return 0;
}