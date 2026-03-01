#include <iostream>

using namespace std;

void ReadPostiveNumber(int &num1, int &num2)
{
        cin >> num1;
        cin >> num2;
}

void GCD(int num1, int num2)
{
    int num, FirstDivisor = 0, SecondDivisor = 0, GCD = 0;

    if(num1 >= num2)
        num = num2;
    else
        num = num1;

    for(int i = 1; i <= num; i++)
    {
        if(num1 % i == 0)
            FirstDivisor = i;
        
        if(num2 % i == 0)
            SecondDivisor = i;

        if(FirstDivisor == SecondDivisor)
        {
            if(FirstDivisor >= GCD)
                GCD = FirstDivisor;
        }
    }

    cout << GCD;
}

int main()
{
    int num1, num2;

    ReadPostiveNumber(num1, num2);
    GCD(num1, num2);

    return 0;
}