#include <stdio.h>

void ud_input(FILE *fp, int ud[40][12]){

}

int main(int argc, char **argv){
    //変数を宣言します。
    int ud[40][12] = {0};
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
    printf("\n\n--SOLUTION COMPLETED--\n");
    
    return 0;
}