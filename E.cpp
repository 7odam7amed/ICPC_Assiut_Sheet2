#include <iostream>

using namespace std;

int ReadCountValues()
{
    int num;

    do 
    {
        cin >> num;

    } while(num < 0);

    return num;
}

int MaxNumber(int num)
{
    int x, greater = 0;

    for(int i = 1; i <= num; i++)
    {
        cin >> x;

        if(x > greater)
            greater = x;
    }

    return greater;
}

int main()
{
    cout << MaxNumber(ReadCountValues());

    return 0;
}