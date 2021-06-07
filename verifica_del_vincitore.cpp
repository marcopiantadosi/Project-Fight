#include <unistd.h>
#include <windows.h>
#include <conio.h>
#include <iostream>
#include <time.h>
#include "game.h"

using namespace std;


//funzione utilizzata per la verifica del vincitore
void game::verifica_vincitore(int segno1,int segno2, int vite_g, int vite_c)
{
	//costrutto if utilizzato in caso di parità tra utente e PC
	if (segno1 == segno2)
	{
	    pareggio();
	}

 	else
 	{
		if (((segno1 == 1) && (segno2 == 3)) ||
		// vince acqua vs fulmine

		((segno1 == 2) && (segno2 == 1)) ||
		// vince aria vs acqua

		((segno1 == 3) && (segno2 == 2)) ||
		// vince fulmine vs aria

		((segno1 == 4) && (segno2 == 5)) ||
		// vince fuoco vs foglia

		((segno1 == 5) && (segno2 == 1)) ||
		// vince foglia vs acqua

		((segno1 == 1) && (segno2 == 4)) ||
		// vince acqua vs fuoco

		((segno1 == 2) && (segno2 == 4)) ||
		// vince aria vs fuoco

		((segno1 == 3) && (segno2 == 4)) ||
		// vince fulmine vs fuoco

		((segno1 == 5) && (segno2 == 1)) ||
		// vince foglia vs acqua

		((segno1 == 2) && (segno2 == 5)) ||
		// vince aria vs foglia

		((segno1 == 3) && (segno2 == 5)))
		// vince fulmine vs foglia
		{

 			vite_c = vite_c - 1; // vince segnoMIO

 			roundvinto();

 		}

 		else
		{

 			vite_g = vite_g - 1; // vince segnoPC

 			roundperso();

 		}

	}
}
