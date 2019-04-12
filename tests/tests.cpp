#include "gtest/gtest.h"
#include "compute.h"

#include <vector>

using namespace std;

TEST(example, average)
{
    compute comp;
    vector<int> sample = {3, 2, 4, 1, 5};

    float aver = comp.average(sample);

    ASSERT_TRUE(aver == 3.0);
}

TEST(example, parsing)
{
    compute comp;
    string sample = {"32 32 32"};

    vector<int> array = comp.parse(sample);

    ASSERT_TRUE(array[0] == 32);
    ASSERT_TRUE(array[2] == 32);
}
