#include "main_header.h"

#define ARRAYSIZE_ROW 40
#define ARRAYSIZE_COLLUM 12

#define MAX_BUFFERSIZE 2048

enum direction{North, East, South, West};

struct Transform{
    int Pos_x;
    int Pos_y;
    enum direction current_direction;
};

//入力されたCSVデータの内容を配列変数に置き換える関数"ud_input"です。
void ud_input(FILE *fp, int ud[ARRAYSIZE_ROW][ARRAYSIZE_COLLUM]){
    char buffer[MAX_BUFFERSIZE] = {0};
    char *buffer2[ARRAYSIZE_COLLUM];
    #ifdef DEBUG
       printf("func:ud_input   :\nConvert from CSV to array data...\n");
    #endif

    for(int count1 = 0; count1 < ARRAYSIZE_ROW; count1++){
        fgets(buffer, MAX_BUFFERSIZE, fp);
        for(int count2 = 0; count2 < ARRAYSIZE_COLLUM; count2++){
            if(count2 == 0)
            {
                buffer2[count2] = strtok(buffer,",");
            }else{
                buffer2[count2] = strtok(NULL,",");
            }
        }
        for(int count2 = 0; count2 < ARRAYSIZE_COLLUM; count2++){
            ud[count1][count2] = atoi(buffer2[count2]);

            #ifdef DEBUG
               printf("%d ",ud[count1][count2]);
            #endif
        }

        #ifdef DEBUG
           printf("\n");
        #endif
    }

    #ifdef DEBUG
       printf("func:ud_input   :\n--FUNCTION PROCESS COMPLETE--\n");
    #endif
}

int main(int argc, char **argv){
    //変数を宣言します。
    int ud[ARRAYSIZE_ROW][ARRAYSIZE_COLLUM] = {0};
    FILE *fp;

    if(argc < 2){
        printf("Usage   :%s INPUT_CSV_FILE\n", argv[0]);
        return 1;
    }

    if((fp = fopen(argv[1], "r")) == NULL)
    {
        printf("ERROR   :Failed to open INPUT_CSV_FILE...\n");
        return 1;
    }

    ud_input(fp, ud);

    fclose(fp);

    #ifdef DEBUG
       printf("\n\n--SOLUTION COMPLETE--\n");
    #endif
    
    return 0;
}