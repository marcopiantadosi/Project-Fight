#ifndef GAME_H_INCLUDED
#define GAME_H_INCLUDED


class game
{
	public:
    //dichiarazioni funzioni
    void regole();
    void load();
    void gioco();
    void verifica_vincitore(int , int , int, int);//qui si dichiara le variabili che la funzione prende in ingresso ad esempio int char ecc.
    void stampa_segno(int);  //qui andava specificato il parametro di ingresso
    void acqua();
    void aria();
    void fulmine();
    void fuoco();
    void foglia();
    void welcome();
    void gameover();
    void errore();
    void pareggio();
    void roundperso();
    void roundvinto();
    void haivinto();
    void miniproject();
	void esecution();
    void SetColor(unsigned short Color);

};


#endif // GAME_H_INCLUDED
