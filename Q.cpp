#include <iostream>

using namespace std;

int ReadNumber()
{
    int num;

    do 
    {
        cin >> num;

    } while (num < 0);

    return num;
}

void DigitsOfNumber(int num)
{
    int digit;

    if(num == 0)
    {
        cout << 0;
        return;
    }

    while(num > 0)
    {
        digit = num % 10;

        cout << digit << " ";

        num /= 10;
    }
}

void PrintDigitOfNumbers(int num)
{
    for(int i = 1; i <= num; i++)
    {
        int digit = ReadNumber();

        DigitsOfNumber(digit);

        if(i != num)
            cout << endl;
    }
}

int main()
{
    PrintDigitOfNumbers(ReadNumber());

    return 0;
}