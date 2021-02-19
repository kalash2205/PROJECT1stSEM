
void displayBill(char resultorder[255][255], int quantity[100], int price[100], int *x)
{
    float subtotal;
    float discount;
    float nettotal;
    float service;
    float cgst;
    float sgst;
    float grandtotal;

    printf("\t\t************************************************************************************\n");
    printf("\t\t                                     BILL                                      \n");
    printf("\t\t************************************************************************************\n\n\n");
    printf("\t\t________________________________________________________________________________\n");
    printf("\t\tITEM\t\tQUANTITY\t\tPRICE(in Rs.)\t\tAMOUNT(in Rs.)\n");
    printf("\t\t________________________________________________________________________________\n\n\n\n");
    for (int i = 0; i < *x; i++)
    {
        printf("\t\t%s\t\t%d\t\t%d\t\t%d", resultorder[i][255], quantity[i], price[i], quantity[i] * price[i]);
    }

    printf("\t\t________________________________________________________________________________\n\n");
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

    printf("\t\t                                                       -------------------------\n");
    printf("\t\t                                            SUB TOTAL:                   %.2f       \n", subtotal);
    printf("\t\t                                            DISCOUNT @10% :              %.2f     \n", discount);
    printf("\t\t                                                       -------------------------\n");
    printf("\t\t                                            NET TOTAL:                   %.2f       \n", nettotal);
    printf("\t\t                                            SERVICE TAX @5.8% :          %.2f      \n", service);
    printf("\t\t                                            CGST @2.5% :                 %.2f       \n", cgst);
    printf("\t\t                                            SGST @2.5% :                 %.2f       \n", sgst);
    printf("\t\t--------------------------------------------------------------------------------\n");
    printf("\t\tGRAND TOTAL:                                                             %d      \n", (int)grandtotal);
    printf("\t\t--------------------------------------------------------------------------------\n");
}
