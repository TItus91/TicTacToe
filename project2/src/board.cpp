#include "board.hpp"

 bool Board::isFree(std::size_t x, std::size_t y) const 
 {
     if (fields[x][y] != FieldState::Free)
        return false;
     return true;
 }

 bool Board::set(std::size_t x, std::size_t y, FieldState symbol) 
 {
     if (x<3 && y<3)
     {
        fields[x][y] = symbol;
        return true;
     }
     return false;
 }

 FieldState Board::get(std::size_t x, std::size_t y) const 
 {
     if(x<3 && y<3)
    return fields[x][y];
    return FieldState::Error;
 }

 size_t Board::getSize() const
 {
     return fields.size();
 }
