/* 
 * File:   Naturais.h
 * Author: mega
 *
 * Created on 18 September 2013, 11:33
 */

#ifndef NATURAIS_H
#define	NATURAIS_H

#include <iostream>
#include <string>
#include "InteressesTuristicos.h"
using namespace std;
class Naturais:public InteressesTuristicos{
private:
	int area;
public:
	Naturais();
	Naturais(int a);
	Naturais(const Naturais& n);
	~Naturais();
	//gets
	int getArea() const;
	//sets
	void setArea(int ar);
	//leitura e escrita
	virtual void leitura() ;
	virtual void escreve() const ;	
	virtual Naturais* clone() const ;
};
Naturais::Naturais():InteressesTuristicos(){
area=0;
}
Naturais::Naturais(int a):InteressesTuristicos(){
	area=a;
}
Naturais::Naturais(const Naturais& n):InteressesTuristicos(n){
	area=n.area;
}
Naturais::~Naturais(){}

int Naturais:: getArea() const{
	return area;
}

void Naturais:: setArea(int ar){
	area=ar;
}

void Naturais::leitura(){
	cout << "\nArea " ; cin >> area  ; 
}

void Naturais::escreve() const{
	cout << "\nArea: "<< area <<endl  ;
}

#endif	/* NATURAIS_H */

