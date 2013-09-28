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
	//int tamanho, actual; para o vector de apontadores dinamico
	//ViasLigacao * * vias;
	int codVia;
	float totalKm;
	float tempoMed;
public:
	//construtores e destrutor
	ViasLigacao();
	//ViasLigacao(int tam = 20);
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
	virtual void escreve(ostream &out) const;
	//listar
	//virtual void listar() const ; //ainda por implementar
	virtual ViasLigacao* clone() const; // fun��es virtuais puras
	//sobrecarga
	void operator=(const ViasLigacao &vl);
	bool operator==(const ViasLigacao &vl);
	
};

//construtores e destrutor
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


//sets e gets
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

//leitura e escrita
void ViasLigacao::leitura(){
	cout << "\nCodigo de Via" ; cin >> codVia  ; 
	cout << "\nTotal Kilometros " ; cin >> totalKm ;
	cout << "\nTempo Medio " ; cin >> tempoMed ;
}

void ViasLigacao::escreve(ostream &out) const{
	out << "\nCodigo de Via: " << codVia << "\nTotal Kilometros: " << totalKm << "\nTempo Medio: " << tempoMed <<endl  ;
}

//clone
ViasLigacao* ViasLigacao::clone() const
{
	return new ViasLigacao(*this);
}

//sobrecarga
ostream & operator <<(ostream &out, const ViasLigacao &vl)
{
	vl.escreve(out);
	return out;
}

ostream & operator <<(ostream &out, const ViasLigacao *vl)
{
	vl->escreve(out);
	return out;
}

void ViasLigacao::operator=(const ViasLigacao & vl)
{
	this->codVia = vl.codVia;
	this->totalKm = vl.totalKm;
	this->tempoMed = vl.tempoMed;
}

bool ViasLigacao::operator==(const ViasLigacao & vl)
{
	if (this->codVia == vl.codVia && this->totalKm == vl.totalKm && this->tempoMed == vl.tempoMed){
		return true;
	}
	else return false;
}




#endif	/* VIASLIGACAO_H */

