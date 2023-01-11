#include <iostream>
using namespace std;
void function(int num);
main()
{
    int num;
    cout << "Enter any number: ";
    cin >> num;
    function(num);
}
void function(int num)
{
    int sum, digit1, digit2, digit3, digit4, digit5;
    digit1 = num % 10;
    digit2 = (num / 10) % 10;
    digit3 = (num / 100) % 10;
    digit4 = (num / 1000) % 10;
    digit5 = (num / 10000) % 10;
    sum = digit1 + digit2 + digit3 + digit4 + digit5;
    cout << "sum is: " << sum << endl;
    if (sum % 2 == 0)
    {
        cout << "Number is evenish.";
    }
    if (sum % 2 != 0)
    {
        cout << "Number is oddish.";
    }
}