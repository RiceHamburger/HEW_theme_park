/*====================================================================================

	オウルクラスまとめ　 [COwl.h]
																Autor	: 西口
																Date	: 2018/10/22
--------------------------------------------------------------------------------------
コメント:
--------------------------------------------------------------------------------------
修正日時:
====================================================================================*/


#ifndef COWL_H
#define COWL_H
/*--------------------------------------------------------------------------------------
	インクルードファイル
--------------------------------------------------------------------------------------*/
#include "CObject.h"
/*--------------------------------------------------------------------------------------
	列挙型 : 構造体
--------------------------------------------------------------------------------------*/

/*--------------------------------------------------------------------------------------
	マクロ定義
--------------------------------------------------------------------------------------*/

/*--------------------------------------------------------------------------------------
	クラス宣言
--------------------------------------------------------------------------------------*/

/*-------------------------------------------
	サーチライトクラス
-------------------------------------------*/
class CSearchLight
{
private:

	//
	//	メンバ変数
	//
	Triangle2D m_pos;			//三角形
	D3DCOLOR m_color;			//ライトカラー
	//

public:

	//コンストラクタ : デフォルト
	CSearchLight(Float2 p1, Float2 p2, Float2 p3, D3DCOLOR color);

	//描画
	void Draw(void);

};

/*-------------------------------------------
	オウル基底クラス
-------------------------------------------*/
class COwl : public CObject 
{

private:

	//
	//	メンバ変数
	//
	CSearchLight *m_pLight;
	//

public:

	//コンストラクタ : デフォルト
	COwl() {}

	//コンストラクタ : 初期化
	COwl(Float2 pos, Float2 size, k_Texture index);

	//サーチライトの生成
	void CreateSearchLight(Float2 p1, Float2 p2, Float2 p3 , D3DCOLOR color);

	//描画
	virtual void Draw(void);

	//デストラクタ
	~COwl();

};

/*-------------------------------------------
	アクティブオウルクラス
-------------------------------------------*/
class CActiveOwl : public COwl
{

private:

	//
	//	メンバ変数
	//
	int m_lightInterval;		//ライトの点滅する間隔フレーム
	int m_frameCount;			//管理フレーム
	//

public:

	//コンストラクタ : デフォルト
	CActiveOwl(Float2 pos, Float2 size, k_Texture index, int lightInterval);

	//アップデート
	virtual bool Update();


};

/*-------------------------------------------
	スタティックオウルクラス
-------------------------------------------*/
class CStaticOwl : public COwl
{

private:

	//
	//	メンバ変数
	//
	bool m_isLight;
	//

public:

	//コンストラクタ : デフォルト
	CStaticOwl(Float2 pos, Float2 size, k_Texture index);

	//アップデート
	virtual bool Update();

	//スイッチ押されたとき
	virtual void onSwitch(void);

};

#endif //COWL_H
