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
    for(int i = num; i >= 1; i--)
    {
        for(int j = i; j >= 1; j--)
        {
            cout << "*";
        }

        if(i != 1)
            cout << endl;
    }
}

int main()
{
    Pyramid(ReadNumber());

    return 0;
}