
#ifndef TESTE_H
#define	TESTE_H

#include <iostream>
#include <string>
#include"AutoEstrada.h"
#include"HistoricoCulturais.h"
#include"InteressesTuristicos.h"
#include"Nacionais.h"
#include"Naturais.h"
#include"ViasLigacao.h"
using namespace std;

class Teste
{
private:
    void header();
    void bottom();
    //AutoEstrada a;
    //HistoricoCulturais hc;
    //InteressesTuristicos it;
    //Nacionais n;
    //Naturais na;
    //ViasLigacao vl;
public:
    Teste();
    ~Teste();
    void Run();
    void Fim();
};
void Teste::header(){
    cout<<"===================================="<<endl;
    cout<<"             MAPA DIGITAL           "<<endl;
    cout<<"===================================="<<endl;
}

void Teste::bottom(){
    cout<<"===================================="<<endl;
    cout<<"              2013/ 2014            "<<endl;
    cout<<"                 v0.0               "<<endl;
    cout<<"===================================="<<endl;
}

Teste::Teste()
{}
void Teste::Run()
{
   AutoEstrada* a=new AutoEstrada();
   HistoricoCulturais* hc=new HistoricoCulturais();
   InteressesTuristicos* it=new InteressesTuristicos();
   Nacionais* n=new Nacionais();
   Naturais* na= new Naturais();
   ViasLigacao* vl=new ViasLigacao();
   header();
   cout << *a<<endl;
   cout << *hc<<endl;
   cout << *it<<endl;
   cout << *n<<endl;
   cout << *na<<endl;
   cout << *vl<<endl;
   bottom();
}
Teste::~Teste(){}

#endif	/* TESTE_H */

