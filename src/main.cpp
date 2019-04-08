#include <iostream>
#include "compute.h"
#include<vector>

using namespace std;

int main()
{
    cout << "Write list of numers" << endl;
    string line;

    getline(cin, line);

    cout << line << endl;

    compute worker;

    vector<int> array;

    array = worker.parse(line);

    float aver = worker.average(array);

    cout << "average is" << aver << endl;

    return 0;
}
