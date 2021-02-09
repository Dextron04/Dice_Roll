#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int randomNumber;
    srand(unsigned(time(0)));
    randomNumber = rand() % 7 + 1;
    cout << "The dice roll is: " << randomNumber;
    return 0;
}
