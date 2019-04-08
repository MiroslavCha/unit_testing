#include "gtest/gtest.h"
#include "compute.h"

#include <vector>

using namespace std;

TEST(example, average)
{
    compute comp;
    vector<int> sample = {2, 4, 4, 43, 4};

    float aver = comp.average(sample);

    ASSERT_THAT(aver, 3.0, 1.0e-11);
}
