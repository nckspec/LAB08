/*********************************************************
 *  AUTHOR          : Nicholas Spector & Victor Truong
 *  Lab #4          : Loops
 *  CLASS           : CS2
 *  SECTION         : MTWR: 07:30a – 12:30p
 *  Due Date        : 01/23/19
 *********************************************************/


#include <iostream>

using namespace std;


/*******************************************************************************
 *
 * LAB08
 *_________________________________________________________
 *
 *
 *
 ******************************************************************************/

bool IsPrime(int number);

int main()
{


    // variable
    int ex;              //INPUT - The exercise that the user is choosing


    // INPUT - User is asked to type in the exercise number
    cout << "Which exercise: \n";
    ex = 0;
    cin >> ex;


    // PROCESSING - Chooses exercise 1 if "1" is chosen
    if(ex == 1)
    {


    }

    // PROCESSING: Chooses exercise 2 if '2' is chosen
    if(ex == 2)
    {

        int number_one;
        int number_two;

        cout << "Please input two positive numbers: ";
        cin >> number_one >> number_two;

        for( ; number_one < number_two; number_one++)
        {
            if(IsPrime(number_one))
                cout << number_one << endl;

        }


    }


    return 0;

}


bool IsPrime(int number)
{

    int x;

    for(x = 2; x < number; x++)
    {

        if(number % x == 0)
            return false;

    }

    return true;



}
