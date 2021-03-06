//Header file of the riddles

#include <string.h>
#include <SDL/SDL.h>
#include <time.h>
#include "SDL_char.h"
#include "SDL_collision.h"

#define ANSWER_STATIC "../src/design/enigmes/answer_box_1.png"
#define ANSWER_OVER "../src/design/enigmes/answer_box_0.png"

struct Enigme{
	char question[256];
	char answer1[256];
	char answer2[256];
	char answer3[256];
	char answer4[256];
	int solution;

	SDL_Surface *Button[2];
	SDL_Surface *Background;
	
	SDL_Surface *Question;
	SDL_Surface *Answer1;
	SDL_Surface *Answer2;
	SDL_Surface *Answer3;
	SDL_Surface *Answer4;
	
	SDL_Rect positionBackground;
	SDL_Rect positionQuestion;
	SDL_Rect positionAnswer1;
	SDL_Rect positionAnswer2;
	SDL_Rect positionAnswer3;
	SDL_Rect positionAnswer4;

	SDL_Rect positionRiddle;
	SDL_Rect positionButton1;
	SDL_Rect positionButton2;
	SDL_Rect positionButton3;
	SDL_Rect positionButton4;
};

typedef struct Enigme enigme;

int findIndex(char string[], char x);

void erase(char string[], int pos);

int riddle(enigme e, hero player, SDL_Surface *screen);

enigme fetchQuestion(char file_q[], char file_a[]);

enigme createQustion();

char *formatCarte(int value, int color);

void generateFake(int value, int color, int *value2, int *color2, int *value3, int *color3, int *value4, int *color4);

int getSelection(enigme e, int *answer_selected);

int verifyAnswer(enigme e, int answer_selected);