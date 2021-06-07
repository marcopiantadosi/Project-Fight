#include <unistd.h>
#include <windows.h>
#include <conio.h>
#include <iostream>
#include <time.h>
#include "game.h"


using namespace std;


//grafica del gioco relativa ai diversi scontri
void game::acqua()
{
	//acqua
	SetColor(1);

	cout<<"                                                                            "<<endl;
	cout<<"                                 #                                          "<<endl;
	cout<<"                      #         # #          #                              "<<endl;
	cout<<"                     # #       #   #        # #                             "<<endl;
	cout<<"                    #   #     #     #      #   #                            "<<endl;
	cout<<"                   #     #   #       #    #     #                           "<<endl;
	cout<<"                  #       # #         #  #       #                          "<<endl;
	cout<<"                 #         #           ##         #                         "<<endl;
	cout<<"                #         #             #          #                        "<<endl;
	cout<<"                 #       #               #        #                         "<<endl;
	cout<<"                  # # # #                 # # # #                           "<<endl;
	cout<<"                       #                   #                                "<<endl;
	cout<<"                       #                   #                                "<<endl;
	cout<<"                        #                 #                                 "<<endl;
	cout<<"                         #               #                                  "<<endl;
	cout<<"                           #           #                                    "<<endl;
	cout<<"                             # # # # #                                      "<<endl;
	cout<<"                                                                            "<<endl;

	SetColor(15);
}





void game::aria()
{
	//vento
	SetColor(15);

	cout<<"                                                                            "<<endl;
	cout<<"                                                                            "<<endl;
	cout<<"                 ##########                                                 "<<endl;
	cout<<"                #          #####                                            "<<endl;
	cout<<"             ###                ###                                         "<<endl;
	cout<<"            #                      #          ####                          "<<endl;
	cout<<"           #                       #         #    #                         "<<endl;
	cout<<"            #                     #          ###  #   ####                  "<<endl;
	cout<<"             #####################               #   #    #                 "<<endl;
	cout<<"                          #     #################     ##   #                "<<endl;
	cout<<"                           ##                              #                "<<endl;
	cout<<"                            ###############################                 "<<endl;
	cout<<"                                                                            "<<endl;
	cout<<"                                                                            "<<endl;
	cout<<"                                                                            "<<endl;
	cout<<"                                                                            "<<endl;

	SetColor(15);
}





void game::fulmine()
{
	//fulmine
	SetColor(14);

	cout<<"                                                                            "<<endl;
	cout<<"                                #                                           "<<endl;
	cout<<"                               # #                                          "<<endl;
	cout<<"                              #  #                                          "<<endl;
	cout<<"                             #   #                                          "<<endl;
	cout<<"                            #    #                                          "<<endl;
	cout<<"                           #     #                                          "<<endl;
	cout<<"                          #      #                                          "<<endl;
	cout<<"                         #       #                                          "<<endl;
	cout<<"                        #         # # # # # # #                             "<<endl;
	cout<<"                       #                      #                             "<<endl;
	cout<<"                      #                      #                              "<<endl;
	cout<<"                     #                      #                               "<<endl;
	cout<<"                    # # # # # # # #        #                                "<<endl;
	cout<<"                                  #       #                                 "<<endl;
	cout<<"                                  #      #                                  "<<endl;
	cout<<"                                  #     #                                   "<<endl;
	cout<<"                                  #    #                                    "<<endl;
	cout<<"                                  #   #                                     "<<endl;
	cout<<"                                  #  #                                      "<<endl;
    cout<<"                                  # #                                       "<<endl;
	cout<<"                                   #                                        "<<endl;
	cout<<"                                                                            "<<endl;

	SetColor(15);
}





void game::fuoco()
{
	//fuoco
	SetColor(4);

	cout<<"                                                                            "<<endl;
	cout<<"                                #                                           "<<endl;
	cout<<"                               # #                                          "<<endl;
	cout<<"                              #  #                                          "<<endl;
	cout<<"                             #   #  #                                       "<<endl;
	cout<<"                             #    ## #        #                             "<<endl;
	cout<<"                             #         #    #  #                            "<<endl;
	cout<<"                         #   #          #  #    #                           "<<endl;
	cout<<"                        # #  #          # #      #                          "<<endl;
	cout<<"                       #   # #           #       #                          "<<endl;
	cout<<"                      #     ##    ##            #                           "<<endl;
	cout<<"                     #            # #            #                          "<<endl;
	cout<<"                   #  #           #  #           #                          "<<endl;
	cout<<"                 #  #  #     ##  #    #  #       #                          "<<endl;
	cout<<"                #    ##       # #     # # #      #                          "<<endl;
	cout<<"                 #             #      ##  #      #                          "<<endl;
	cout<<"                  #       # ## #         #      #                           "<<endl;
	cout<<"                   #       #  #         #      #                            "<<endl;
	cout<<"                    #       #          #      #                             "<<endl;
	cout<<"                     #       #         #     #                              "<<endl;
	cout<<"                       # # # # # # # # # # #                                "<<endl;
	cout<<"                                                                            "<<endl;

	SetColor(15);
}





void game::foglia()
{
	//foglia
	SetColor(2);

	cout<<"                                                                            "<<endl;
	cout<<"                              #                                             "<<endl;
	cout<<"                             ##                                             "<<endl;
	cout<<"                            #  #                                            "<<endl;
	cout<<"                           #    #                                           "<<endl;
	cout<<"                          #      #                                          "<<endl;
	cout<<"                         #        #                                         "<<endl;
	cout<<"                        #          #                                        "<<endl;
	cout<<"                       #            #                                       "<<endl;
	cout<<"                      #              #                                      "<<endl;
	cout<<"                     #                #                                     "<<endl;
	cout<<"                    #                  #                                    "<<endl;
	cout<<"                   #        #           #                                   "<<endl;
	cout<<"                  #         #           #                                   "<<endl;
	cout<<"                  #         #           #                                   "<<endl;
	cout<<"                  #         #           #                                   "<<endl;
    cout<<"                   #        #          #                                    "<<endl;
	cout<<"                    #       #         #                                     "<<endl;
	cout<<"                     # #  # # # # # #                                       "<<endl;
	cout<<"                          # # #                                             "<<endl;
	cout<<"                          # # #                                             "<<endl;
	cout<<"                                                                            "<<endl;

	SetColor(15);
}


    void game::SetColor(unsigned short Color) 									//
    { 																		//
        HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);							//
        SetConsoleTextAttribute(hCon,Color); 									//
    }
