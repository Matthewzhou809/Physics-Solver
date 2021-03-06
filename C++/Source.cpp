/*
        Order of adding formulas
            1. Equations
            2. Counters
            3. Equations Bool
            4. Actual Equation
            5. Size of Equation (array)
            6. Check for input vs array
*/
#include <iostream>
#include <string>
#include <array>

using namespace std;
#define my_sizeof(type) ((char *)(&type + 1) - (char *)(&type))

bool search(char array, char target)
{
    if (array == target)
    {
        return true;
    }
    return false;
}

int main()
{
    //Counters
    int contkin1 = 0;
    //End of Counters; Equations Bool
    bool beqkin1 = false;
    //End of Equations Bool; Actual Equation
    string eqkin1 = "d = a(t)^2/2 + v + i";
    //End of actual equation

    char input = 's';

    //Equations
    char kin1[4] = {'a', 'v', 'i', 'd'};
    char Fqqrr[] = {'F', 'q', 'Q', 'd', 'd'};
    char Eqrr[] = {'E', 'q', 'd', 'd'};
    char EVx[] = {'E', 'V', 'd'};
    char Vqr[] = {'V', 'q', 'd'};
    char UqV[] = {'q', 'V', 'U'};
    char VqC[] = {'q', 'V', 'C'};
    char CAd[] = {'A', 'd', 'C'};
    char UQV[] = {'Q', 'V', 'U'};
    char UCVV[] = {'C', 'V', 'V', 'U'};
    char UCVV[] = {'C', 'V', 'V', 'U'};

    string equations[] = {
        "kin1",
        "Fqqrr",
        "Eqrr",
        "EVx",
        "Vqr",
        "UqV",
        "VqC",
        "CAd",
        "UQV",
        "UCVV",
    };

    //End of Equations; Size of Equation

    const int NumofEquations = my_sizeof(kin1) / my_sizeof(kin1[0]) - 1;
    string sizefun[NumofEquations];
    for (size_t i = 0; i < NumofEquations; i++)
    {
        sizefun[i] = {"s" + equations[i]};
    }

    for (size_t i = 0; i < NumofEquations; i++)
    {
        for (size_t i = 0; j < count; j++)
        {
            int sizekin1 = my_sizeof(kin1) / my_sizeof(kin1[0]) - 1;
        }
    }

    //End Size of Equation
    while ('9' != input)
    {
        cout << "\nType any Char for variable; type 9 to Stop\nVar:";
        cin >> input;
        //Check for input vs array
        for (size_t i = 0; i < sizekin1; i++)
        {
            if (search(kin1[i], input) == true)
                contkin1++;
        }
        //End of Check for input vs array
    }

    //Check for counter vs size
    if (contkin1 == sizekin1)
        beqkin1 = true;
    //End of Check for counter vs size

    //Use Equations and check Bool
    if (beqkin1 == true)
        cout << "Use Equation: " << eqkin1;
    //End of Use Equations and check Bool

    return 0;
}