#include "question1.h"

bool test_config()
{
    return true;
}

double get_dna_p_distance(const string& DNA1,const string& DNA2)
{
    double difference = 0;
    for (auto i = 0; i < DNA1.length(); i++)
    {
        if(DNA1[i]!=DNA2[i]) difference++;
    }
    return round(difference/DNA1.length()*10000)/10000;
}