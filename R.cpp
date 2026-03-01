#include <iostream>

using namespace std;

int ReadNumber(int From, int To)
{
    int num;
    
    do 
    {
        cin >> num;

    } while(num > To || num < From);

    return num;
}


void CalculateSum()
{
    int num1, num2, smaller, greater, sum = 0;
    
    while(true)
    {
        num1 = ReadNumber(-100, 100);
        num2 = ReadNumber(-100, 100);

        if(num1 <= 0 || num2 <= 0)
        {
            return;
        }
        else
        {
            if(num1 > num2)
            {
                greater = num1;
                smaller = num2;
            }
            else
            {
                greater = num2;
                smaller = num1;
            }

            for(smaller; smaller <= greater; smaller ++)
            {
                cout << smaller << " ";
                sum += smaller;
            }

            cout << "sum =" << sum << endl;

            sum = 0;
        }

    }
}

int main()
{
    CalculateSum();

    return 0;
}