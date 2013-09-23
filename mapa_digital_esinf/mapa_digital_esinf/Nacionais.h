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
	void escreve() const ;
	//virtual Nacionais* clone() const; //clone
};

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

string Nacionais:: getTipoPavimento() const{
	return tipoPavimento;
}

void Nacionais:: setTipoPavimento(int pav){
	tipoPavimento=pav;
}

void Nacionais::leitura(){
	cout << "\nTipo de Pavimento " ; cin >> tipoPavimento  ; 
}

void Nacionais::escreve() const{
	cout << "\nTipo de Pavimento: "<< tipoPavimento <<endl  ;
}

#endif	/* NACIONAIS_H */

