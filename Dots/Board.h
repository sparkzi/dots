#pragma once
#include "Color.h"
#include <vector>

typedef std::vector<std::vector<EColor> > Fields;

class Board
{
public:
	Board(void);
	~Board(void);
	void actualize();
private:
	void actualizeColumns();
	Fields fields_;
};
