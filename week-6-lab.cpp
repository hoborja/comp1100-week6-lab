#include <iostream>

using namespace std;

int main()
{
    int x;

        cout << "Please Enter Your Test Score:" << endl;
        cin >> x;

        if (x >= 86 )
        {
            cout << "Grade = A" << endl;  
        }

        else if (x >= 72)
        {
            cout << "Grade = B" << endl;
        }

        else if (x >= 60)
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