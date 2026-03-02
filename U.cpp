#include <iostream>

using namespace std;

int ReadPositiveNumber()
{
    int num;
        
    cin >> num;

    return num;
}

int SumDigitsNumber(int num)
{
    int remaind, sum = 0;

    while(num > 0)
    {
        remaind = num % 10;
        num /= 10;
        sum += remaind;
    }

   return sum; 
}

int SummationOfDigitsInTwoDigits(int num)
{
    int num1 = ReadPositiveNumber();
    int num2 = ReadPositiveNumber();
    int SumDigit = 0, Sum;
     
    for(int i = 1; i <= num; i++)
    {
        Sum = SumDigitsNumber(i);

        if(Sum >= num1 && Sum <= num2)
            SumDigit += i;
    }

    return SumDigit;
}

int main()
{
    cout << SummationOfDigitsInTwoDigits(ReadPositiveNumber());

    return 0;
}