#ifndef COMPUTE_H
#define COMPUTE_H

#include<vector>
#include<string>

class compute
{
public:
    compute();
    std::vector<int> parse(std::string str);
    float average(std::vector<int> array);
};

#endif // COMPUTE_H
