/*********************************************************
 *  AUTHOR          : Nicholas Spector & Victor Truong
 *  Lab #4          : Loops
 *  CLASS           : CS2
 *  SECTION         : MTWR: 07:30a – 12:30p
 *  Due Date        : 01/23/19
 *********************************************************/


#include <cstdlib>
#include <iostream>

int SumDigits(int);

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
    int ex;              //INPUT - The exercd "/home/victor/projects/LAB08/" && g++ main.cpp -o main && "/home/victor/projects/LAB08/"maincise that the user is choosing
    int num;

    // INPUT - User is asked to type in the exercise number
    cout << "Which exercise: ";
    ex = 0;
    cin >> ex;


    // PROCESSING - Chooses exercise 1 if "1" is chosen
    if(ex == 1)
    {
        do
        {
            cout << "Please enter an integer (0 to quit): ";
            cin >> num;
            if (num != 0)
            {
                cout << "The sum of the digits of " << num << " is " << SumDigits(num) << "\n";
            }
            else
            {
                cout << "Goodbye\n";
            }
        } while (num != 0);
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

int SumDigits(int num)
{
    int sum;
    int currDigit;
    sum = 0;
    currDigit = 0;
    num = abs(num);

    while (num > 0)
    {
        currDigit = num % 10;
        sum += currDigit;
        num /= 10;
    }

    return sum;
}