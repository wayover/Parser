#include "Parser.h"


parser::parser()
{

}

parser::~parser()
{

}

void parser::dodajliczby(std::string stringliczb)
{
	std::string tymcz;
	int dlugosc = stringliczb.size();
	int miejsce = 0;
	int dlugoscliczby = 0;
	int y = 0;
	
		for (int x = 0; x < dlugosc; ++x)
		{
			if (stringliczb[x] == ' ')
			{
				tymcz = stringliczb.substr(miejsce, dlugoscliczby);
				tab[y]=std::stoi(tymcz);
				++y;
				++dlugoscliczby;
				miejsce = miejsce + dlugoscliczby;
			}
			else
			{
				++dlugoscliczby;
			}
		}


}