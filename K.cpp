#include <iostream>

using namespace std;

int ReadPositiveNumber()
{
    int num;

    do 
    {
        cin >> num;

    } while(num < 0);

    return num;
}

void PrintAllDivisors(int num)
{
    for(int i = 1; i <= num; i ++)
    {
        if(num % i == 0)
            cout << i << endl;
    }
}

int main()
{
    PrintAllDivisors(ReadPositiveNumber());

    return 0;
}