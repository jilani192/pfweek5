#include <iostream>
using namespace std;
void symmetrical(int);
int number;
int main()
{
    cout << "Enter any number : ";
    cin >> number;
    symmetrical(number);
    return 0;
}
void symmetrical(int)
{
    int remainder, qoutient, reverse = 0;
    qoutient = number;
    while (qoutient > 0)
    {
        remainder = qoutient % 10;
        reverse = (reverse * 10) + remainder;
        qoutient = qoutient / 10;
    }
    cout << "The reverse of your number is : " << reverse << endl;
    if (reverse == number)
        cout << "Your number is symmetrical .";
    else
        cout << "Your number is unsymmetrical .";
}