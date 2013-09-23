/* 
 * File:   ViasLigacao.h
 * Author: mega
 *
 * Created on 18 September 2013, 11:33
 */

#ifndef VIASLIGACAO_H
#define	VIASLIGACAO_H

#include <iostream>
#include <string>

using namespace std;
class ViasLigacao{
private:
	int codVia;
	float totalKm;
	float tempoMed;
public:
	ViasLigacao();
	ViasLigacao(int a,float b, float c);
	ViasLigacao(const ViasLigacao& vl);
	virtual ~ViasLigacao();
	//gets
	int getCodVia() const;
	float getTotalKm() const;
	float getTempoMed() const;
	//sets
	void setCodVia(int cod);
	void setTotalKm(float total);
	void setTempoMed(float tempo);
	//leitura e escrita
	virtual void leitura() ;
	virtual void escreve() const ;	
	//listar
	//virtual void listar() const ; //ainda por implementar, nao me lembro.
	//virtual ViasLigacao* clone() const; //clone
};


ViasLigacao::ViasLigacao(){
    codVia=0;
    totalKm=0;
    tempoMed=0;
}

ViasLigacao::ViasLigacao(int a,float b, float c){
	codVia=a;
	totalKm=b;
	tempoMed=c;
}

ViasLigacao::ViasLigacao(const ViasLigacao& vl){
	codVia=vl.codVia;
	totalKm=vl.totalKm;
	tempoMed=vl.tempoMed;
}

ViasLigacao::~ViasLigacao(){
}

int ViasLigacao::getCodVia() const{
	return codVia;
}

float ViasLigacao::getTotalKm() const{
	return totalKm;
}
float ViasLigacao::getTempoMed() const{
	return tempoMed;
}

void ViasLigacao::setCodVia(int cod){
	codVia=cod;
}

void ViasLigacao::setTotalKm(float total){
	totalKm=total;
}


void ViasLigacao::setTempoMed(float tempo){
	tempoMed=tempo;
}


void ViasLigacao::leitura(){
	cout << "\nCodigo de Via" ; cin >> codVia  ; 
	cout << "\nTotal Kilometros " ; cin >> totalKm ;
	cout << "\nTempo Medio " ; cin >> tempoMed ;
}

void ViasLigacao::escreve() const{
	cout << "\nCodigo de Via: " << codVia << "\nTotal Kilometros: " << totalKm << "\nTempo Medio: " << tempoMed <<endl  ;
}

#endif	/* VIASLIGACAO_H */

