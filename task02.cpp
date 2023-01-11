#include <iostream>
using namespace std;
void check(char x);
main()
{
    char x;
    cout << "Enter any chracter : ";
    cin >> x;
    check(x);
}
void check(char x)
{
    if (x >= 'A' && x <= 'Z')
    {
        cout << "You entered an uppercase chracter.";
    }
    if (x >= 'a' && x <= 'z')
    {
        cout << "You entered a lowercase chracter.";
    }
}