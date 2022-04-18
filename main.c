#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{


    int sayi=12,*sayininAdresi;
    float kesirliSayi=5.7, *kesirliSayininAdresi;
    double buyukKesirliSayi=7.8, *buyukKesirliSayininAdresi;
    char karakter='K',*karakterinAdresi;

    printf("%d\n",sayi);
    printf("%f\n",kesirliSayi);
    printf("%lf\n",buyukKesirliSayi);
    printf("%c\n",karakter);

    sayininAdresi = &sayi;
    kesirliSayininAdresi = &kesirliSayi;
    buyukKesirliSayininAdresi = &buyukKesirliSayi;
    karakterinAdresi = &karakter;

    printf("%d %x\n",*sayininAdresi,sayininAdresi);
    printf("%f %x\n",*kesirliSayininAdresi,kesirliSayininAdresi);
    printf("%lf %x\n",*buyukKesirliSayininAdresi,buyukKesirliSayininAdresi);
    printf("%c %x\n",*karakterinAdresi,karakterinAdresi);


/*

    setlocale(LC_ALL,"Turkish");
    int sayilar[6] = {1,2,3,4,5,6};
    int *sayilarDizisininAdresi;
    sayilarDizisininAdresi = &sayilar;

    printf("%d",*sayilarDizisininAdresi);
    printf("%d",*sayilarDizisininAdresi+1);
    printf("%d",*sayilarDizisininAdresi+2);
    printf("%d",*sayilarDizisininAdresi+3);
    printf("%d",*sayilarDizisininAdresi+4);
    printf("%d",*sayilarDizisininAdresi+5);*/

    return 0;
}
