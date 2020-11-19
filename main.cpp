#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>
#include "Sculptor.h"

using namespace std;

int main(void){
    Sculptor projeto(100, 100, 100);
    projeto.setColor(1, 0, 0, 1);
    projeto.putBox(29, 99, 15, 16, 4, 5);//Cano

    projeto.setColor(1, 0, 0, 1);
    projeto.putBox(32, 33, 17, 18, 4, 5);//Mira 1

    projeto.setColor(1, 0, 0, 1);
    projeto.putBox(41, 42, 17, 18, 4, 5);//Mira 2

    projeto.setColor(1, 0, 0, 1);
    projeto.putBox(27, 52, 19, 20, 4, 5);//Mira 3

    projeto.setColor(1, 0, 0, 1);
    projeto.putBox(36, 37, 21, 21, 4, 5);//Mira 3

    projeto.setColor(1, 0, 0, 1);
    projeto.putBox(6, 9, 4, 14, 4, 5);//Coronha

    projeto.setColor(0.4, 0.7, 0.4, 1);
    projeto.putBox(10, 60, 11, 14, 4, 5);//Apoio

    projeto.setColor(0.4, 0.7, 0.4, 1);
    projeto.putBox(10, 20, 7, 10, 4, 5);//Apoio 2

    projeto.setColor(0.4, 0.7, 0.4, 1);
    projeto.putBox(25, 28, 4, 10, 4, 5);//Apoio 3


    projeto.setColor(0.4, 0.7, 0.4, 1);
    projeto.putBox(18, 24, 5, 6, 4, 5);//Apoio 4

    projeto.setColor(0.4, 0.7, 0.4, 1);
    projeto.putBox(20, 24, 4, 4, 4, 5);//Apoio 5

    projeto.setColor(0.4, 0.7, 0.4, 1);
    projeto.putBox(10, 11, 4, 5, 4, 5);//Coronha 2

    projeto.setColor(0.4, 0.7, 0.4, 1);
    projeto.putBox(10, 12, 6, 6, 4, 5);//Coronha 3

    projeto.setColor(0.4, 0.7, 0.4, 1);
    projeto.putBox(34, 48, 10, 10, 4, 5);//Apoio 6

    projeto.setColor(0.4, 0.7, 0.4, 1);
    projeto.putBox(34, 44, 9, 9, 4, 5);//Apoio 7

    projeto.setColor(0.4, 0.7, 0.4, 1);
    projeto.putBox(34, 40, 8, 8, 4, 5);//Apoio 8

    projeto.setColor(0.4, 0.7, 0.4, 1);
    projeto.putBox(29, 34, 7, 7, 4, 5);//Gatilho

    projeto.setColor(1, 0, 0, 1);
    projeto.putBox(30, 30, 9, 10, 4, 5);//Gatilho 2

    projeto.setColor(1, 0, 0, 1);
    projeto.putBox(35, 40, 4, 7, 4, 5);//Cartucho
    projeto.writeOFF((char*)"C:/Users/Luan Henrique/Desktop/Projeto.off");
}
