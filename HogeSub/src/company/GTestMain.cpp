/* Copyright 2017 yukkun007 */
#include "gtest/gtest.h"

#ifdef _DEBUG
#pragma comment(lib, "gtestd.lib")
#else
#pragma comment(lib, "gtest.lib")
#endif

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    RUN_ALL_TESTS();

    return 0;
}
