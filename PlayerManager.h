#ifndef PLAYERMANAGER_H_
#define PLAYERMANAGER_H_

#include <d3dx9.h>

/**************************************************

列挙型

**************************************************/
enum {
	PLAYER_ONE,
	PLAYER_TWO,
};

/**************************************************

プロトタイプ宣言

**************************************************/
/* --------------------------------
プレイヤーの初期処理
-------------------------------- */
void PlayerInit(void);
/* --------------------------------
プレイヤーの終了処理
-------------------------------- */
void PlayerUnit(void);
/* --------------------------------
プレイヤーの描画処理
-------------------------------- */
void PlayerDraw(void);
/* --------------------------------
プレイヤーの更新処理
-------------------------------- */
void PlayerUpdate(void);
/* --------------------------------
セットプレイヤーの移動
-------------------------------- */
void SetPlayerMove(int index , bool bIs);
/* --------------------------------
セットプレイヤーのジャンプ
-------------------------------- */
void SetPlayerJump(int index);
/* --------------------------------
ゲットプレイヤーの座標
-------------------------------- */
D3DXVECTOR2 GetPlayerPos(int index);


//*****************************************************************************
// 移動できる範囲をとる
//*****************************************************************************
void SetRange(RECT view_range);


#endif // !PLAYERMANAGER_H_
