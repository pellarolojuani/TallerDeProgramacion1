//============================================================================
// Name        : Sonic.cpp
// Author      : ezequielb
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

#include "SDL/SDL.h"
#include "SDL/SDL_image.h"
#include "SDL/SDL_mixer.h"

int main() {


	//The images
		SDL_Surface* hello = NULL;
		SDL_Surface* screen = NULL;

		//Start SDL
		SDL_Init( SDL_INIT_EVERYTHING );
		//Set up screen
		screen = SDL_SetVideoMode( 640, 480, 32, SDL_SWSURFACE ); // 640 pixel wide, 480 pixel high window that has 32 bits per pixel
		//Load image
		hello = SDL_LoadBMP( "src/basura.bmp" );
		//Apply image to screen
		SDL_BlitSurface( hello, NULL, screen, NULL );
		//Update Screen
		SDL_Flip( screen );
		//Pause
		SDL_Delay( 3000 );
		//Free the loaded image
		SDL_FreeSurface( hello );
		//Quit SDL
		SDL_Quit();

		return 0;



	return 0;
}
