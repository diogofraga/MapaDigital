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
	virtual void escreve() const ;	
	//listar
	//virtual void listar() const ; //ainda por implementar
	virtual ViasLigacao* clone(); // funções virtuais puras
	virtual void escreve(ostream &out) const;

	// void inserirViaLigacao(ViaLigacao *vl); para adicionar
	// void inserirViasLigacao(ViasLigacao *vl)
	
	
};

/*ViasLigacao::ViasLigacao(int tam)
{
	tamanho = tam;
	actual = 0;

	vias = new ViasLigacao * [tamanho];
}*/ //codigo preparado para o construtor com o vector


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

/*ViasLigacao::ViasLigacao(const Desenho &d)
{
	tamanho = d.tamanho;
	actual = d.actual;

	vec = new ViasLigacao *[tamanho];

	for (int i=0; i<actual; i++)
		vec[i] = d.vec[i]->clone();
}*/

//codigo para preencher


/*ViasLigacao::~ViasLigacao()
{
	for (int i=0; i<actual; i++)
		delete vias[i];

	delete [] vias;
}*/ //codigo para o destrutor com o vector



/*void ViasLigacao::inserirViasLigacao(ViasLigacao *vl)
{
	if (actual == tamanho)
	{
		tamanho = 2* tamanho;
		ViasLigacao * * vec_tmp = new ViasLigacao * [tamanho];
		for (int i=0; i<actual; i++)
			vec_tmp[i] = vias[i];
		delete [] vias;
		vias = vec_tmp;
	}

	vias[actual] = vl->clone();
	actual++;
}*/ //codigo para inserir vias



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

void ViasLigacao::escreve(ostream &out) const{
	cout << "\nCodigo de Via: " << codVia << "\nTotal Kilometros: " << totalKm << "\nTempo Medio: " << tempoMed <<endl  ;
}

ostream & operator <<( ostream &out , const ViasLigacao &vl)
{
	vl.escreve(out);
	return out;
}

#endif	/* VIASLIGACAO_H */

