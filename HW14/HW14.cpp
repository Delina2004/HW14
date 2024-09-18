#include <iostream>
using namespace std;

int main()
{
    int rnum = 8;
    int snum;
    cout << "Guess the secret num ";
    cin >> snum;

    while (rnum != snum) {
        cout << "You are wrong!Try again: ";
        cin >> snum;
    }
    cout << "You got it! ";

    return 0;
}

