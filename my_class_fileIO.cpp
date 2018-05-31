#include "main_header.h"

void my_class::ud_input(FILE *fp, int ud[ARRAYSIZE_ROW][ARRAYSIZE_COLLUM]){
    char buffer[MAX_BUFFERSIZE] = {0};
    char *buffer2[ARRAYSIZE_COLLUM];
    #ifdef DEBUG
       printf("[DEBUG]func:ud_input   :\nConvert from CSV to array data...\n");
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
       printf("[DEBUG]func:ud_input   :\n--FUNCTION PROCESS COMPLETE--\n");
    #endif
}