/*
    Written by Kanayo Emenike
    9/13/2021
    ccvalid8r-v1.cpp

    Description:
        This program checks a credit card using the Luhn Algorithm to see
        if the number is a valid Credit Card Number. The entire code is
        contained to this one document to simplify GitHub pushes for my 
        independent endeavors.

        -Side Note - Most of the code was written before I knew about stoull().
                -V2 will be using stoull.

    Currently Working On:
        -Creating Luhn Algo.
*/
//Luhn Algorithm
/*
        This algo is used to create and validate credit card numbers.
        Widely used in the industry, this algorithm multiplies every
        other digit by 2 and adds up the sum. If the sum ends in a 0
        the number is a valid number. 
*/
//All Credit Card Company Cards Start with...
//Visa - 4
//AMEX - 34 or 37
//Mastercard - 5
//Discover - 6

#include <iostream>
#include <string>
#include <cstring>
#include <cmath>

using namespace std;

bool entryCheck(string);

//Classes
class CreditCard
{
private:
    unsigned __int64 cardNumber = 0;
    int cardNum_arr[16] = {-1};
    int card1[4] = {-1};
    int card2[4] = {-1};
    int card3[4] = {-1};
    int card4[4] = {-1};

public:
    void setCardNumber(string inputNumber)
    {
        //I need this because stoi and atoi cant work with a character input value??
        string temp;
        if (inputNumber.length() == 16)
        {

            for (int i = 0; i < (int)inputNumber.length(); i++)
            {
                //Setting Card Number Array
                if (i < 16)
                {
                    temp = inputNumber[i];
                    cardNum_arr[i] = stoi(temp);
                }

                //Setting Card Segments
                if (i < 4)
                {
                    temp = inputNumber[i];
                    card1[i] = stoi(temp);
                }
                else if (i < 8)
                {
                    temp = inputNumber[i];
                    card2[i - 4] = stoi(temp);
                }
                else if (i < 12)
                {
                    temp = inputNumber[i];
                    card3[i - 8] = stoi(temp);
                }
                else if (i < 16)
                {
                    temp = inputNumber[i];
                    card4[i - 12] = stoi(temp);
                }
            }
        }
        for (int i = 0; i < (int)inputNumber.length(); i++)
        {
            temp = inputNumber[i];
            cardNumber = cardNumber + pow(10, ((int)inputNumber.length() - i - 1)) * stoi(temp);
        }
    }

    unsigned __int64 getCardNumber()
    {
        return cardNumber;
    }

    int getCardSegment(int segment)
    {
        int temp = 0;
        switch (segment)
        {
        case 1:
            for (int i = 3; i >= 0; i--)
            {
                temp = temp + pow(10, i) * card1[3 - i];
            }
            return temp;
        case 2:
            for (int i = 3; i >= 0; i--)
            {
                temp = temp + pow(10, i) * card1[3 - i];
            }
            return temp;
        case 3:
            for (int i = 3; i >= 0; i--)
            {
                temp = temp + pow(10, i) * card1[3 - i];
            }
            return temp;
        case 4:
            for (int i = 3; i >= 0; i--)
            {
                temp = temp + pow(10, i) * card1[3 - i];
            }
            return temp;
        default:
            return -1;
        }
    }

    bool checkValid()
    {
        bool validity = false;

        if (calcLuhn() % 10 == 0)
        {
            validity = true;
        }
        else
        {
            validity = false;
        }

        return validity;
    }

    int calcLuhn()
    {
        int result = -1;
        int cardHalf1[8] = {-1};
        int cardHalf2[8] = {-1};
        int temp1 = 0, temp2 = 0;

        for (int i = 0; i < 16; i++)
        {
            if (i % 2 == 0)
            {
                cardHalf1[temp1] = cardNum_arr[i];
                temp1++;
            }
            else
            {
                cardHalf2[temp2] = cardNum_arr[i];
                temp2++;
            }
        }

        for (int i = 0; i < 8; i++)
        {
            cardHalf1[i] = 2 * cardHalf1[i];
            if (cardHalf1[i] >= 10)
            {
                cardHalf1[i] = (cardHalf1[i] % 10) + (cardHalf1[i] / 10);
            }
        }

        for (int i = 0; i < 8; i++)
        {
            result = result + cardHalf1[i] + cardHalf2[i];
        }

        return result;
    }
};

//Functions
bool entryCheck(string str)
{
    bool isNum = true;
    for (int i = 0; i < (int)str.length(); i++)
    {
        if (!isdigit(str[i]))
        {
            isNum = false;
        }
    }

    if ((int)str.length() != 16)
    {
        isNum = false;
    }
    return isNum;
}

//Main

int main(int argc, char *argv[])
{

    //Date format M|MM/D|DD/YYYY"
    string updatedDate = "9/3/2021";
    string cardNumber = "-1";
    bool complete = false;
    CreditCard cc;

    cout << "This program validates Credit Card Numbers.\n";
    cout << "This program was last updated " << updatedDate << ".\n";
    cout << "At the time of writing this, the program can\n";
    cout << "validate any card 16-digit card from the companies \n";
    cout << "Visa, American Express, MasterCard, Discover.\n\n";
    cout << "Please enter the card number, then press enter.\n";
    cout << "Entry: ";
    cin >> cardNumber;

    do
    {
        if (entryCheck(cardNumber))
        {
            complete = true;
        }
        else
        {
            complete = false;
            cout << "Please enter 16-digit number: ";
            cin >> cardNumber;
        }
    } while (!complete);

    cc.setCardNumber(cardNumber);

    if (cc.checkValid() == 0)
    {
        cout << "The credit card number " << cc.getCardNumber() << " is valid.\n";
    }
    else
    {
        cout << "The credit card number " << cc.getCardNumber() << " is not valid.\n";
    }

    return 0;
}
