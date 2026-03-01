#include <iostream>
using namespace std;

int main()
{
    int A, B;
    cin >> A >> B;

    bool found = false;

    for(int i = A; i <= B; i++)
    {
        int temp = i;
        bool isLucky = true;

        while(temp > 0)
        {
            int digit = temp % 10;

            if(digit != 4 && digit != 7)
            {
                isLucky = false;
                break;
            }

            temp /= 10;
        }

        if(isLucky)
        {
            cout << i << " ";
            found = true;
        }
    }

    if(!found)
        cout << -1;

    return 0;
}
