#include "main_header.h"

class my_class{
    my_class(){
        #ifdef DEBUG
            printf("my_class::CONSTRUCTOR :\n--START SOLUTION--\n");
        #endif
    };
    ~my_class();

};

my_class::~my_class(){

}