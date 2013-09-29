
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
	//Cabe�alho e rodap� da aplica��o
    void header();
    void bottom();
	//vectores din�micos e var�veis de controle
	//Interesses Turisticos (IT)
	InteressesTuristicos * * vecIT;
	int tamanhoIT;
	int actualIT;
	//Vias de Liga��o (VL)
	ViasLigacao * * vecVL;
	int tamanhoVL;
	int actualVL;
	//M�todos de controle dos vectores
	void reSizeIT();
	void reSizeVL();
	void destroy();

public:
	//Construtor e destrutor
    Teste();
    ~Teste();
	// m�todo de teste
    void Run();
	//M�todo inserir Interesse Turistico
	void  inserirIT(const InteressesTuristicos * it);
	//M�todo inserir Vias de Liga��o
	void  inserirVL(const ViasLigacao * vl);
};
//Cabe�alho e rodap� da Aplica��o
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
//construtor e destrutor
Teste::Teste()
{
	vecIT = new InteressesTuristicos*[10];
	vecVL = new ViasLigacao*[10];
	tamanhoIT = 10;
	actualIT = 0;
	tamanhoVL = 10;
	actualVL = 0;

}
Teste::~Teste()
{
	destroy();
}
//metodos de controle dos vectores din�micos
void Teste::destroy()
{
	for (int i = 0; i < actualIT; i++)
	{
		delete vecIT[i];
		
	}
	for (int i = 0; i < actualVL; i++)
	{
		delete vecVL[i];

	}
	delete [] vecIT;
	delete [] vecVL;
}

void Teste::reSizeIT()
{
	if (actualIT == tamanhoIT)
	{
		tamanhoIT = tamanhoIT * 2;
		InteressesTuristicos * * temp = new InteressesTuristicos * [tamanhoIT];
		for (int i = 0; i < tamanhoIT; i++)
		{
			temp[i] = vecIT[i];
		}
		delete[] vecIT;
		vecIT = temp;
	}

}

void Teste::reSizeVL()
{
	if (actualVL == tamanhoVL)
	{
		tamanhoVL = tamanhoVL * 2;
		ViasLigacao * * temp = new ViasLigacao *[tamanhoVL];
		for (int i = 0; i < tamanhoVL; i++)
		{
			temp[i] = vecVL[i];
		}
		delete[] vecVL;
		vecVL = temp;
	}

}

//met�do para testar a classe
void Teste::Run()
{
   AutoEstrada* a=new AutoEstrada();
   HistoricoCulturais* hc=new HistoricoCulturais();
   InteressesTuristicos* it=new InteressesTuristicos("PRAIA");
   Nacionais* n=new Nacionais();
   Naturais* na= new Naturais();
   ViasLigacao* vl=new ViasLigacao();
   //cabe�alho
   header();
   
   /*
   cout << *a<<endl;
   cout << *hc<<endl;
   cout << *it<<endl;
   cout << *n<<endl;
   cout << *na<<endl;
   cout << *vl<<endl;
   */
   
   inserirIT(it);
   inserirIT(na);
   inserirIT(hc);

   inserirVL(vl);
   inserirVL(n);
   inserirVL(a);

   for (int i = 0; i < actualIT; i++)
   {
	   cout << "IT" <<endl <<vecIT[i]<<endl;
   }
	
   for (int j = 0; j < actualVL; j++)
	   cout << "VL" <<endl<<vecVL[j]<<endl;
   
   //rodap�
   bottom();
}
//M�todo inserir Interesse Turistico
void  Teste::inserirIT(const InteressesTuristicos * it)
{
	reSizeIT();
	vecIT[actualIT] = it->clone();
	actualIT++;

}
//M�todo inserir Vias de Liga��o
void  Teste::inserirVL(const ViasLigacao * vl)
{
	reSizeVL();
	vecVL[actualVL] = vl->clone();
	actualVL++;
}

#endif	/* TESTE_H */

