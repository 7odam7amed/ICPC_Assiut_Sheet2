#include <iostream>

using namespace std;

int ReadNumber(int From, int To)
{
    int num;

    do 
    {
        cin >> num;

    } while(num >= To && num <= From);

    return num;
}

void PrintMultiplicationTable(int num)
{
    for(int i = 1; i <= 12; i++)
    {
        cout << num << " * " << i << " = " << num * i << endl;
    }
}

int main()
{
    PrintMultiplicationTable(ReadNumber(1, 12));

    return 0;
}