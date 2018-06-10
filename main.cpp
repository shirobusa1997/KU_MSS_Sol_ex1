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

    my_master_class mc;

    if(argc < 2){
        printf("SYSTEM:入力ファイルが指定されませんでした。\n");
        printf("      :入力データを自動生成します...\n");

        mc.ud_input(ud);

        for(int row = 0; row < ARRAYSIZE_ROW; row++){
            for(int collum = 0; collum < ARRAYSIZE_COLLUM; collum++){
                printf("%d ", ud[row][collum]);
            }
            printf("\n");
        }

    }else{
        FILE *input;
        if((input = fopen(argv[1], "r")) == NULL)
        {
            printf("ERROR   :Failed to open INPUT_CSV_FILE...\n");
            return 1;
        }

        mc.ud_input(input, ud);

        for(int row = 0; row < ARRAYSIZE_ROW; row++){
            for(int collum = 0; collum < ARRAYSIZE_COLLUM; collum++){
                printf("%d ", ud[row][collum]);
            }
            printf("\n");
        }

        fclose(input);
    }

    //Shutdown Process Section

    printf("\n--SOLUTION COMPLETE--\n\n");

    return 0;
}