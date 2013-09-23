/* 
 * File:   InteressesTuristicos.h
 * Author: mega
 *
 * Created on 18 September 2013, 11:32
 */

#ifndef INTERESSESTURISTICOS_H
#define	INTERESSESTURISTICOS_H

#include <iostream>
#include <string>
using namespace std;
class InteressesTuristicos{
private:
	string descr;
public:
	InteressesTuristicos();
	InteressesTuristicos(string a);
	InteressesTuristicos(const InteressesTuristicos& it);
	virtual ~InteressesTuristicos();
	//gets
	string getDescricao() const;
	//sets
	void setDescricao(int desc);
	//leitura e escrita
	virtual void leitura() ;
	virtual void escreve() const ;
	//virtual void listar() const ; //ainda por implementar, nao me lembro.
	//virtual InteressesTuristicos* clone() const; //clone
};


InteressesTuristicos::InteressesTuristicos(){
    descr="";
}

InteressesTuristicos::InteressesTuristicos(string a){
	descr=a;
}

InteressesTuristicos::InteressesTuristicos(const InteressesTuristicos& it){
	descr=it.descr;
}

InteressesTuristicos::~InteressesTuristicos(){
}
string InteressesTuristicos:: getDescricao() const{
	return descr;
}

void InteressesTuristicos:: setDescricao(int desc){
	descr=desc;
}

void InteressesTuristicos::leitura(){
	cout << "\nDescricao: " ; cin >> descr  ; 
}

void InteressesTuristicos::escreve() const{
	cout << "\nDescricao: "<< descr <<endl  ;
}

#endif	/* INTERESSESTURISTICOS_H */

