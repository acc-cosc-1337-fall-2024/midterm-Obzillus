#include "question3.h"

int main()
{
    int input = 0;
    do
    {
        input = get_int_input("Input widgets sold, or 0 to exit: ", 0);
        int points = get_earned_points(input);
        cout<<"Points Earned "<<points<<"\n";
    } while (input!=0);
    
    
    return 0;
}