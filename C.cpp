#include <iostream>

using namespace std;

enum enEvenOdd {Odd = 1, Even = 2};
enum enPositiveNegative {Zero = 0, Negative = 1, Positive = 2};

int ReadCountOfNumbers()
{
    int num;

    do 
    {
        cin >> num;

    } while (num < 0);

    return num;
}

enEvenOdd CheckEvenOrOdd(int x)
{
    if(x % 2 == 0)
        return enEvenOdd::Even;
    else 
        return enEvenOdd::Odd;
}

enPositiveNegative CheckPositiveOrNegative(int x)
{
    if(x > 0)
        return enPositiveNegative::Positive;
    else if(x < 0)
        return enPositiveNegative::Negative;
    else 
        return enPositiveNegative::Zero;
}

void PrintCountEvenOddPositiveNegative(int num)
{
    int Even = 0, Odd = 0, Positive = 0, Negative = 0, x;

    for(int i = 1; i <= num; i++)
    {
        cin >> x;

        if(CheckEvenOrOdd(x) == enEvenOdd::Even)
            Even++;
        else
            Odd++;
        
        if(CheckPositiveOrNegative(x) == enPositiveNegative::Positive)
            Positive++;
        else if(CheckPositiveOrNegative(x) == enPositiveNegative::Negative)
            Negative++;
    }

    cout << "Even: " << Even << endl;
    cout << "Odd: " << Odd << endl;
    cout << "Positive: " << Positive << endl;
    cout << "Negative: " << Negative << endl;

}

int main()
{
    PrintCountEvenOddPositiveNegative(ReadCountOfNumbers());

    return 0;
}