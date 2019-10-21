// TempoChess.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <bitset>
#include "bitboard.h"
#include "utility.h"

int main()
{
	//std::cout << std::bitset<64>(BitBoards::WhiteSquares) << std::endl;
	//std::cout << std::bitset<64>(BitBoards::BlackSquares) << std::endl;
	//std::cout << std::bitset<64>(BitBoards::FileABB) << std::endl;
	BitBoards::init();
	std::cout<<Utility::pretty(b_rook)<<std::endl;
	std::cout << Utility::pretty(AllSquares) << std::endl;
	std::cout << Utility::pretty(WhiteSquares) << std::endl;

    return 0;
}

