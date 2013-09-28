/* 
 * File:   Naturais.h
 * Author: mega
 *
 * Created on 18 September 2013, 11:33
 */

#ifndef NATURAIS_H
#define	NATURAIS_H

#include <iostream>
#include <string>
#include "InteressesTuristicos.h"
using namespace std;
class Naturais:public InteressesTuristicos{
private:
	int area;
public:
	//construtores e destrutor
	Naturais();
	Naturais(int a);
	Naturais(const Naturais& n);
	~Naturais();
	//gets
	int getArea() const;
	//sets
	void setArea(int ar);
	//leitura e escrita
	void leitura() ;
	void escreve(ostream &out) const;
	InteressesTuristicos* clone() const;
	//Sobrecarga de operadores
	void operator=(const Naturais &n);
	bool operator==(const Naturais &n);
};
//construtores e destrutor
Naturais::Naturais():InteressesTuristicos(){
area=0;
}
Naturais::Naturais(int a):InteressesTuristicos(){
	area=a;
}
Naturais::Naturais(const Naturais& n):InteressesTuristicos(n){
	area=n.area;
}
Naturais::~Naturais(){}
//gets e sets
int Naturais:: getArea() const{
	return area;
}

void Naturais:: setArea(int ar){
	area=ar;
}
//leitura e escrita
void Naturais::leitura(){
	cout << "\nArea " ; cin >> area  ; 
}

void Naturais::escreve(ostream &out) const{
	InteressesTuristicos::escreve(out);
	out << "\nArea: "<< area <<endl  ;
}

//sobrecarga
//Sobrecarga de operadores
ostream & operator <<(ostream &out, const Naturais &n)
{
	n.escreve(out);
	return out;
}

ostream & operator <<(ostream &out, const Naturais *n)
{
	n->escreve(out);
	return out;
}
void Naturais::operator=(const Naturais & n)
{
	this->setDescricao(n.getDescricao());
	this->area = n.area;
}

bool Naturais::operator==(const Naturais & n)
{
	std::string a = this->getDescricao();
	std::string b = n.getDescricao();
	if (a.compare(b) == 0 && this->area == n.area)
	{
		return true;
	}
	else return false;
}

//clone
InteressesTuristicos* Naturais::clone() const
{
	return new Naturais(*this);
}
#endif	/* NATURAIS_H */

