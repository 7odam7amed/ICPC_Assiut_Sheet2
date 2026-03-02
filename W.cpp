#include <iostream>

using namespace std;

int ReadNumber()
{
    int num;

    cin >> num;

    return num;
}

void PrintStarswithSpacesUpward(int num)
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

        cout << endl;
    }
}

void PrintStarswithSpacesDownward(int num)
{    
    int spaces = 0;

    for(int i = num; i >= 1; i--)
    {
        for(int k = 1; k <= spaces; k++)
        {
            cout << " ";
        }

        spaces ++;

        for(int j = (2 * i - 1); j >= 1; j--)
        {
            cout << "*";
        }

        if(i != 1)
            cout << endl;
    }
}

int main()
{
    int num = ReadNumber();
    
    PrintStarswithSpacesUpward(num);
    PrintStarswithSpacesDownward(num);
    
    return 0;
}