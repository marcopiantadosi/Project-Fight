#include <unistd.h>
#include <windows.h>
#include <conio.h>
#include <iostream>
#include <time.h>
#include "game.h"


using namespace std;


//utilizzo della funzione load per il loading del gioco (uso grafico), dopo la scelta dell'utente
void game::load()
{
	system("cls");

	//dichiarazioni variabili
    int r,q;
    cout<<endl;
    SetColor(10);
    cout<<"LOADING..."<<endl;

    //ciclo for utilizzato per generare la barra del caricamento
    for(r=1;r<=20;r++){
    SetColor(10);
    for(q=0;q<=100000000;q++);//durata caricamento
    printf("%c",177);}
    SetColor(15);
}

