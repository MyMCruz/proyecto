#include<iostream>
#include<mascota.hpp>

int main(int argc, char const *argv[])
{
    std::cout<<"Juego de Mascota"<<std::endl;

    mascota m1("Sami");
    m1.jugar();
    m1.jugar();
    m1.jugar();

    std::cout<< m1.DecirNombre<<" tiene "<< m1.DecirHambre<<" de hambre. ";

    m1.comer(5);
    return 0;
}
