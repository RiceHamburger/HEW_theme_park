//=====================================================================//
//		システムタイマー [systemTimer.h]                               //
//                                                                     //
//                                               GP51A247 SoSei        //
//                                               2018/06/15            //
//---------------------------------------------------------------------//
//                                                                     //
//=====================================================================//
#ifndef SYSTEMTIMER_H_
#define SYSTEMTIMER_H_
#include <Windows.h>

/**************************************************

プロトタイプ宣言

**************************************************/
/* --------------------------------
システムタイマーの初期化
-------------------------------- */
void SystemTimerInitialize(void);
/* --------------------------------
システムタイマーのリセット
-------------------------------- */
void SystemTimerReset(void);
/* --------------------------------
システムタイマーのスタート
-------------------------------- */
void SystemTimerStart(void);
/* --------------------------------
システムタイマーのストップ
-------------------------------- */
void SystemTimerStop(void);
/* --------------------------------
システムタイマーを0.1秒進める
-------------------------------- */
void SystemTimerAdvance(void);

/* --------------------------------
計測時間の取得
-------------------------------- */
double SystemTimerGetTime(void);
/* --------------------------------
現在の時間を取得
-------------------------------- */
double SystemTimerGetAbsoluteTime(void);
/* --------------------------------
経過時間の取得
-------------------------------- */
float SystemTimerGetElapsedTime(void);
/* --------------------------------
システムタイマーが止まっているか？
-------------------------------- */
bool SystemTimerIsStoped(void);
/* --------------------------------
現在のスレッドを1つのプロセッサ（現在のスレッド）に制限
-------------------------------- */
void LimitThreadAffinityToCurrentProc(void);

#endif // SYSTEMTIMER_H_
