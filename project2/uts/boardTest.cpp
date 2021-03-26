#include "gtest/gtest.h"
#include "board.hpp"

struct BoardTest : public ::testing::Test
{
       std::unique_ptr<BoardI> sut = std::make_unique<Board>();
};

TEST_F(BoardTest, NewBoardField1u1uFree)
{
    
    EXPECT_TRUE(sut->isFree(1u,1u));
}

TEST_F(BoardTest, NewBoardField2u1uIsFree)
{
    
    EXPECT_TRUE(sut->isFree(2u,1u));
}

TEST_F(BoardTest, FieldSetToXIsNotFree)
{
     sut->set(2u, 1u, FieldState::X);
     EXPECT_FALSE(sut->isFree(2u,1u));
}

TEST_F(BoardTest, ShouldReturnXWhenSetToX)
{
     sut->set(2u, 1u, FieldState::X);
     EXPECT_EQ(sut->get(2u,1u), FieldState::X);
}

TEST_F(BoardTest, SetShouldReturnTrueWhenInBounds)
{
     EXPECT_TRUE(sut->set(2u,1u,FieldState::X));
}

TEST_F(BoardTest, SetShouldReturnFalseWhenOutOfBounds)
{
     EXPECT_FALSE(sut->set(20u,1u,FieldState::X));
}

TEST_F(BoardTest, ShouldReturnFreeWhenNotSet)
{
     EXPECT_EQ(sut->get(0u,1u), FieldState::Free);
}

TEST_F(BoardTest, ShouldReturnFalseWhenOutOfBounds)
{
     EXPECT_EQ(sut->get(0u,10u), FieldState::Error);
}

TEST_F(BoardTest, ShouldReturnSizeOfBoard)
{
    EXPECT_EQ(sut->getSize(), 3);
}



