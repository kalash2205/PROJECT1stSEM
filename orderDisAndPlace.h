void orderDisplay(char resultOrder[255][255], int *x, int quantity[])
{
    printf("Your order so far: \n");
    printf("\t  \033[2mITEMS\t\t\tQUANTITY\033[0m\n");
    for (int i = 0; i < *x; i++)
    {
        printf("\t%d.%s\t\t%d\n", (i + 1), resultOrder[i], quantity[i]);
    }
}