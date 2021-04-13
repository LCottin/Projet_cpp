#ifndef __BOARD__
#define __BOARD__

#include <iostream>
#include <string>

using namespace std;

class Board
{
    private:
        const int _SizeX = 8;
        const int _SizeY = 8;
        //const bool _IsTopLeftWhite = true;

        int** _Board; //board to play
        int** _InitBoard; //Initial board with black and white tiles

    public:
        Board();
        void printBoard(const bool printInit) const;
        ~Board();
};
 


#endif