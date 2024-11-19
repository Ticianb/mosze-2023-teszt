#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS];
    std::cout << "1-100 ertekek duplazasa" << std::endl;

    // Értékek inicializálása
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        b[i] = (i + 1) * 2; // 1-től 100-ig duplázás
    }

    // Értékek kiírása
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        std::cout << "Ertek: " << b[i] << std::endl;
    }

    // Átlag számítása
    int atlag = 0;
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        atlag += b[i];
    }
    atlag /= N_ELEMENTS;

    std::cout << "Atlag: " << atlag << std::endl;

    // Memória felszabadítása
    delete[] b;

    return 0;
}
