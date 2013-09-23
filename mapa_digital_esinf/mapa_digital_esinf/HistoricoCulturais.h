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
	int HAbertura;
	int HEncerramento;
public:
	HistoricoCulturais();
	HistoricoCulturais(string descr,float tm,float ha,float he);
	HistoricoCulturais(const HistoricoCulturais& hc);
	~HistoricoCulturais();
	//gets
	float getHtempoMed() const;
	int getHAbertura() const;
	int getHEncerramento() const;
	//sets
	void setHtempoMed(int md);
	void setHAbertura(int ab);
	void setHEncerramento(int en);
	//leitura e escrita
	void leitura() ;
	void escreve() const ;
	//virtual HistoricoCulturais* clone() const; //clone
};

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


float HistoricoCulturais::getHtempoMed() const{
	return HtempoMed;
}
int HistoricoCulturais::getHAbertura() const{
	return HAbertura;
}
int HistoricoCulturais::getHEncerramento() const{
	return HEncerramento;
}

void HistoricoCulturais::setHtempoMed(int md){
	HtempoMed= md;
}

void HistoricoCulturais::setHAbertura(int ab){
	HAbertura = ab;

}

void HistoricoCulturais::setHEncerramento(int en){
	HEncerramento = en;
}

void HistoricoCulturais::leitura(){
	cout << "\n Tempo Medio : " ; cin >> HtempoMed ; 
	cout << "\n Hora de Abertura : " ; cin >> HAbertura ; 
	cout << "\n Hora de Encerramento : " ; cin >> HEncerramento ; 
}

void HistoricoCulturais::escreve() const{
	cout << "\nTempo Medio: "<< HtempoMed <<"\nHora de Abertura: " << HAbertura << "\nHora de Encerramento: " << HEncerramento<<endl;
}

#endif	/* HISTORICOCULTURAIS_H */

