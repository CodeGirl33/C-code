#include <stdio.h>
#include <cs50.h>


//prototype of functions used in the program
int cardLength(long n);
bool cardValidity(long card_no);
bool checkSum(long cn);
void cardName(long card_no);
//variables used in the program


int main(void)
{
    long card_no;

    do
    {

    card_no = get_long("Number: ");

    }
    while (card_no <= 0);

    if (cardValidity(card_no))   /*if the function cardValidity is True, then fuction cardName is called
                                    and credit card ame is printed*/
    {
        cardName(card_no);
    }
    else
        printf("INVALID\n");
}

bool cardValidity(long card_no) //this function validates the card number by first checking the card length for card_no,
                                //and if True, then by calling the function checkSum;

{
    int l = cardLength(card_no);

    return (l == 13 || l == 15 || l == 16) && checkSum(card_no);

}

int cardLength(long n) //this function counts all the digits of the card number;

{
    int l = 0;

    for (l = 0; n != 0; n /= 10, l++);
    return l;
}


bool checkSum(long cn) //this function executes the Luhn's Algorithm for card_no;

{
    int sum = 0;
    int i = 0;
    for (i = 0; cn != 0;cn /= 10)
        i++;
    {
        if(i % 2 == 0)
        sum += cn % 10;

        else
        {
            int d = 2*(cn % 10);
            sum += d / 10 + d %10;
        }
    }
    return (sum % 10) == 0;
}


void cardName(long card_no)

{
    if ((card_no >= 34E13 && card_no <= 38E13) || (card_no >= 37E13 && card_no < 38E13))
        printf("AMEX\n");

    else if (card_no >= 51E14 && card_no < 56E14)
        printf("MASTERCARD\n");

    else if ((card_no >= 4E12 || card_no < 5E12) || (card_no == 4E15 && card_no < 5E15))
        printf("VISA\n");

    else
        printf("INVALID\n");
}


