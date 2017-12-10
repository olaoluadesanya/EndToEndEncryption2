/* First bite on the encryption problem. Only simple selection and conditional statements  *
 * used. The aim is to test data hiding. Reversing a modulus is harder than i expected so  *
 * i hard coded the reverse numbers int the decrypt member function. One bug i noticed is  *
 * when the integer starts with a number 0, type int will convert to a 3 digit integer.    */

#include "Encryption.h"
#include <iostream>

using namespace std;

Encryption::Encryption(int num)
{
    setNumber(num);//ctor
}


void Encryption::encryptNumber()
{
    int dig1, dig2, dig3, dig4;

    //mathematical manipulations to extract digits, add 7, then get the modulus of 10(encryption strategy)
   dig4 = ((number % 10) + 7) % 10;
   dig3 = ((number / 10 % 10) + 7) % 10;
   dig2 = ((number / 100 % 10) + 7) % 10;
   dig1 = ((number / 1000 ) + 7) % 10;

   //swap digits using a temp value(more encryption strategy)
    int temp = dig1;
    dig1 = dig3;
    dig3 = temp;
    temp = dig2;
    dig2 = dig4;
    dig4 = temp;



   //use place values to re-combine integer
   int num = (dig1 *1000) + (dig2 * 100) + (dig3 * 10) + (dig4);

   setNumber(num);
}
//to reverse modulus operation, hard code from 8 to 16
int Encryption::decrypt(int dig)
    {
        switch(dig)
        {
            case 6:
                dig = 9;
                break;
            case 5:
                dig = 8;
                break;
            case 4:
                dig = 7;
                break;
            case 3:
                dig = 6;
                break;
            case 2:
                dig = 5;
                break;
            case 1:
                dig = 4;
                break;
            case 0:
                dig = 3;
                break;
            case 9:
                dig = 2;
                break;
            case 8:
                dig = 1;
                break;
            case 7:
                dig = 0;
                break;
        }
        return dig;
    }
void Encryption::decryptNumber()
{
    int dig1, dig2, dig3, dig4;
    //mathematical manipulations to extract digits
   dig4 = number % 10;
   dig3 = number / 10 % 10;
   dig2 = number / 100 % 10;
   dig1 = number / 1000 ;


    // Reverse swap with temp
    int temp = dig1;
    dig1 = dig3;
    dig3 = temp;
    temp = dig2;
    dig2 = dig4;
    dig4 = temp;

    //now use the decrypt function
    dig1 = decrypt(dig1);
    dig2 = decrypt(dig2);
    dig3 = decrypt(dig3);
    dig4 = decrypt(dig4);

    //place values to reconstruct number
    int num = (dig1 *1000) + (dig2 * 100) + (dig3 * 10) + (dig4);

    setNumber(num);
}
void Encryption::getNumber() const
{
    cout << number;
}

//check if four digits then set number
void Encryption::setNumber(int numb)
{

    //validity test for 4 digit number
   if (numb < 1000 || numb >= 10000)
       cerr << "number is not a 4 digit number" << endl;
    else number = numb;

}
