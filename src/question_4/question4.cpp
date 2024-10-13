#include "question4.h"
#include <algorithm>

bool test_config()
{
    return true;
}

string decimal_to_binary(int num)
{
    string output = "";
    for (auto i = 0; i < 8; i++)
    {
       output.append(std::to_string(num % 2));
       num /= 2;
    }
    std::reverse(output.begin(), output.end());
    return output;
}