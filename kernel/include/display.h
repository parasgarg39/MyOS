#ifndef DISPLAY_H
#define DISPLAY_H

#define CYAN 0x03
#define RED 0x04
#define PINK 0x05
#define YELLOW 0x0e
#define WHITE 0x0f
#define MAX_ROWS 25
#define MAX_COLS 80
//IO Ports
#define SCREEN_CNTRL 0x3D4
#define SCREEN_DATA 0x3D5
#define VIDEO_ADDRESS 0xb8000
//Functions
void cls();
void display_at(char *message, int row, int col,  char attribute);
void display(char *message, char attribute);
void display_backspace();
#endif
