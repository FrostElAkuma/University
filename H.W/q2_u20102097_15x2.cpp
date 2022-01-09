#include <iostream>
#include <fstream>
#include <string.h>
#include <ctype.h>

using namespace std;

int main ()
{
    //declaring out variables
    char plainText, encryptText;
    int x;
    //Accessing files
    ifstream fromFile;
    ofstream toFile;
    fromFile.open("dText1.txt");
    toFile.open("eText.txt");

    cout<< "Please enter 1 for encryption or 2 for decryption: ";
    cin>> x;

   if(x == 1)
   {
    //while loop that runs as long as we did not reach the end of the file
    while(!fromFile.eof())
    {   //encrypting
        fromFile.get(plainText);

        if(plainText >= 'A' && plainText <= 'G')
        {
            encryptText = (int(plainText) + 19);
        }

        else if(plainText >= 'H' && plainText <= 'Z')
        {
            encryptText = (int(plainText) - 7);
        }

        else if(islower(plainText))
        {
            encryptText = (int(plainText) - 97 + 13) %26 +97;
        }

        else if(plainText >= 48 && plainText <= 57)
        {
            encryptText = (int(plainText) - 48 + 5) %10 +48;
        }

        else
        {
            encryptText = plainText;
        }

        toFile << encryptText;
    }
   }

   if(x == 2)
   {
    //while loop that runs as long as we did not reach the end of the file
    while(!fromFile.eof())
    {   //decrypting just reversed the encryption procces
        fromFile.get(plainText);

        if(plainText >= 'A' && plainText <= 'S')
        {
            encryptText = (int(plainText) + 7);
        }

        else if(plainText >= 'T' && plainText <= 'Z')
        {
            encryptText = (int(plainText) - 19);
        }

        else if(islower(plainText))
        {
            encryptText = (int(plainText) - 97 + 13) %26 +97;
        }

        else if(plainText >= 48 && plainText <= 57)
        {
            encryptText = (int(plainText) - 48 + 5) %10 +48;
        }

        else
        {
            encryptText = plainText;
        }

        toFile << encryptText;
    }
   }
    //closing files
    fromFile.close();
    toFile.close();
    //No errors
    return 0;
}








