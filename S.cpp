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


void CalculateSum(int num)
{
    int num1, num2, start, end, sum = 0;
    
    for(int i = 1; i <= num; i++)
    {
        cin >> num1 >> num2;

        start = min(num1, num2);
        end = max(num1, num2);

        int j = start + 1;

        if(j % 2 == 0)
            j++;

        for(j; j < end; j+=2)
        {
            sum += j;                
        }

        cout << sum;

        if(i != num)
            cout << endl;

        sum = 0;
    }
}

int main()
{
    CalculateSum(ReadNumber(1, 10));

    return 0;
}