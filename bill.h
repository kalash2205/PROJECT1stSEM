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
    printf("\t\t __________________________________________________________________________________________________\n");
    printf("\t\t|                                                                                                  |\n");
    printf("\t\t|                                           P U Z Z L E S                                          |\n");
    printf("\t\t|                                            Silver City                                           |\n");
    printf("\t\t|                                            0172221856                                            |\n");
    printf("\t\t|__________________________________________________________________________________________________|\n");
    printf("\t\t|Date and Time:%s                                              Bill no. :%d|\n", date, billno);
    printf("\t\t|Table no. : %02d                                                                Waiter:%-13s|\n", tableno, waiter[i]);
    printf("\t\t|Customer Name: %-20s                                                               |\n", id.NAME);
    printf("\t\t|Customer Phone: %012s                                                                      |\n", id.PHONE);
    printf("\t\t|**************************************************************************************************|\n");
    printf("\t\t|                                             DINE IN                                              |\n");
    printf("\t\t|**************************************************************************************************|\n");
    printf("\t\t|__________________________________________________________________________________________________|\n");
    printf("\t\t|ITEM                                    PRICE(in Rs.)              QUANTITY         AMOUNT(in Rs.)|\n");
    printf("\t\t|__________________________________________________________________________________________________|\n");
    for (int i = 0; i < *x; i++)
    {
        if(quantity[i]<10)
    printf("\t\t|%s         %d                      %02d                  %5d     |", resultOrder[i], price[i], quantity[i], quantity[i] * price[i]);
        else                                                                    
    printf("\t\t|%s         %d                      %02d                  %5d     |", resultOrder[i], price[i], quantity[i], quantity[i] * price[i]);   
    printf("\n");
    }
    printf("\t\t|__________________________________________________________________________________________________|\n");
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
    printf("\t\t|                                                         SUB TOTAL:                  %-8.2f     |\n", subtotal);
    printf("\t\t|                                                         DISCOUNT @10% :               %-8.2f     |\n", discount);
    printf("\t\t|                                                                    ------------------------------|\n");
    printf("\t\t|                                                         NET TOTAL:                  %-8.2f     |\n", nettotal);
    printf("\t\t|                                                         SERVICE TAX @5.8% :           %-8.2f     |\n", service);
    printf("\t\t|                                                         CGST @2.5% :                  %-8.2f     |\n", cgst);
    printf("\t\t|                                                         SGST @2.5% :                  %-8.2f     |\n", sgst);
    printf("\t\t|==================================================================================================|\n");
    printf("\t\t|GRAND TOTAL(in Rs.):                                                                 %-7d      |\n", (int)grandtotal);
    printf("\t\t|==================================================================================================|\n");
    printf("\t\t|                                        T H A N K    Y O U                                        |\n");
    printf("\t\t|**************************************************************************************************|\n");
    printf("\t\t|__________________________________________________________________________________________________|\n");

}