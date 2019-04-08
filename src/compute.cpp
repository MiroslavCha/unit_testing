#include "compute.h"

compute::compute()
{

}

std::vector<int> compute::parse(std::string line)
{
    std::vector<int> array;

    return array;
}

float compute::average(std::vector<int> array)
{
    int sum{0};

    for (int i:array)
    {
        sum += i;
    }

    return static_cast<float>(sum) / array.size();
}
