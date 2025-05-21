#include <stdio.h>
#include "kolejka.h"

void menu(void)
{
    printf("\n");
    printf("1 - dodaj liczbe do kolejki\n");
    printf("2 - odczytaj pierwszy element\n");
    printf("3 - usun pierwszy element z kolejki\n");
    printf("4 - sprawdz czy kolejka jest pusta\n");
    printf("5 - sprawdz czy kolejka jest pelna\n");
    printf("6 - koniec programu\n");
    printf("\n");
}

int main()
{
    int wartosc = 0;
    int wybor = 0;
    printf("KOLEJKA - implementacja w tablicy statycznej\n");

    while (1)
    {
        menu();
        scanf("%d", &wybor);

        switch (wybor)
        {
            case 1:
                if (!czyKolejkaPelna()) {
                    printf("Podaj wartosc: ");
                    scanf("%d", &wartosc);
                    dodajDoKolejki(wartosc);
                } else {
                    printf("Nie mozna dodac - KOLEJKA pelna!\n");
                }
                break;

            case 2:
                if (!czyKolejkaPusta()) {
                    wartosc = pierwszyElement();
                    printf("Pierwszy element w kolejce: %d\n", wartosc);
                } else {
                    printf("KOLEJKA jest pusta!\n");
                }
                break;

            case 3:
                if (!czyKolejkaPusta()) {
                    wartosc = usunZKolejki();
                    printf("Usunieto element: %d\n", wartosc);
                } else {
                    printf("KOLEJKA jest pusta!\n");
                }
                break;

            case 4:
                printf(czyKolejkaPusta() ? "KOLEJKA jest pusta.\n" : "KOLEJKA nie jest pusta.\n");
                break;

            case 5:
                printf(czyKolejkaPelna() ? "KOLEJKA jest pelna.\n" : "KOLEJKA nie jest pelna.\n");
                break;

            case 6:
                return 0;

            default:
                printf("Wybierz poprawna opcje.\n");
                break;
        }
    }

    return 0;
}
