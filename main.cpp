//Preprocessor Section
//ヘッダをインポートします。
#include "main_header.h"

//マクロを宣言します。
#define ARRAYSIZE_ROW 40
#define ARRAYSIZE_COLLUM 12

#define MAX_BUFFERSIZE 2048

int main(int argc, char **argv){
    //変数を宣言します。
    int ud[ARRAYSIZE_ROW][ARRAYSIZE_COLLUM] = {0};
    FILE *input;

    my_class mc;

    if(argc < 2){
        printf("Usage   :%s INPUT_CSV_FILE\n", argv[0]);
        return 1;
    }

    if((input = fopen(argv[1], "r")) == NULL)
    {
        printf("ERROR   :Failed to open INPUT_CSV_FILE...\n");
        return 1;
    }

    mc.ud_input(input, ud);

    //Shutdown Process Section
    fclose(input);

    #ifdef DEBUG
       printf("\n\n--SOLUTION COMPLETE--\n");
    #endif

    return 0;
}