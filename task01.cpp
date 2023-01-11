#include <iostream>
using namespace std;
int product(int num);
int main()
{
    int num;
    cout << "Enter any number : ";
    cin >> num;
    product(num);
    int multiply = product(num);
    cout << "Your number after multiply by 5 is : " << multiply;
    return 0;
}
int product(int num)
{
    num = num * 5;
    return num;
}
