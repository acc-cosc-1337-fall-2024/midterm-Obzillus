#include "question2.h"

using std::to_string;

bool test_config()
{
    return true;
}

string get_factorial_sequence(int num)
{
    string output = "";
    int sum = 1;
    for (auto i = 1; i < num; i++)
    {
        output.append(to_string(i) + "x");
        sum *= i;
    }
    output.append(to_string(num) + "=" + to_string(sum*num));
    return output;
}