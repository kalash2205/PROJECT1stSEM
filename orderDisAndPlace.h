void orderDisplay(char* resultOrder)//[255][255])
{
    if (resultOrder != NULL && resultOrder[0] != NULL)
    {
        printf("Your order so far: \n");
        for (int i = 0; i < strlen(resultOrder); i++)
        {
            printf("\t%d.%s\n", (i + 1), resultOrder[i]);
        }
    }
}