#include <iostream>
#include <fstream>

using namespace std;

int main ()
{
    //declaring out variables and saving the info from the file into a 2D array
    int arr[30][5];
    float total = 0;
    //Accessing file
    ifstream fromfile;
    fromfile.open("coins.txt");

    for(int i = 0; i < 30; i++)
    {
        for(int j = 0; j < 5; j++)
        {

            fromfile>>arr[i][j];

            if(j == 0)
            {
                total += arr[i][j] / 100.0;
            }

            else if(j == 1)
            {
                total += arr[i][j] / 20.0;
            }

            else if(j == 2)
            {
                total += arr[i][j] / 10.0;
            }

            else if(j == 3)
            {
                total += arr[i][j] / 4.0;
            }

            else if(j == 4)
            {
                total += arr[i][j] / 2.0;
            }
        }
    }
    //Outputting results
    cout<< "Total amount collected is:   " << "AED " << total << endl;

    return 0;
}







