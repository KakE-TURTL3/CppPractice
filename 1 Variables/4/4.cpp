#include <iostream>
using namespace std;

int main() {
    const int myvar = 12;
    //This variable cannot be changed and is read only. Error will be returned if you try to change it.

    //myvar = 6; error: assignment of read-only variable 'myvar'

    cout << myvar;
    return 0;

    //These should be used when the value is unlikely to change e.g. const int minutesPerHour = 60
}
