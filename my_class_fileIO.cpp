//独自ヘッダ"main_header.h"を指定します。これには、my_master_classの定義が含まれます。
#include "main_header.h"

void my_master_class::ud_input(FILE *fp, int ud[ARRAYSIZE_ROW][ARRAYSIZE_COLLUM]){
    char buffer[MAX_BUFFERSIZE] = {0};
    char *buffer2[ARRAYSIZE_COLLUM];
    
    printf("[DEBUG]func:ud_input   :\nConvert from CSV to array data...\n\n");

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

               printf("%d ",ud[count1][count2]);
        }

           printf("\n");
    }
       printf("[DEBUG]func:ud_input   :\n--FUNCTION PROCESS COMPLETE--\n\n");
}

void my_master_class::ud_input(int ud[ARRAYSIZE_ROW][ARRAYSIZE_COLLUM]){
    srand(time(NULL));
    for(int row = 0; row < ARRAYSIZE_ROW; row++){
        for(int collum = 0; collum < ARRAYSIZE_COLLUM; collum++){
            ud[row][collum] = rand() % 10;
        }
    }

    return;
}

void my_master_class::ud_output(void){
    return;
}