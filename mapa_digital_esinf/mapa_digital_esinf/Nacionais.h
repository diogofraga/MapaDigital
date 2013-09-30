/* 
 * File:   Nacionais.h
 * Author: mega
 *
 * Created on 18 September 2013, 11:32
 */

#ifndef NACIONAIS_H
#define	NACIONAIS_H

#include <iostream>
#include <string>
#include "ViasLigacao.h"
using namespace std;
class Nacionais:public ViasLigacao{
private:
	string tipoPavimento;
public:
	//construtores e destrutor
	Nacionais();
	Nacionais(int a, float b, float c,string d);
	Nacionais(const Nacionais& n);
	~Nacionais();
	//gets
	string getTipoPavimento() const;
	//sets
	void setTipoPavimento(int pav);
	//leitura e escrita
	void leitura() ;
	void escreve(ostream &out) const;
	//clone
	ViasLigacao* clone() const ;
	//sobrecarga
	void operator=(const Nacionais & n);
	bool operator==(const Nacionais & n);
};
//construtores e destrutor
Nacionais::Nacionais():ViasLigacao(){
    tipoPavimento="Terra";
}

Nacionais::Nacionais(int a, float b, float c,string d):ViasLigacao(a,b,c){
	tipoPavimento=d;
}

Nacionais::Nacionais(const Nacionais& n):ViasLigacao(n){
	tipoPavimento=n.tipoPavimento;
}

Nacionais::~Nacionais(){}
//gets e sets
string Nacionais:: getTipoPavimento() const{
	return tipoPavimento;
}

void Nacionais:: setTipoPavimento(int pav){
	tipoPavimento=pav;
}
//leitura e escrita
void Nacionais::leitura(){
	cout << "\nTipo de Pavimento " ; cin >> tipoPavimento  ; 
}

void Nacionais::escreve(ostream &out) const{
	ViasLigacao::escreve(out);
	out << "\n                  Tipo de Pavimento: "<< tipoPavimento <<endl  ;
}
//sobrecarga
ostream & operator <<(ostream &out, const Nacionais &n)
{
	n.escreve(out);
	return out;
}

ostream & operator <<(ostream &out, const Nacionais *n)
{
	n->escreve(out);
	return out;
}
void Nacionais::operator=(const Nacionais & n)
{
	this->tipoPavimento = n.tipoPavimento;

}

bool Nacionais::operator==(const Nacionais & n)
{
	if (this->tipoPavimento == n.tipoPavimento)
	{
		return true;
	}
	else return false;
}

//clone
ViasLigacao* Nacionais::clone() const
{
	return new Nacionais(*this);
}
#endif	/* NACIONAIS_H */

