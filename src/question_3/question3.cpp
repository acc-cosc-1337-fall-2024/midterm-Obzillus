#include "question3.h"

bool test_config()
{
    return true;
}
int get_earned_points(int widgets)
{
    switch (widgets)
    {
    case 1 ... 5:
        return widgets * 1;
        break;
    case 6 ... 10:
        return widgets * 5;
        break;
    case 11 ... 15:
        return widgets * 10;
        break;

    default:
     return widgets * 15;
        break;
    }
}