#pragma once
#include "IPlayer.h"

class Benchmark
{
public:
	void addPlayer(const std::string& name, IPlayer* player);
	void startAll();
	void printScores();
};