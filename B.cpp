#include <iostream>

using namespace std;

int main()
{
    int N;

    cin >> N;

    for(int i = 2; i <= N; i++) 
    {
        if(i % 2 == 0)
        {
            cout << i << endl;
        }
    }

    return 0;
}