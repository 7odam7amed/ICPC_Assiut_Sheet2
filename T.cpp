#include <iostream>

using namespace std;

int ReadNumber()
{
    int num;

    cin >> num;

    return num;
}

void PrintStarswithSpaces(int num)
{
    int spaces = num - 1;
    
    for(int i = 1; i <= num; i++)
    {
        for(int k = spaces; k > 0; k --)
        {
            cout << " ";
        }

        spaces--;

        for(int j = 1; j <= (2 * i - 1); j++)
        {
            cout << "*";
        }

        if(i != num)
            cout << endl;
    }
}

int main()
{
    PrintStarswithSpaces(ReadNumber());

    return 0;
}