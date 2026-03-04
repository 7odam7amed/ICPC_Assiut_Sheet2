#include <iostream>
#include <cmath>

using namespace std;

int ReadNumber()
{
    int num;

    cin >> num;

    return num;
}

int ConvertToBinary(int num)
{
    int remaind, sum = 0, zero = 0;

    while(num > 0)
    {
        remaind = num % 2;
        sum = sum * 10 + remaind;
        num /= 2;
    }

    return sum;
}

int BinaryOfOnes(int Sum)
{
    int remaind, Ones = 0;

    while(Sum > 0)
    {
        remaind = Sum % 10;

        if(remaind == 1)
            Ones = Ones * 10 + remaind;
        
        Sum /= 10;
    }

    return Ones;
}

int CountOfOnes(int Ones)
{
    int remaind, Count = 0;

    while(Ones > 0)
    {
        remaind = Ones % 10;

        if(remaind == 1)
            Count++;
        
        Ones /= 10;
    }

    return Count;
}

int ConvertToDecimal(int Ones)
{
    int remaind, Decimal = 0, i = 0;

    while(Ones > 0)
    {
        remaind = pow(2, i);
        Decimal += remaind;
        Ones /= 10;
        i++;
    }

    return Decimal;
}

void PrintDecimalOfOnesDecimal(int num)
{
    for(int i = 1; i <= num; i++)
    {
        int FirstDecimal = ReadNumber();
        
        cout << ConvertToDecimal(BinaryOfOnes(ConvertToBinary(FirstDecimal)));

        if(i != num)
            cout << endl;
    }
}

int main()
{
    // PrintDecimalOfOnesDecimal(ReadNumber());

    cout << ConvertToBinary(10);

    return 0;
}