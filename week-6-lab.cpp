#include <iostream>

using namespace std;

int main()
{
    int x;

        cout << "Please Enter Your Test Score:" << endl; // Out put to console to ask for test score
        cin >> x; // user in put

        if (x >= 86 )
        {
            cout << "Grade = A" << endl;  
        }

        else if (x >= 72)
        {
            cout << "Grade = B" << endl;
        }

        else if (x >= 60)                           //if statements for different out puts according to variable
        {
            cout << "Grade = C" << endl;
        }

        else if (x >= 50)
        {
            cout << "Grade = D" << endl;
        }

        else
        {
            cout << "Grade = F" << endl;
        }








    return 0;
}