#include <iostream>
using namespace std;

int main() {
    //Defines variables x and y
    int x, y;

    //Allows the user to input what the variable x is
    cout << "Please enter the first number: ";
    cin >> x;

    //Allows the user to input what the variable y is
    cout << "Please enter the second number: ";
    cin >> y;

    //Defines variable sum as an integer which is the sum of x and y
    int sum = x + y;

    //Outputs the value of sum
    cout << "Your two numbers added together gives: " << sum;
    return 0;
}
