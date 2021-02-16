void orderDisplay(char resultOrder[255][255], int *x)
{
    printf("Your order so far: \n");
    for (int i = 0; i < *x; i++)
    {
        printf("\t%d.%s\n", (i + 1), resultOrder[i]);
    }
}