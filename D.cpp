#include <iostream>

using namespace std;

int ReadPositiveNumber()
{
    int pass;
    
    do 
    {
        cin >> pass;

    } while (pass < 0);

    return pass;
}

void CheckCorrectPasswrod()
{
    int pass;

    do
    {
        pass = ReadPositiveNumber();

        if(pass == 1999)
        {
            cout << "Correct";
            break;
        }
        else
            cout << "Wrong" << endl;

    } while(pass != 1999);
}

int main()
{
    CheckCorrectPasswrod();

    return 0;
}