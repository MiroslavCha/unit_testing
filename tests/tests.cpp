#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "compute.h"

#include <vector>

using namespace std;

TEST(example, average)
{
    compute comp;
    vector<int> sample = {3, 2, 4, 1, 5};

    float aver = comp.average(sample);

    EXPECT_EQ(aver, 3.0);
}

TEST(example, parsing)
{
    compute comp;
    string sample = {"32 32 32"};

    vector<int> array = comp.parse(sample);

    EXPECT_THAT(array, testing::ElementsAre(31, 32, 32));
}
