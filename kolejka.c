#define ROZMIAR_KOLEJKI 5
int tablica_kolejki[ROZMIAR_KOLEJKI] = { 0 };
int poczatek = 0;
int koniec = 0;
int licznik = 0;

int czyKolejkaPusta(void)
{
    return licznik == 0;
}

int czyKolejkaPelna(void)
{
    return licznik == ROZMIAR_KOLEJKI;
}

void dodajDoKolejki(int wartosc)
{
    if (!czyKolejkaPelna())
    {
        tablica_kolejki[koniec] = wartosc;
        koniec = (koniec + 1) % ROZMIAR_KOLEJKI;
        licznik++;
    }
}

int usunZKolejki(void)
{
    if (!czyKolejkaPusta())
    {
        int wartosc = tablica_kolejki[poczatek];
        poczatek = (poczatek + 1) % ROZMIAR_KOLEJKI;
        licznik--;
        return wartosc;
    }

    return tablica_kolejki[poczatek];
}

int pierwszyElement(void)
{
    if (!czyKolejkaPusta())
    {
        return tablica_kolejki[poczatek];
    }

    return tablica_kolejki[poczatek];
}
