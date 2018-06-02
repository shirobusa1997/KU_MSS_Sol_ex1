//独自ヘッダ"main_header.h"を指定します。これには、my_classの定義が含まれます。
#include "main_header.h"

//標準ヘッダを指定します。
#include <time.h>

//マクロを宣言します。
//シミュレーション対象の初期トランスフォーム設定項目です。
#define STPOS_X 4
#define STPOS_Y 3
#define STDIREC North

bool my_master_class::RouteSearch_Solution(Transform transform[EXPRESSION_COUNT][TARGET_MOVEABLE_STEP]){
    transform[0][0] = {4, 3, STDIREC};

    return true;
}