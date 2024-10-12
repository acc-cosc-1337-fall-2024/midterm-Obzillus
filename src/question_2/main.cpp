#include "question2.h"

int main()
{
    int input = 0;
    do
    {
        input = get_int_input("Please input a number 1-10, or input 0 to exit: \n",0,10);

        if(input == 0) return 0;

        string sequence = get_factorial_sequence(input);

        cout<<sequence << "\n";

    } while (input != 0);
    
    return 0;
}