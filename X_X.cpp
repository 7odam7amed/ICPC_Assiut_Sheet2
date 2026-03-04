#include <iostream>

using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        long long N;
        cin >> N;

        int count = 0;

        while (N > 0)
        {
            if (N % 2 == 1)
                count++;

            N /= 2;
        }

        cout << ((1LL << count) - 1);

        if (T)
            cout << endl;
    }

    return 0;
}
