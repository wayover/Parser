#ifndef PARSER_H_
#define PARSER_H_



#include <iostream>
#include <string>

class parser
{
protected:
	int n;
	int *tab = new int[n];
public:
	parser();
	virtual ~parser();

	void dodajliczby(std::string stringliczb);



};





#endif