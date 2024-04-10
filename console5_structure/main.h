//
//  main.h
//  console5_structure
//
//  Created by asap on 10/04/2024.
//

#ifndef main_h
#define main_h
typedef struct Coordonnees Coordonnees;
struct Coordonnees
{
    int x;
    int y;
};
typedef struct Personne Personne;
struct Personne
{
    char nom[100];
    char prenom[100];
    char adresse[100];
    
    int age;
    int etudiant; // Booleen 1 ou 0
};

#endif /* main_h */
