#include <unistd.h>
#include <windows.h>
#include <conio.h>
#include <iostream>
#include <time.h>
#include "game.h"

using namespace std;

//stampa del segno
void game::stampa_segno(int segno)
{
	switch(segno)
 	{
 		case 1:
		cout<<"Acqua"<<endl;
		acqua();
		break;

 		case 2:
		cout<<"Aria"<<endl;
		aria();
		break;

 		case 3:
		cout<<"Fulmine"<<endl;
		fulmine();
		break;

 		case 4:
		cout<<"Fuoco"<<endl;
		fuoco();
		break;

		case 5:
		cout<<"Foglia"<<endl;
		foglia();
		break;
 	}
}
