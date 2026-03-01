#include <iostream>

using namespace std;

int ReadNumber()
{
    int num;

    do 
    {
        cin >> num;

    } while(num < 0);

    return num;
}

void Pyramid(int num)
{
    for(int i = 1; i <= num; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        if(i != num)
            cout << endl;
    }
}

int main()
{
    Pyramid(ReadNumber());

    return 0;
}