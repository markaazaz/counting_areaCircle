#include <iostream>
    float luas_lingkaran(int r)
    {
        float phi = 3.14,luas;
        luas = phi*r*r;
        return luas;
    }

    float keliling_lingkaran(int r)
    {
        float phi = 3.14,keliling;
        keliling = 2*phi*r;
        return keliling;
    }
int main()
{
    awal: 
    int r, pilihan;
    char opsi;

    std::cout << "--------------------------------\n";
    std::cout << "- Program Hitung Luas/Keliling -\n";
    std::cout << "--------------------------------\n";

    std::cout << "1. Menghitung Luas Lingkaran\n";
    std::cout << "2. Menghitung Keliling Lingkaran\n";
    std::cout << "Masukkan Pilihan: ";
    std::cin >> pilihan;

    std::cout << "Masukkan Jari-Jari:";
    std::cin >> r;

    switch (pilihan)
    {
        case 1:
        std::cout << "Luas Lingkaran: " <<luas_lingkaran(r) << "cm"<< std::endl;
        break;

        case 2:
        std::cout << "Keliling Lingkaran: " <<keliling_lingkaran(r) << "cm" << std::endl;
        break;

        default:
        std::cout << "Hasil tidak ditemukan\n";
    }
    
    std::cout << "Ingin Menghitung Lagi? (Y/N):";
    std::cin >> opsi;
    
    while (opsi == 'Y' or opsi == 'y')
    {
        goto awal;
    }
    
    std::cout << "\n\n";
    std::cout << "-------------------------------------------\n";
    std::cout << "Terima Kasih telah menggunakan Program ini!\n";
}
