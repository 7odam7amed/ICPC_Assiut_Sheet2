#include <iostream>

using namespace std;

int ReadNumber(int From, int To)
{
    int num;

    do 
    {
        cin >> num;

    } while(num > To && num < From);

    return num;
}

int CalculateFactorial(int x)
{
    int Factorial = 1;

    for(int i = x; i >= 1; i --)
    {
        Factorial *= i;
    }

    return Factorial;
}

void PrintFactorialTNumbers(int num)
{
    for(int j = 1; j <= num; j ++)
    {
        int Number = ReadNumber(0, 20);

        int Factorial = CalculateFactorial(Number);

        cout << Factorial << endl;
    }
}

int main()
{
    PrintFactorialTNumbers(ReadNumber(1, 15));

    return 0;
}