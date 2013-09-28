/* 
 * File:   InteressesTuristicos.h
 * Author: mega
 *
 * Created on 18 September 2013, 11:32
 */

#ifndef INTERESSESTURISTICOS_H
#define	INTERESSESTURISTICOS_H

#include <iostream>
#include <string>
using namespace std;
class InteressesTuristicos{
private:
	string descr;
public:
	//construtores e destrutor
	InteressesTuristicos();
	InteressesTuristicos(string a);
	InteressesTuristicos(const InteressesTuristicos& it);
	virtual ~InteressesTuristicos();
	//gets
	string getDescricao() const;
	//sets
	void setDescricao(string descr);
	//leitura e escrita
	virtual void leitura() ;
	//virtual void escreve() const ;
	//virtual void listar() const ; //ainda por implementar, nao me lembro.
	virtual void escreve(ostream &out) const;
	//clone
	virtual InteressesTuristicos* clone()const;
	//sobrecarga
	void operator=(const InteressesTuristicos &it);
	bool operator==(const InteressesTuristicos &it);
};

//construtores e destrutor
InteressesTuristicos::InteressesTuristicos(){
    descr="";
}

InteressesTuristicos::InteressesTuristicos(string a){
	descr=a;
}

InteressesTuristicos::InteressesTuristicos(const InteressesTuristicos& it){
	descr=it.descr;
}

InteressesTuristicos::~InteressesTuristicos(){
}
//gets e sets
string InteressesTuristicos:: getDescricao() const{
	return descr;
}

void InteressesTuristicos:: setDescricao(string descr){
	descr=descr;
}
//leitura e escrita
void InteressesTuristicos::leitura(){
	cout << "\nDescricao: " ; cin >> descr  ; 
}

void InteressesTuristicos::escreve(ostream &out) const{
	out << "\nDescricao: "<< descr <<endl  ;
}
//sobrecarga
ostream & operator <<(ostream &out, const InteressesTuristicos &it)
{
	it.escreve(out);
	return out;
}

ostream & operator <<(ostream &out, const InteressesTuristicos *it)
{
	it->escreve(out);
	return out;
}

void InteressesTuristicos::operator=(const InteressesTuristicos & it)
{
	this->descr = it.descr;
}

bool InteressesTuristicos::operator==(const InteressesTuristicos & it)
{
	std::string a = this->getDescricao();
	std::string b = it.getDescricao();
	if (a.compare(b) == 0 ){
		return true;
	}
	else return false;
}
//clone
InteressesTuristicos* InteressesTuristicos::clone() const
{
	return new InteressesTuristicos(*this);
}
#endif	/* INTERESSESTURISTICOS_H */

