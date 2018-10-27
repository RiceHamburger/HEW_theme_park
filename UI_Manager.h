//=============================================================================
//
// UIマネージャー [UI_Manager.h]
//										Autor:ロ
//										Date:2018/10/18
//=============================================================================

#ifndef UI_MANAGER_H_
#define UI_MANAGER_H_

/**************************************************

プロトタイプ宣言

**************************************************/

//*****************************************************************************
// UIの初期処理
//*****************************************************************************
void UI_Init(void);

//*****************************************************************************
// UIの終了処理
//*****************************************************************************
void UI_Unit(void);

//*****************************************************************************
// UIの更新処理
//*****************************************************************************
void UI_Update(void);

//*****************************************************************************
// UIの描画処理
//*****************************************************************************
void UI_Draw(void);


#endif // UI_MANAGER_H_
