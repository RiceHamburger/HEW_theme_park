/*====================================================================================

	動く柱クラス　 [CActivePillar.h]
																Autor	: 西口
																Date	: 2018/10/19
--------------------------------------------------------------------------------------
コメント:
--------------------------------------------------------------------------------------
修正日時:
====================================================================================*/


#ifndef CACTIVEPILLAR_H
#define CACTIVEPILLAR_H
/*--------------------------------------------------------------------------------------
	インクルードファイル
--------------------------------------------------------------------------------------*/
#include "CPillar.h"
/*--------------------------------------------------------------------------------------
	列挙型 : 構造体
--------------------------------------------------------------------------------------*/

/*--------------------------------------------------------------------------------------
	マクロ定義
--------------------------------------------------------------------------------------*/

/*--------------------------------------------------------------------------------------
	クラス宣言
--------------------------------------------------------------------------------------*/

class CActivePillar : public CObject
{
private:

	//
	//	メンバ変数
	//
	RectC2D m_pPillar[2];			//動く柱二つ分
	//当たり判定 : 二つの柱分		//当たり判定
	Float2 m_startPos[2];			//移動開始点
	Float2 m_endPos[2];				//移動終了点
	bool m_bDir[2];					//移動方向（真は開く動き）
	bool m_isActive;				//アクティブフラグ
	//

	//
	//	メンバ関数
	//

	//上側ピラーの移動
	void MoveTopPillar(void);

	//下側ピラーの移動
	void MoveBottomPillar(void);

public:

	//コンストラクタ : デフォルト
	CActivePillar(RectC2D pos);

	//アップデート
	virtual bool Update();

	//描画
	virtual void Draw();

	//スイッチが押されたとき
	virtual void onSwitch(void);

	
};
#endif //_H
