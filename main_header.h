//標準ヘッダを指定します。
#include <iostream>
#include <stdlib.h>
#include <string.h>

//マクロを指定します。
//入力データ格納用配列変数のサイズ設定(行, 列)
#define ARRAYSIZE_ROW 40
#define ARRAYSIZE_COLLUM 12

//シミュレーション空間のフィールドサイズ設定(x, y)
#define FieldSize_X 16
#define FieldSize_Y 16

//シミュレーション試行回数設定
#define EXPRESSION_COUNT 40
//ターゲット移動回数設定
#define TARGET_MOVEABLE_STEP 12

//入力ファイル変換用バッファサイズ設定
#define MAX_BUFFERSIZE 2048

//VisualStudio用、非推奨標準関数使用時の警告を回避します。
#pragma warning(disable:4996)

class my_master_class{
    public:
        //Constructor
        my_master_class(){
                printf("my_master_class::CONSTRUCTOR :\n--START SOLUTION--\n");

                printf("my_master_class::CONSTRUCTOR :\n--SOLUTION COMPLETE--\n");
        };
        //Deconstructor
        ~my_master_class(){
                printf("my_master_class::DECONSTRUCTOR :\n--START SOLUTION--\n");

                printf("my_master_class::DECONSTRUCTOR :\n--SOLUTION COMPLETE--\n");
        };

        enum direction{North, East, South, West};

        struct Transform{
            int Pos_x;
            int Pos_y;
            enum direction current_direction;
        };

        Transform transform[EXPRESSION_COUNT][TARGET_MOVEABLE_STEP];

        void ud_input(FILE *fp, int ud[ARRAYSIZE_ROW][ARRAYSIZE_COLLUM]);
        //[Mojatto]Arguments in "RouteSearch_Solution"function is temporary setting.
        bool RouteSearch_Solution(Transform transform[EXPRESSION_COUNT][TARGET_MOVEABLE_STEP]);
        //[Mojatto]Arguments in "ud_output"function is temporary setting.
        void ud_output(void);
};

class my_solution_component : public my_master_class{
    public:
        my_master_class *master_ref;

        my_solution_component(my_master_class *master_ref){

        }
};