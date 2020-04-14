#include <iostream>
#include <string>
#include <array>

using namespace std;
#define my_sizeof(type) ((char *)(&type + 1) - (char *)(&type))

bool search(char array[], int count, char target)
{
    for (size_t i = 0; i < count; i++)
    {
        if (array[i] == target)
        {
            return true;
        }
        return false;
    }
}

int main()
{
    int contkin1 = 0;

    bool eqkin1 = false;

    char input = 's';
    //Equations
    char kin1[4] = {'a', 'v', 'i', 'd'};
    //End of Equations; Size of Equation
    int sizekin1 = my_sizeof(kin1) / my_sizeof(kin1[0]) - 1;
    //End Size of Equation
    while ('9' != input)
    {
        cout << "\nType any Char for variable; type 9 for Stop\nVar:";
        cin >> input;
        if (search(kin1, sizekin1, input) == true)
            contkin1++;
        if (contkin1 == sizekin1 - 1)
            eqkin1 = true;
        if (eqkin1 == true)
            cout << "Use Kinematic Equation #1: d = a(t)^2/2 + v + i";
    }
    return 0;
}