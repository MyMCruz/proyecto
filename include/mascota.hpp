#include<string>

class mascota
{
private:
    int hambre;
    std::string nombre;
public:
    mascota(std::string nombre)
    {
        this->hambre = 0;
        this->nombre = nombre;
    }

    ~mascota()
    {}

    void jugar()
    {
        this->hambre += 5;
    }

    void comer(int comida)
    {
        this->hambre -= comida;
    }

    std::string DecirNombre()
    {
        return this->nombre;
    }

    int DecirHambre()
    {
        return this->hambre;
    }
};