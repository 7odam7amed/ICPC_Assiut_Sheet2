#include <iostream>

using namespace std;

int main()
{
    int N;

    cin >> N;

   int x = 0;
   int y = 1;
   int sum;

   for(int i = 1; i <= N; i++)
   {
        cout << x << " ";

        sum = x + y;
        x = y;
        y = sum;
   }

    return 0;
}