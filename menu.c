#include "menu.h"

int menu(int argc, char **argv)
{
    int aufgnr=0;

    if(argc != 2)
    {
        printf("\nConways Game of Life\n\n");
        printf(" 1\t//Gleiter, 10x10, 32Gen\n");
        printf(" 2\t//HWSS, 100x20, 200Gen\n");
        printf(" 3\t//Pulsator, 30x30, 15Gen\n");
        printf(" 4\t//stabil, 19x19, 19Gen\n");
        printf(" 5\t//Ramdom, 100x100, 300Gen\n");
    }
    else
    {
        aufgnr =atoi(argv[1]);
    }
        switch (aufgnr)
        {
            case 1:
                conway_gleiter();
                break;
            case 2:
                conway_HWSS();
                break;
            case 3:
                conway_pulsator();
                break;
            case 4:
                conway_stabil();
                break;
            case 5:
                conway_random();
                break;
        }
    return 0;
}
