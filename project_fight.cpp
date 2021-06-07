#include <unistd.h>
#include <windows.h>
#include <conio.h>
#include <iostream>
#include <time.h>
#include "game.h"


using namespace std;

/**********
* Nome progetto: PROJECT FIGHT                                                                    *
* Ultima modifica: 01/06/        	                                                          *
* Versione:  5.0.0                                                                         *
* Sviluppato da: MARCO PIANTADOSI, MANUEL OCONE                                                                    *
* Nome gruppo: MeaTeaM                                                                       *
**********/



void game::gioco(void)
{
	//dichiarazione delle variabili
    int segnoMio, segnoPC, vite_giocatore = 3, vite_computer = 3;

    do
	{

    	// il giocatore sceglie il suo segno
    	do
	    {
	    	system("cls");

   			//funzione logo
   			miniproject();

   			cout<<endl;


   			//stampa a video delle vite dell'utente
   			SetColor(5);
			cout<<"VITE DEL GIOCATORE: "<< vite_giocatore<<endl;

			//stampa a video delle vite del PC
			cout<<"VITE DEL COMPUTER: " << vite_computer<<endl;
			SetColor(15);
			cout<<endl;

			//stampa a video per la scelta dei segni
    		cout<<"SEGNI DISPONIBILI:\n\t"<<endl;

			cout<<"\n 1=ACQUA\t"<<endl;

			cout<<endl;
			acqua();

			cout<<"\n 2=ARIA\t"<<endl;
			cout<<endl<<endl;
			aria();

			cout<<"\n 3=FULMINE\t"<<endl;
			cout<<endl<<endl;
			fulmine();

			cout<<"\n 4=FUOCO\t"<<endl;
			cout<<endl<<endl;
			fuoco();

			cout<<"\n 5=FOGLIA\t"<<endl;
			cout<<endl<<endl;
			foglia();

    		cout<<endl;

    		cout<<"\nSCEGLI UN SEGNO:\n"<<endl;
    		cin>>segnoMio;
    		system("cls");


    		/*costrutto if che viene utilizzato in caso l'utente non scelga nessuno
			  dei valori presenti nella printf precedente*/
    		if ((segnoMio!=1)&&(segnoMio!=2)&&(segnoMio!=3)&&(segnoMio!=4)&&(segnoMio!=5))
    		errore();
    		sleep(2);

    	}while((segnoMio!=1)&&(segnoMio!=2)&&(segnoMio!=3)&&(segnoMio!=4)&&(segnoMio!=5));

		//si genera in modo casuale il segno giocato dal PC
    	srand(time(0));
    	segnoPC= 1 + rand()%5;

	    // è chiamata la procedura che verifica chi ha vinto
    	verifica_vincitore(segnoMio, segnoPC, vite_giocatore, vite_computer);

	    // si visualizzano i segni giocati
    	cout<<" SEGNO GIOCATORE = "<<endl;
	    stampa_segno(segnoMio);

	    cout<<" SEGNO COMPUTER = "<<endl;
	    stampa_segno(segnoPC);

	    cout<<endl<<endl<<endl;


		//stampa a video delle vite dell'utente
		SetColor(5);
		cout<<"VITE DEL GIOCATORE: "<<vite_giocatore<<endl;

		//stampa a video delle vite del PC
		cout<<"VITE DEL COMPUTER: "<< vite_computer<<endl;
	    SetColor(15);
		system("PAUSE");
		system("cls");

	//ciclo ripetitivo che si ripete fin quando le vite dell'utente e del PC non raggiungono lo zero
	}while(vite_giocatore > 0 && vite_computer > 0);

	//scelta del vincitore in base alle vite che sono rimaste
	if (vite_computer < 1)
    haivinto();

    else if (vite_giocatore < 1)
    gameover();
}
