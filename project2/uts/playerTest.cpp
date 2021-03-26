#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "inputMock.hpp"
#include "boardMock.hpp"


#include "player.hpp"

class PlayerTest : public ::testing::Test
{
    ::testing::StrictMock<InputMock> input;
    Board board;
    std::unique_ptr<Player> sut = std::make_unique<Player>(board, input, FieldState::X);
};


TEST_F(PlayerTest, a)
{

}

TEST_F(PlayerTest, b)
{
}
