//
//  main.c
//  Traccia 12- Prova all'impronta Programmazione I
//
//  Created by Roberto Vecchio on 18/02/2019.
//  Copyright © 2019 Roberto Vecchio. All rights reserved.
//

//Sviluppare una function C che, data come parametro di input una stringa che rappresenta un testo in italiano, determina e restituisce come parametri di output la parola di lunghezza massima contenuta nel testo e la sua lunghezza. Nel testo le parole sono separate da un unico spazio.
#include <stdio.h>
#include <string.h>

char * wordWithAandE(char *);

int main(int argc, const char * argv[]) {
    char phrase[150];
    char *pippo;
    
    printf("inserisci la frase:\n");
    fgets(phrase, 4096, stdin);
    
    pippo = wordWithAandE(phrase);
    
    printf("%s\n", pippo);
    
    
    return 0;
}

char * wordWithAandE(char *word){
    unsigned long len,len_max = 0;
    char separators[] = {' ','\0','\t','\n'};
    char *token = strtok(word, separators);
    char *maxTok = " ";
    
    while (token != NULL) {
        
        len = strlen(token);
        
        if (len > len_max) {
            len_max = len;
            maxTok = token;
        }
        token = strtok(NULL," \n");
    }
    return maxTok;
}
