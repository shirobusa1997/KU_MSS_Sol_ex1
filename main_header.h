#ifndef PREPROCESS
#define PREPROCESS

#include <iostream>
#include <stdlib.h>
#include <string.h>

#define DEBUG

#define ARRAYSIZE_ROW 40
#define ARRAYSIZE_COLLUM 12

#define MAX_BUFFERSIZE 2048

#pragma warning(disable:4996)

#endif

class my_class{
    public:
        //Constructor
        my_class(){
            #ifdef DEBUG
                printf("my_class::CONSTRUCTOR :\n--START SOLUTION--\n");
            #endif

            #ifdef DEBUG
                printf("my_class::CONSTRUCTOR :\n--SOLUTION COMPLETE--\n");
            #endif
        };
        //Deconstructor
        ~my_class(){

        };

        enum direction{North, East, South, West};

        struct Transform{
            int Pos_x;
            int Pos_y;
            enum direction current_direction;
        };

        void ud_input(FILE *fp, int ud[ARRAYSIZE_ROW][ARRAYSIZE_COLLUM]);
        //[Mojatto]Arguments in "ud_output"function is temporary setting.
        void ud_output(void);
        //[Mojatto]Arguments in "RouteSearch_Solution"function is temporary setting.
        bool RouteSearch_Solution(void);
};