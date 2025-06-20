#ifndef DISPLAY_H
#define DISPLAY_H
#include <SPI.h>
#include "src/epd1in54_V2.h"
#include "src/imagedata.h"
#include "src/epdpaint.h"
#include <stdio.h>

#define COLORED     0
#define UNCOLORED   1
#define LINE_LEN    18  //max length of a text line with Font16

void initDisplay();

void paintVoteScreen();

//Epaper object declaration
//Epd epd;
//unsigned char image[1024];
//Paint paint(image, 0, 0);



void display_question(const char *question);
void drawImage(int x, int y, int width, int height, const unsigned char *image);

#endif