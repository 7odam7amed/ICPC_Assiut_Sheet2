#include <iostream>

using namespace std;

int ReadNumber()
{
    int num;

    cin >> num;

    return num;
}

void PUM(int num)
{
    for(int i = 1; i <= (4 * num); i++)
    {
        if(i % 4 == 0)
        {
            cout << "PUM";

            if(i != (4 * num))
                cout << endl;
        }
        else
        {
            cout << i << " ";
        }
    }
}

int main()
{
    PUM(ReadNumber());

    return 0;
}