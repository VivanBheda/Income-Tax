#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    double tax = get_double("What is your Income?");
    double scene1 = 12500;
    //Minimum tax if income is between INR 5 Lakh and INR 7.5 Lakh.
    double scene2 = 37500;
    //Minimum tax if income is between INR 7.5 Lakh and INR 10 Lakh.
    double scene3 = 75000;
    //Minimum tax if income is between INR 10 Lakh and INR 12.5 Lakh.
    double scene4 = 125000;
    //Minimum tax if income is between INR 12.5 Lakh and INR 15 Lakh.
    double scene5 = 187500;
    //Minimum tax if income is more than INR 15 Lakh.

    if (tax < 250000)
    //This code is for when income is less than INR 2.5 Lakh
    {
        printf("You don't have to pay any income tax.\n");
    }

    else if(250000 < tax && tax <= 500000)
    //This section is for when income is between INR 2.5 Lakh and INR 5 Lakh
    {
        double tax1 = tax - 250000;
        double finaltax = 0.05*tax1;
        printf("You need to pay Rs.%0.2f as Tax!\n", finaltax);
        double income = (tax - finaltax);
        printf("You have Rs.%0.2f as your disposable income!\n", income);
    }

    else if(500000 < tax && tax <= 750000)
    //This section is for when income is between INR 5 Lakh and INR 7.5 Lakh
    {
        double tax2 = tax - 500000;
        double finaltax = (0.1*tax2 + scene1);
        printf("You need to pay Rs.%0.2f as Tax!\n", finaltax);
        double income = (tax - finaltax);
        printf("You have Rs.%0.2f as your disposable income!\n", income);
    }

    else if(750000 < tax && tax <= 1000000)
    //This section is for when income is between INR 7.5 Lakh and INR 10 Lakh
    {
        double tax3 = tax - 750000;
        double finaltax = (0.15*tax3 + scene2);
        printf("You need to pay Rs.%0.2f as Tax!\n", finaltax);
        double income =tax - finaltax;
        printf("You have Rs.%0.2f as your disposable income!\n", income);
    }

    else if(1000000 < tax && tax <= 1250000)
    //This section is for when income is between INR 10 Lakh and INR 12.5 Lakh
    {
        double tax4 = tax - 1000000;
        double finaltax = (0.2*tax4 + scene3);
        printf("You need to pay Rs.%0.2f as Tax!\n", finaltax);
        double income = (tax - finaltax);
        printf("You have Rs.%0.2f as your disposable income!\n", income);
    }

    else if(1250000 < tax && tax <= 1500000)
    //This section is for when income is between INR 12.5 Lakh and INR 15 Lakh
    {
        double tax5 = tax - 1250000;
        double finaltax = (0.25*tax5 + scene4);
        printf("You need to pay Rs.%0.2f as Tax!\n", finaltax);
        double income = (tax - finaltax);
        printf("You have Rs.%0.2f as your disposable income!\n", income);
    }

    else if(1500000 < tax)
    //This section is for when income is more than INR 15 Lakh
    {
        double tax6 = tax - 1500000;
        double finaltax = (0.3*tax6 + scene5);
        printf("You need to pay Rs.%0.2f as Tax!\n", finaltax);
        double income = (tax - finaltax);
        printf("You have Rs.%0.2f as your disposable income!\n", income);
    }
    printf("Thank you for using my Income Tax Calculator!\n");
    /*This program is made to help people in India to calculatee their income tax.
    If you have any query then contact +919987652365 on whatsapp.*/
}
