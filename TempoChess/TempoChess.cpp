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
	std::cout<<std::bitset<128>(FileABB)<<"\n"<< Utility::pretty(FileABB)<<std::endl;


    return 0;
}

