//独自ヘッダ"main_header.h"を指定します。これには、my_classの定義が含まれます。
#include "main_header.h"

//標準ヘッダを指定します。


//マクロを宣言します。
//シミュレーション対象の初期トランスフォーム設定項目です。
#define STPOS_X 4
#define STPOS_Y 3
#define STDIREC North

bool my_master_class::RouteSearch_Solution(Transform transform[EXPRESSION_COUNT][TARGET_MOVEABLE_STEP], int ud[ARRAYSIZE_ROW][ARRAYSIZE_COLLUM]){
    for(int current_expr_count = 0; current_expr_count < EXPRESSION_COUNT; current_expr_count++){
        bool initialize = true;
        for(int move_step = 0; move_step < TARGET_MOVEABLE_STEP; move_step++){
            if(initialize)
            {
                ReturnPoint:
                switch(ud[current_expr_count][move_step]){
                    default:
                        srand(time(NULL));
                        ud[current_expr_count][move_step] = rand() % 10;
                }
            }

        }
    }
    transform[0][0].Pos_x = STPOS_X;
    transform[0][0].Pos_y = STPOS_Y;
    transform[0][0].current_direction = STDIREC;

    return true;
}