
#include <iostream>
#include "Time.hpp"

using namespace std;

int main()
{
    Timme tiempo1(0, 10, 28), tiempo2(0, 50, 28), tiempo3(2, 10, 54);
    Timme result, result2;

    if(tiempo1 != tiempo2)
    {
        cout << "The times are different" << endl;
    }
    else
    {
        cout << "The times are equal" << endl;
    }

    //This operation corresponds to an addition of the objects without changing any of them
    tiempo1.verify();
    cout << " + " << endl;
    tiempo2.verify();
    cout << " + " << endl;
    tiempo3.verify();

    result = tiempo1 + tiempo2 + tiempo3;

    cout << " = " << endl;
    result.verify();

    //Let's try to add a time with an integer representing only minutes
    tiempo1.verify();

    result2 = tiempo1 + 10;
    cout << " = " << endl;
    result2.verify();

    return 0;
}
