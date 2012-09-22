#include <stdio.h>

void miez(int szamok);

int main() {
    int szam;
    int ezresek;
    int szazasok;
    int tizesek;

    printf("Adj egy számat és megmondom Eszperantoban:\n");
    printf("Szam: ");
    scanf("%d", &szam);

    ezresek = (int) szam / 1000;
    szam %= 1000;
    szazasok = (int) szam / 100;
    szam %= 100;
    tizesek = (int) szam / 10;
    szam %= 10;

    if (ezresek == 1) {
        miez(1000);
        printf(" ");
    }
    if (ezresek > 1) {
        miez(ezresek);
        miez(1000);
        printf(" ");
    }
    if (szazasok == 1) {
        miez(100);
        printf(" ");
    }
    if (szazasok > 1) {
        miez(szazasok);
        miez(100);
        printf(" ");
    }
    if (tizesek == 1) {
        miez(10);
        printf(" ");
    }
    if (tizesek > 1) {
        miez(tizesek);
        miez(10);
        printf(" ");
    }
    if (szam > 0) {
        miez(szam);
    }
    return 0;
}

void miez(int szam) {

    switch (szam) {

        case 1: printf("unu");
            break;
        case 2: printf("du");
            break;
        case 3: printf("tri");
            break;
        case 4: printf("kvar");
            break;
        case 5: printf("kvin");
            break;
        case 6: printf("ses");
            break;
        case 7: printf("sep");
            break;
        case 8: printf("ok");
            break;
        case 9: printf("nau");
            break;
        case 10: printf("dek");
            break;
        case 100: printf("cent");
            break;
        case 1000: printf("mil");
            break;
    }

}