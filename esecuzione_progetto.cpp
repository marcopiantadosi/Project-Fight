#include <unistd.h>
#include <windows.h>
#include <conio.h>
#include <iostream>
#include <time.h>
#include "game.h"

using namespace std;


void game::esecution()
{
	SetColor(15);

	int segnoMio, segnoPC, vite_giocatore = 3, vite_computer = 3;

	//dichiarazione variabili
	int giocatore1,giocatore2;
	int scelta,segno;
	char risposta;


    /*ciclo che viene utilizzato per la scelta da parte dell'utente dove digiterà 1 per avviare il gioco,
	2 per leggere le regole, 3 per pulire lo schermo e 4 per terminare il gioco*/
		welcome();

		system("cls");
	do
	{
		getchar();


		//funzione logo
		miniproject();

		SetColor(12);
		cout<<"\n\nTi consiglio di Leggere le regole prima di iniziare ;"<<endl;
		SetColor(1);
	    cout<<"\nPremi 1 per Giocare"<<endl;
	    SetColor(3);
		cout<<"\nPremi 2 per Vedere le regole"<<endl;
		SetColor(15);
		cout<<"\nPremi 3 per Pulire lo schermo"<<endl;
		SetColor(4);
		cout<<"\nPremi 4 per uscire"<<endl;
		SetColor(15);
	    cout<<"\n\nScelta:"<<endl;		//stampa a video per la scelta dell'utente

		//inserimento della scelta da parte dell'utente
		scelta = getchar();

		//utilizzo del costrutto switch per la decisione dell'utente
    	switch(scelta)
    	{
	        case '1':
	        load();
	        gioco();
	        break;

	        case '2':
	        regole();
	    	break;

	        case '3':
	        system("cls");
	        break;

	    	case '4':
	        exit(0);
	        break;


			//istruzione che viene utilizzata se l'utente non sceglierà nessuna delle 4 scelte presenti nello switch
	        default:
	        SetColor(4);
			cout<<"Operazione sconosciuta\n"<<endl;
			SetColor(15);
	        break;

    	}

		getchar();

		//stampa a video per ripristinare il menu e quindi far ricominciare il gioco
		cout<<"\nPremi R/r per tornare al menu' di gioco: "<<endl;

		//opzione per il ripristino del menu
	    risposta=getchar();

		system("cls");
	    cout<<endl;

    }

    //ciclo che viene utilizzato per l'inserimento da parte dell'utente della lettera S o s per ricominciare
	while((risposta == 'r') || (risposta == 'R'));
    getchar();
	cout<<endl;

	system("PAUSE");

}
