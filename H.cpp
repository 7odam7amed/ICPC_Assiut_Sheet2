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
    if(CheckPrimeOrNot(num) == enPrimeNotPrime::Prime)
        cout << "YES";
    else
        cout << "NO";
}

int main()
{
    PrintPrimeNumbers(ReadPositiveNumber());

    return 0;
}