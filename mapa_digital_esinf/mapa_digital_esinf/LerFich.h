#ifndef LerFich_
#define LerFich_


#include <iostream.h>
#include <string>
#include <fstream>
#include"InteressesTuristicos.h"
using namespace std;
class LerFich
{
public:
	LerFich();
	LerFich(string fich1, string fich2);
	~LerFich();
	void LerFich1(string fich1);
	//LerFich2();
	

private:
	string fich1;
	string fich2;
};
LerFich::LerFich()
{
	fich1 = "abc.txt";
	fich2 = "ych.txt";
}
LerFich::LerFich(string fich1, string fich2)
{
	this->fich1 = fich1;
	this->fich1 = fich2;
}

LerFich::~LerFich()
{
}
#endif // LerFich_