
void displayBill(char resultOrder[255][255], int quantity[100], int price[100], int *x, cust id)
{
    float subtotal = 0;
    float discount;
    float nettotal;
    float service;
    float cgst;
    float sgst;
    float grandtotal;
    char ch='a';
    int i=1;

    //printf("\t\t*************************************************************************************************\n");
    printf("\t\t                                           P U Z Z L E S                                 \n");
    printf("\t\t                                             (address)                                          \n");
    printf("\t\t                                              phone                                            \n");
    printf("\t\t                                              website                                          \n");
    //printf("\t\t                                              //restaurant name                                  \n");
    printf("\t\tDate:                                                                        Bill no. :          \n");
    printf("\t\tTable no. :                                                                  Billed By:          \n");
    printf("\t\tCustomer Name:  %s                                                                                   \n", id.NAME);
    printf("\t\tCustomer Phone: %d                                                                                   \n", id.PHONE);


    printf("\t\t*************************************************************************************************\n");
    printf("\t\t                                           DINE IN                                               \n");
    printf("\t\t*************************************************************************************************\n\n\n");
    printf("\t\t_________________________________________________________________________________________________\n\n");
    printf("\t\tITEM                                    PRICE(in Rs.)              QUANTITY         AMOUNT(in Rs.)\n");
    printf("\t\t_________________________________________________________________________________________________\n\n");
    for (int i = 0; i < *x; i++)
    {
    printf("\t\t%s         %d                      %d                   %d", resultOrder[i], price[i], quantity[i], quantity[i] * price[i]);
    printf("\n");
    }
    printf("\n\t\t_________________________________________________________________________________________________\n\n");
    for (int i = 0; i < *x; i++)
    {
        subtotal += quantity[i] * price[i];
    }
    discount = 0.1 * subtotal;
    nettotal = subtotal - discount;
    service = 0.058 * nettotal;
    cgst = 0.025 * nettotal;
    sgst = 0.025 * nettotal;
    grandtotal = nettotal + service + cgst + sgst;

    printf("\t\t                                                                     -------------------------\n");
    printf("\t\t                                                         SUB TOTAL:                   %.2f\n", subtotal);
    printf("\t\t                                                         DISCOUNT @10% :                %.2f\n", discount);
    printf("\t\t                                                                     -------------------------\n");
    printf("\t\t                                                         NET TOTAL:                   %.2f\n", nettotal);
    printf("\t\t                                                         SERVICE TAX @5.8% :            %.2f\n", service);
    printf("\t\t                                                         CGST @2.5% :                   %.2f\n", cgst);
    printf("\t\t                                                         SGST @2.5% :                   %.2f\n", sgst);
    printf("\t\t===============================================================================================\n");
    printf("\t\tGRAND TOTAL:                                                                          %d.00\n", (int)grandtotal);
    printf("\t\t===============================================================================================\n\n");
    printf("\t\t                                         T H A N K    Y O U                                     \n\n");
    printf("\t\t***********************************************************************************************\n\n");
}