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
    int AllFactorial[num];

    for(int j = 0; j < num; j ++)
    {
        int Number = ReadNumber(0, 20);

        int Factorial = CalculateFactorial(Number);

        AllFactorial[j] = Factorial;
    }

    for(int i = 0; i < num; i ++)
    {
        cout << AllFactorial[i] << endl;
    }
}

int main()
{
    PrintFactorialTNumbers(ReadNumber(1, 15));

    return 0;
}