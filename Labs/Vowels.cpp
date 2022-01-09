#include <iostream>
#include <cstring>
#include <cctype>
#include <iomanip>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
 //declaring out variables
 int vowels = 0, words = 1, spaces = 0, length;
 char text[150];
 //Prompting user for input
 cout<< "Enter a sentence: ";
  cin.get(text, 150);
 //Getting the length of the text
 length = strlen(text);
 //for loop that goes over every letter
 for (int i = 0; i < length; i++)
 {

  if (tolower(text[i]) == 'i' || tolower(text[i]) == 'e' || tolower(text[i]) == 'o' || tolower(text[i]) == 'a' || tolower(text[i]) == 'u')
  {
      vowels++;
  }

  else if (text[i] == 32)
  {
      words++;
      spaces++;
  }

 }
 //outputting results
 cout<< "There are " << vowels << " vowel letters, " << spaces << " spaces and " << words <<
 " words in the sentence." << endl;

 return 0;
}
