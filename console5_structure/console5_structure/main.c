//
//  main.c
//  console5_structure
//
//  Created by asap on 10/04/2024.
//

#include <stdio.h>
#include "main.h"



int main(int argc, const char * argv[]) {
    Coordonnees point;
    
    point.x = 20;
    point.y = 30;
    
    Personne user;
    
    printf("Quel est ton nom ?");
    scanf("%s", user.nom);
    printf("Quel est ton prénom ?");
    scanf("%s", user.prenom);
    
    printf("Bonjour %s %s!\n", user.prenom, user.nom);
    return 0;
}
