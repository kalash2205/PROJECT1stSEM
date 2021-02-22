void displayBill(char resultOrder[255][255], int quantity[100], int price[100], int *x, cust id, int discountChoice)
{
    float subtotal = 0;
    float discount=0;
    float nettotal;
    float service;
    float cgst;
    float sgst;
    float grandtotal;
    char waiter[10][10]={"Ramesh", "Karan", "Puneet", "Mohit", "Avinash", "Jaspreet", "Sameer", "Deep", "Gaurav", "Harsh"};
    int billno = (rand()%10000)+1000;//random 4 digit no.
    int tableno = (rand()%51)+1;
    int i=(rand()%10);
    time_t t;
    time(&t);
    char date[25];
    strncpy(date, ctime(&t), 24);
    //printf("\t\t*************************************************************************************************\n");
    printf("\t\t|oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo|\n");
    printf("\t\t|                                           P U Z Z L E S                                          |\n");
    printf("\t\t|                                            (address)                                             |\n");
    printf("\t\t|                                              phone                                               |\n");
    printf("\t\t|                                              website                                             |\n");
    printf("\t\t|Date and Time:%s                                              Bill no. :%d|\n", date, billno);
    printf("\t\t|Table no. : %d                                                              Waiter:%0*s              \n", tableno, 10, waiter[i]);
    printf("\t\t|Customer Name:  %s                                                                                 \n", id.NAME);
    printf("\t\t|Customer Phone: %d                                                                                 \n", id.PHONE);


    printf("\t\t|oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo|\n");
    printf("\t\t|                                             DINE IN                                              |\n");
    printf("\t\t|oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo|\n");
    printf("\t\t|oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo|\n");
    printf("\t\t|ITEM                                    PRICE(in Rs.)              QUANTITY         AMOUNT(in Rs.)|\n");
    printf("\t\t|oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo|\n");
    for (int i = 0; i < *x; i++)
    {
        if(quantity[i]<10)
            printf("\t\t%s         %d                      %d                   %d", resultOrder[i], price[i], quantity[i], quantity[i] * price[i]);
        else
            printf("\t\t%s         %d                      %d                   %d", resultOrder[i], price[i], quantity[i], quantity[i] * price[i]);   
    printf("\n");
    }
    printf("\t\t|oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo|\n");
    for (int i = 0; i < *x; i++)
    {
        subtotal += quantity[i] * price[i];
    }
    if (discountChoice==1)
    discount = 0.1 * subtotal;
    nettotal = subtotal - discount;
    service = 0.058 * nettotal;
    cgst = 0.025 * nettotal;
    sgst = 0.025 * nettotal;
    grandtotal = nettotal + service + cgst + sgst;

    printf("\t\t|                                                                    ------------------------------|\n");
    printf("\t\t|                                                         SUB TOTAL:                   %.2f        \n", subtotal);
    printf("\t\t|                                                         DISCOUNT @10% :                %.2f        \n", discount);
    printf("\t\t|                                                                    ------------------------------\n");
    printf("\t\t|                                                         NET TOTAL:                   %.2f         \n", nettotal);
    printf("\t\t|                                                         SERVICE TAX @5.8% :            %.2f       \n", service);
    printf("\t\t|                                                         CGST @2.5% :                   %.2f       \n", cgst);
    printf("\t\t|                                                         SGST @2.5% :                   %.2f       \n", sgst);
    printf("\t\t|==================================================================================================|\n");
    printf("\t\t|GRAND TOTAL:                                                                          %d.00       \n", (int)grandtotal);
    printf("\t\t|==================================================================================================|\n");
    printf("\t\t|                                        T H A N K    Y O U                                        |\n");
    printf("\t\t|oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo|\n");
    printf("\t\t|oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo|\n");

}