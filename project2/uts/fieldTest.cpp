#include "gtest/gtest.h"
#include "field.hpp"

class FieldTest : public ::testing::Test
{
    public:
    FieldState sut;
};

TEST_F(FieldTest, IsNewFieldFree)
{
    EXPECT_EQ(sut, FieldState::Free);
}

TEST_F(FieldTest, CanIChangeFieldStateToX)
{
    sut = FieldState::X;
    EXPECT_EQ(sut, FieldState::X);
}

TEST_F(FieldTest, CanIChangeFieldStateToO)
{
    sut = FieldState::O;
    EXPECT_EQ(sut, FieldState::O);
}