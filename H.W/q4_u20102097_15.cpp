//Libraries
#include <iostream>
#include <cstring>
#include <cctype>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include<fstream>

using namespace std;
//Prototypes
void ReadMatrix(double matrix[][4], int, int);
void MaxValue(double matrix[][4], int, int, int &, int &);
void ShowOutput(double matrix[][4], int, int, int, int);
//main function
int main()
{
    double Table[3][4];
    int r, c;

    ReadMatrix(Table, 3, 4);
    MaxValue(Table, 3, 4, r, c);
    ShowOutput(Table, 3, 4, r, c);

    return 0;
}


void ReadMatrix(double matrix[][4], int N, int M)
{
    //opening the file
    ifstream inFile("matrix.txt");

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < M; j++)
        {
            inFile >> matrix[i][j];
        }
    }
}


void MaxValue(double matrix[][4], int N, int M, int &maxRow, int &maxCol)
{

    double maximum = matrix[0][0];

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < M; j++)
        {
            if (matrix[i][j] > maximum)
            {
                maximum = matrix[i][j];
                maxRow = i;
                maxCol = j;
            }
        }
    }
}

void ShowOutput(double matrix[][4], int N, int M, int maxRow, int maxCol)
{

    cout << "The matrix is: " << endl;

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < M; j++)
        {
            cout << setw(10) << matrix[i][j];
        }

        cout << endl;
    }

    cout << endl << matrix[maxRow][maxCol] << " is the maximum value" << endl;

    cout << "Its location is: " << maxRow << " " << maxCol;
}

