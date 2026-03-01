#include <iostream>

using namespace std;

int ReadPositiveNumber()
{
    int num;

    do 
    {
        cin >> num;

    } while(num <= 0);

    return num;
}

int ReverseNumber(int num)
{
    int remaind, reverse = 0;

    while(num > 0)
    {
        remaind = num % 10;
        num /= 10;
        reverse = reverse * 10 + remaind;        
    }

    return reverse;
}

bool isPalindrome(int num)
{
    return ReverseNumber(num) == num;
    
}

void PrintPalindrome(int num)
{
    if(isPalindrome(num))
    {
        cout << num << endl;
        cout << "YES";
    }
    else
    {
        cout << ReverseNumber(num) << endl;
        cout << "NO";
    }
}

int main()
{
    PrintPalindrome(ReadPositiveNumber());

    return 0;
}