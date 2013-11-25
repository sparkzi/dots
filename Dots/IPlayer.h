#pragma once
#include "Move.h"
#include "Board.h"

class IPlayer
{
public:
	Move makeMove(const Fields& board);
};