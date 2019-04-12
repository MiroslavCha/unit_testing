#include "compute.h"

using namespace std;

compute::compute()
{

}

vector<int> compute::parse(string str)
{
    vector<string> tokens;
    vector<int> array;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    for (int i = 0; i < tokens.size(); i++) {
        int a_item = stoi(tokens[i]);

         array.push_back(a_item);
    }

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
