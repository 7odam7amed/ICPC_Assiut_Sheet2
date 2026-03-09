#include <iostream>

using namespace std;

int main()
{
    int T;
    cin >> T;

    while(T--)
    {
        long long fact = 1;
        int N;
        cin >> N;

        for(int i = 1; i <= N; i++)
            fact *= i;

        cout << fact << endl;
    }

    return 0;
}