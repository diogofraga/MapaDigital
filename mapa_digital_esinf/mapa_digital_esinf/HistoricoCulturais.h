/* 
 * File:   HistoricoCulturais.h
 * Author: mega
 *
 * Created on 18 September 2013, 11:32
 */

#ifndef HISTORICOCULTURAIS_H
#define	HISTORICOCULTURAIS_H

#include <iostream>
#include <string>
#include "InteressesTuristicos.h"
using namespace std;
class HistoricoCulturais:public InteressesTuristicos{
private:
	float HtempoMed;
	float HAbertura;
	float HEncerramento;
public:
	//construtores e destrutor
	HistoricoCulturais();
	HistoricoCulturais(string descr,float tm,float ha,float he);
	HistoricoCulturais(const HistoricoCulturais& hc);
	~HistoricoCulturais();
	//gets
	float getHtempoMed() const;
	float getHAbertura() const;
	float getHEncerramento() const;
	//sets
	void setHtempoMed(float md);
	void setHAbertura(float ab);
	void setHEncerramento(float en);
	//leitura e escrita
	virtual void leitura() ;
	virtual void escreve(ostream &out) const;
	//clone
	virtual InteressesTuristicos* clone() const ;
	//Sobrecarga de operadores
	void operator=(const HistoricoCulturais &hc);
	bool operator==(const HistoricoCulturais &hc);
};
//construtores e destrutor
HistoricoCulturais::HistoricoCulturais():InteressesTuristicos(){
    HtempoMed=0;
    HAbertura=0;
    HEncerramento=0;
}

HistoricoCulturais::HistoricoCulturais(string descr,float tm, float ha, float he):InteressesTuristicos(descr){
	HtempoMed=tm;
	HAbertura=ha;
	HEncerramento=he;
}

HistoricoCulturais::HistoricoCulturais(const HistoricoCulturais& hc):InteressesTuristicos(hc){
	HtempoMed=hc.HtempoMed;
	HAbertura=hc.HAbertura;
	HEncerramento=hc.HEncerramento;
}

HistoricoCulturais::~HistoricoCulturais(){}

//gets
float HistoricoCulturais::getHtempoMed() const{
	return HtempoMed;
}
float HistoricoCulturais::getHAbertura() const{
	return HAbertura;
}
float HistoricoCulturais::getHEncerramento() const{
	return HEncerramento;
}
//sets
void HistoricoCulturais::setHtempoMed(float md){
	HtempoMed= md;
}

void HistoricoCulturais::setHAbertura(float ab){
	HAbertura = ab;

}

void HistoricoCulturais::setHEncerramento(float en){
	HEncerramento = en;
}
//leitura e escrita
void HistoricoCulturais::leitura(){
	cout << "\n Tempo Medio : " ; cin >> HtempoMed ; 
	cout << "\n Hora de Abertura : " ; cin >> HAbertura ; 
	cout << "\n Hora de Encerramento : " ; cin >> HEncerramento ; 
}

void HistoricoCulturais::escreve(ostream &out) const{
	InteressesTuristicos::escreve(out);
	out << "\nTempo Medio: "<< HtempoMed <<"\nHora de Abertura: " << HAbertura << "\nHora de Encerramento: " << HEncerramento<<endl;
}
//clone
InteressesTuristicos* HistoricoCulturais::clone() const
{
	return new HistoricoCulturais(*this);
}
//Sobrecarga de operadores
ostream & operator <<(ostream &out, const HistoricoCulturais &it)
{
	it.escreve(out);
	return out;
}
void HistoricoCulturais::operator=(const HistoricoCulturais & hc)
{
	this->setDescricao(hc.getDescricao());
	this->HtempoMed = hc.HtempoMed;
	this->HAbertura = hc.HAbertura;
	this->HEncerramento = hc.HEncerramento;
}

bool HistoricoCulturais::operator==(const HistoricoCulturais & hc)
{
	std::string a = this->getDescricao();
	std::string b = hc.getDescricao();
	if (a.compare(b) == 0 && this->HtempoMed == hc.HtempoMed && this->HAbertura == hc.HAbertura && this->HEncerramento == hc.HEncerramento)
	{
		return true;
	}
	else return false;
}
#endif	/* HISTORICOCULTURAIS_H */

