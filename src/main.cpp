#include "include/ackermann.h"

using namespace std;


int main()
{
    cout << "Input two numbers to calculate Ackermann function value:"
         << '\n';
    int nums[2];
    cin >> nums[0] >> nums[1];
    if(defender(nums[0], nums[1])) {
        cout << "Ackermann recursive function value is " << ackermannRecursion(nums[0], nums[1])
             << '\n'
             << "Ackermann non recursive function value is " << ackermannEntailment(nums[0], nums[1])
             << endl;
    }
    else{
        cout << "Defined only for non negative numbers!"
             << endl;
    }

    system("pause");
    return 0;
}

