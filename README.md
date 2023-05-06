# Isogramma
## Esercizio Isogramma 
Questo esercizio in C definisce una funzione "is_isogram" che prende in input una stringa e verifica se questa è un isogramma, ovvero una parola o una frase in cui non ci sono lettere ripetute.

La funzione utilizza un array di contatori di dimensione 26 (corrispondente alle 26 lettere dell'alfabeto) per tenere traccia del numero di occorrenze di ogni lettera nella stringa. Inizialmente tutti i contatori sono impostati a zero. Successivamente, ogni volta che viene incontrata una lettera nella stringa, il corrispondente contatore nell'array viene incrementato. Se il contatore di una lettera supera 1, significa che la lettera è stata contata precedentemente e la funzione restituisce "false", segnalando che la stringa non è un isogramma. Se invece la funzione arriva alla fine della stringa senza trovare lettere ripetute, restituisce "true", segnalando che la stringa è un isogramma.

Il programma stampa quindi un messaggio a video in base al risultato del controllo.

```c
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

bool is_isogram(char *str) {
    int count[26] = {0}; // inizializza un array di contatori per ogni lettera dell'alfabeto
    while (*str != '\0') { 
        if (isalpha(*str)) { 
            int index = tolower(*str) - 'a'; // calcola l'indice dell'array per la lettera corrente
            count[index]++; // incremento della lettera
            if (count[index] > 1) { // se la lettera è già stata contata precedentemente
                return false; // la stringa non è un isogramma
            }
        }
        str++; // passa al carattere successivo nella stringa
    }
    return true; // la stringa è un isogramma
}

int main() {
    char str[100]; // definisce un buffer 
    printf("Inserisci una parola o una frase: ");
    fgets(str, sizeof(str), stdin); // legge la stringa da input
    if (is_isogram(str)) { // controlla se la stringa è un isogramma
        printf("La stringa inserita e' un isogramma.\n");
    } else {
        printf("La stringa inserita non e' un isogramma.\n");
    }
    return 0;
}

```

