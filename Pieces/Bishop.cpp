#include "Bishop.hpp"

Bishop::Bishop(const bool white) : Piece(white)
{
    if(_IsWhite) _Type = W_BISHOP;
    else         _Type = B_BISHOP;
}

/**
 * Indicates if moving to the given position is possible
 * @param x,y possible position
 * @returns true if the move is possible, else false
 */
bool Bishop::isMoveValid(const int x, const int y, const bool attacking)
{
    int dx = abs(x - _X);
    int dy = abs(y - _Y);

    //if the piece doesn't move
    if(dx == 0 && dy == 0) return false;

    //x and y should change together with the same value
    if(dx != dy) return false;

    //default
    return true;
}

/**
 * Gets the piece type
 * @returns Type (a number between -6 and 6)
 */
int Bishop::getType() const 
{
    return _Type;
}

Bishop::~Bishop()
{
    
}