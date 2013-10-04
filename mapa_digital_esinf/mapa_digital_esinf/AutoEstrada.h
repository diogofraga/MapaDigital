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
	friend istream& operator>> (istream& is, AutoEstrada &at);
	//construtores e destrutor
	AutoEstrada();
	AutoEstrada(int a, float b, float c,float d);
	AutoEstrada(const AutoEstrada& at);
	~AutoEstrada();
	//gets
	float getPrecoPortagem() const;
	//sets
	void setPrecoPortagem(float preco);
	//leitura e escrita
	void leitura();
	void escreve(ostream &out) const;
	//virtual void escreve() const;
	//clone
	ViasLigacao* clone() const ;
	//sobrecarga
	AutoEstrada operator=(const AutoEstrada & at);
	bool operator==(const AutoEstrada & at);

};
//construtores e destrutor
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
//gets
float AutoEstrada::getPrecoPortagem() const{
	return precoPortagem;
}
//sets
void AutoEstrada::setPrecoPortagem(float preco){
	precoPortagem = preco;
}
//leitura e escrita
void AutoEstrada::leitura(){
	cout << "\n Preco de Portagem: " ; cin >> precoPortagem  ; 
}

void AutoEstrada::escreve(ostream &out) const{
	ViasLigacao::escreve(out);
	out<< "\n                  Preco de Portagem: "<< precoPortagem <<" euros"<<endl  ;
}


//sobrecarga
AutoEstrada AutoEstrada::operator=(const AutoEstrada & at)
{
	this->precoPortagem = at.precoPortagem;
	return *this;

}

bool AutoEstrada::operator==(const AutoEstrada & at)
{
	if (this->precoPortagem == at.precoPortagem)
	{
		return true;
	}
	else return false;
}

ostream & operator <<(ostream &out, const AutoEstrada &at)
{
	at.escreve(out);
	return out;
}

ostream & operator <<(ostream &out, const AutoEstrada *at)
{
	at->escreve(out);
	return out;
}


istream& operator>> (istream& is, AutoEstrada &at)
{
	is >> at.precoPortagem;
	return is;
}


//clone
ViasLigacao* AutoEstrada::clone() const
{
	return new AutoEstrada(*this);
}

#endif	/* AUTOESTRADA_H */

