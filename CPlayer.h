/*====================================================================================

	プレイヤークラス　 [CPlayer.h]
																Autor	: 西口
																Date	: 2018/09/25
--------------------------------------------------------------------------------------
コメント:
--------------------------------------------------------------------------------------
修正日時:
====================================================================================*/


#ifndef CPLAYER_H
#define CPLAYER_H
/*--------------------------------------------------------------------------------------
	インクルードファイル
--------------------------------------------------------------------------------------*/
#include "CGameObject.h"
#include "Primitive2D.h"
/*--------------------------------------------------------------------------------------
	列挙型 : 構造体
--------------------------------------------------------------------------------------*/
//プレイヤー数
enum {
	ONE,
	TWO,
};


/*--------------------------------------------------------------------------------------
	マクロ定義
--------------------------------------------------------------------------------------*/

/*--------------------------------------------------------------------------------------
	クラス宣言
--------------------------------------------------------------------------------------*/

/*-------------------------------------------
	プレイヤークラス
-------------------------------------------*/
class CPlayer : public CGameObject
{

private:


	//
	//	メンバ変数
	//
	//ジャンプ判定
	bool m_bJump;

	//プレイヤー数
	int m_numPlayer;

	static float axis_max;
	static float axis_min;

public:
	
	//
	//	メンバメソッド
	//

	//コンストラクタ : デフォルト
	CPlayer(int num);

	//アップデート
	virtual bool Update(void);

	//描画
	virtual void Draw(void);

	//横移動 : (false 左 : true 右)
	void SetVelocityX(bool direction = true);

	//ジャンプ
	void Jump(void);

	//入力
	void Input(void);

	//*****************************************************************************
	// 移動できる範囲をとる
	//*****************************************************************************
	void SetMoveRange(RECT view_range);

};

#endif //_H
