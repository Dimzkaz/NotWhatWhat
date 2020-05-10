#include <stdio.h> // Preprocessor Directive
int main(void) //Function utama
{ //Blok pembuka
    int panjang;
    int lebar;
    int K;
    int L;
    printf("Masukkan panjang : ");
    scanf("%d", &panjang);
    printf("Masukkan lebar : ");
    scanf("%d", &lebar);
    
	L = panjang*lebar;
	K = (panjang+lebar)*2;
    printf("Luas Persegi Panjang : %d", L );
    printf("\nKeliling Persegi Panjang : %d", K);
    return 0;
} //Blok Penutup
