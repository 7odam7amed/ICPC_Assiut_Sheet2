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

char ReadSymbol()
{
    char S;

    cin >> S;

    return S;
}

void PrintRepeatedSymbol(char S,int num)
{
    for(int i = 1; i <= num; i++)
    {
        int repeat = ReadNumber(1, 100);

        for(int j = 1; j <= repeat; j++)
        {
            cout << S;
        }

        if(i != num)
            cout << endl;
    }
}

int main()
{
    char S = ReadSymbol();
    int num = ReadNumber(1, 50);

    PrintRepeatedSymbol(S, num);

    return 0;
}