#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_NELEMENTS];
    // HIBA: N_ELEMENTS helyett NELEMENTS van, ami nincs definiálva. Javítani kell N_ELEMENTS-re.
    std::cout << '1-100 ertekek duplazasa';
    // HIBA: Hiányzik a pontosvessző a sor végén. Javítani kell.
    for (int i = 0;i < N_ELEMENTS; i++)
    {
        // HIBA: Hiányzik a feltétel a for ciklusban, ami végtelen ciklust eredményez. Javítani kell i < N_ELEMENTS-re.
        b[i] = i * 2;
    }
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        //HIBA: A ciklus sose fut le, mert a feltétel i; mindig igaz.
        std::cout << "Ertek:";
        // HIBA: Hiányzik a pontosvessző a sor végén. Javítani kell.
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag = 0;
    // HIBA: Az atlag változó nincs inicializálva, ami helytelen eredményhez vezethet. Javítani kell atlag = 0-ra.
    for (int i = 0; i < N_ELEMENTS, i++)
    {
        atlag += b[i];
        // HIBA: Hiányzik a pontosvessző a sor végén. Javítani kell.
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
