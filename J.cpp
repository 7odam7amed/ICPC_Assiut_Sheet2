#include <iostream>
#include <cmath>

using namespace std;

enum enPrimeNotPrime {Prime = 1, NotPrime = 2};

int ReadPositiveNumber()
{
    int num;

    do
    {
        cin >> num;

    } while(num < 0);

    return num;
}

enPrimeNotPrime CheckPrimeOrNot(int x)
{
    if(x == 2)
        return enPrimeNotPrime::Prime;
    else
    {
        for(int i = 2; i <= sqrt(x); i ++)
        {
            if(x % i == 0)
                return enPrimeNotPrime::NotPrime;
        }

        return enPrimeNotPrime::Prime;
    }
        
}

void PrintPrimeNumbers(int num)
{
    for(int i = 2; i <= num; i++)
    {
        if(CheckPrimeOrNot(i) == enPrimeNotPrime::Prime)
            cout << i << " ";
    }
}

int main()
{
    PrintPrimeNumbers(ReadPositiveNumber());

    return 0;
}