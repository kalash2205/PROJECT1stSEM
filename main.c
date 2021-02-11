#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "menu.h"
#include "timeGap.h"
char menu[]="HelloWorld";

int main()
{
        char menuOptions[255][255]={
        {"       Starters"},
        {"     North Indian"},
        {"     South Indian"},
        {"      Continental"},        //French, Spanish and Italian cuisine
        {"      Sandwiches"}, 
        {"       Desserts"},
        {"     Hot Beverages"},
        {"Cocktails and Soft Drinks"}
};

        printf("\033[1m\t\t\t\033[7mWELCOME TO PUZZLES!!\033[0m\n\n\n");
        //timegap(10);
        upperLayerMenu(menuOptions);
}