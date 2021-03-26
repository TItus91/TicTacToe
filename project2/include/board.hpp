#pragma once
#include <cstddef>
#include "field.hpp"
#include <array>


class BoardI
{
public:
    virtual ~BoardI() = default;
    virtual bool isFree(std::size_t, std::size_t) const = 0;
    virtual bool set(std::size_t, std::size_t, FieldState) = 0;
    virtual size_t getSize() const = 0;
    virtual FieldState get(std::size_t, std::size_t) const = 0;
};

class Board : public BoardI
{
    public:
    bool isFree(std::size_t, std::size_t) const override;
    bool set(std::size_t, std::size_t, FieldState) override;
    size_t getSize() const override;
    FieldState get(std::size_t, std::size_t) const override; 
    ~Board() = default;
    private:
    std::array<std::array<FieldState, 3>, 3> fields;

};
