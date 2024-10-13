#include "question4.h"

int main()
{
    int input = 0;
    do
    {
        input = get_int_input("Input number 1-255: ", 0, 255);
        string binary = decimal_to_binary(input);
        cout<<"Binary: \n"<<binary<<"\n";
    } while (input!=0);
    
    return 0;
}