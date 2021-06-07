#include <unistd.h>
#include <windows.h>
#include <conio.h>
#include <iostream>
#include <time.h>
#include "game.h"


using namespace std;


//regole del gioco
void game::regole(void)
{
	system("cls");

	miniproject();

	//stampa a video delle regole del gioco
	cout<<"\n                     REGOLE PER GIOCARE			\n"<<endl;

	cout<<"\nLo scopo e' sconfiggere l'avversario scegliendo un segno \nin grado di battere quello dell'altro, secondo le seguenti regole: \n"<<endl;
	SetColor(4);
    cout<<"\n\n1)Il fuoco brucia la foglia\n\n"<<endl;
    SetColor(2);
	cout<<"2)La foglia assorbe l'acqua\n\n"<<endl;
	SetColor(1);
	cout<<"3)L'acqua spegne il fuoco\n\n"<<endl;
	SetColor(9);
	cout<<"4)L'aria spegne il fuoco\n\n"<<endl;
	SetColor(14);
	cout<<"5)Il fulmine brucia la foglia\n\n"<<endl;
	SetColor(14);
	cout<<"6)Il fulmine vince contro l'aria\n\n"<<endl;
	SetColor(1);
	cout<<"6)L'acqua vince contro il fulmine\n\n"<<endl;
	SetColor(15);

	cout<<endl;

	cout<<"\n\nSe i due giocatori scelgono lo stesso segno, il gioco e' pari e si gioca di nuovo."<<endl;
    cout<<"\n\nIl gioco viene ripetuto piu' volte, in modo che la persona che vince per prima tre volte, vince il gioco."<<endl;
	cout<<endl;

	system("PAUSE");
}
