#pragma once
#include "IPlayer.h"
#include "Move.h"
#include <string>

typedef unsinged int Score;


class Dots
{
public:
	Dots(const int n, const int m);
	~Dots();
	Score play(IPlayer* player);

private:
	bool verifyMove(const Move& move);
	void applyMove(const Move& move);

	struct PlayerInfo
	{
		std::string name_;
		Score points_;
		//TO DO: Moves movesHistory_;
	};


	Board board_;
};

