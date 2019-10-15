// TempoChess.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "bitboard.h"
#include <iostream>
#include <bitset>

int main()
{
	std::cout << std::bitset<64>(BitBoards::WhiteSquares) << std::endl;
	std::cout << std::bitset<64>(BitBoards::BlackSquares) << std::endl;
	std::cout << std::bitset<64>(BitBoards::FileABB) << std::endl;

    return 0;
}

