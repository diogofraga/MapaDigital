/* 
 * File:   AutoEstrada.h
 * Author: mega
 *
 * Created on 18 September 2013, 11:31
 */

#ifndef AUTOESTRADA_H
#define	AUTOESTRADA_H

#include <iostream>
#include <string>
#include "ViasLigacao.h"
using namespace std;
class AutoEstrada:public ViasLigacao{
private:
	float precoPortagem;
public:
	AutoEstrada();
	AutoEstrada(int a, float b, float c,float d);
	AutoEstrada(const AutoEstrada& at);
	~AutoEstrada();
	//gets
	float getPrecoPortagem() const;
	//sets
	void setPrecoPortagem(float preco);
	//leitura e escrita
	virtual void leitura() ;
	virtual void escreve(ostream &out) const;
	virtual AutoEstrada* clone() const ;

};

AutoEstrada::AutoEstrada():ViasLigacao(){
    precoPortagem=0;
}

AutoEstrada::AutoEstrada(int a, float b, float c,float d):ViasLigacao(a,b,c){
	precoPortagem=d;
}

AutoEstrada::AutoEstrada(const AutoEstrada& at):ViasLigacao(at){
	precoPortagem=at.precoPortagem;
}

AutoEstrada::~AutoEstrada(){}

float AutoEstrada::getPrecoPortagem() const{
	return precoPortagem;
}

void AutoEstrada::setPrecoPortagem(float preco){
	precoPortagem = preco;
}

void AutoEstrada::leitura(){
	cout << "\n Preco de Portagem: " ; cin >> precoPortagem  ; 
}

void AutoEstrada::escreve(ostream &out) const{
	cout << "\nPreco de Portagem: "<< precoPortagem <<" euros"<<endl  ;
}

ostream & operator <<( ostream &out , const AutoEstrada &at)
{
	at.escreve(out);
	return out;
}
ViasLigacao* AutoEstrada::clone() const 
{
	return new AutoEstrada(*this);
}

#endif	/* AUTOESTRADA_H */

