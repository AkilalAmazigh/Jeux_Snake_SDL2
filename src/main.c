#include <stdio.h>
#include <stdlib.h>
#include "../include/SDL.h"

SDL_Window* fenetre;
SDL_Renderer* rendu;

int main(int argc, char *argv[])
{
    SDL_Rect carre;
    SDL_Rect pomme;
    SDL_Init(SDL_INIT_EVERYTHING);

    fenetre = SDL_CreateWindow("fenetre", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_CENTERED, 1100, 800, SDL_WINDOW_SHOWN );
    rendu = SDL_CreateRenderer(fenetre, -1, SDL_RENDERER_ACCELERATED);
   
    // creation d'un carre pour le serpent en couleur
    SDL_SetRenderDrawColor(rendu, 66, 206, 245, SDL_ALPHA_OPAQUE);
    carre.h = 45;
    carre.w = 45; 
    carre.x = 550;
    carre.y = 400;
    SDL_RenderDrawRect(rendu, &carre); // Pour dessiner le contour
    SDL_RenderFillRect(rendu, &carre); // Pour remplir l'interieur du carre

    // creation d'un carre pour la pomme en couleur
    SDL_SetRenderDrawColor(rendu, 229, 10, 10, SDL_ALPHA_OPAQUE);
    pomme.h = 45;
    pomme.w = 45; 
    pomme.x = 0;
    pomme.y = 0;
    SDL_RenderDrawRect(rendu, &pomme); // Pour dessiner le contour
    SDL_RenderFillRect(rendu, &pomme); // Pour remplir l'interieur du carre

    SDL_RenderPresent(rendu); // Pour afficher le rendu
    SDL_Delay(3000); // Pour afficher la fenetre pdt 3000 ms
    SDL_DestroyRenderer(rendu);
    SDL_DestroyWindow(fenetre);
    SDL_Quit();
    return 0;
    