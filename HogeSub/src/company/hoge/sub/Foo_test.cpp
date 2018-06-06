/* Copyright 2017 yukkun007 */
#include "company/hoge/sub/Foo.h"
#include "gtest/gtest.h"

#ifdef _DEBUG
#pragma comment(lib, "gtestd.lib")
#else
#pragma comment(lib, "gtest.lib")
#endif

namespace company {
namespace hoge {
namespace sub {

class FooTest : public ::testing::Test {
 public:
    virtual void SetUp() {
    }

    virtual void TearDown() {
    }

    Foo f;
};

TEST_F(FooTest, Init) {
    EXPECT_EQ(0, f.num_);
}

}  // namespace sub
}  // namespace hoge
}  // namespace company
