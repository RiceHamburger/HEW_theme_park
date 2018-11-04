/*====================================================================================

��N���X�@ [DoorManager.cpp]
Autor	: ���E�r�����`����
Date	: 2018/11/2
--------------------------------------------------------------------------------------
�R�����g:
��N���X : �w�i

--------------------------------------------------------------------------------------
�C������:
====================================================================================*/


/*--------------------------------------------------------------------------------------
�C���N���[�h�t�@�C��
--------------------------------------------------------------------------------------*/
#include "DoorManager.h"
#include "CDoor.h"
/*--------------------------------------------------------------------------------------
�񋓌^ : �\����
--------------------------------------------------------------------------------------*/

/*--------------------------------------------------------------------------------------
�O���[�o���֐�
--------------------------------------------------------------------------------------*/
static CDoor *pDoor = NULL;

/*--------------------------------------------------------------------------------------
�֐�
--------------------------------------------------------------------------------------*/

void Door_Init(k_Texture index, D3DXVECTOR2 player_one, D3DXVECTOR2 player_two)
{
	pDoor = new CDoor(index, player_one, player_two);
}

void Door_Init(k_Texture index)
{
	pDoor = new CDoor(k_kobeni);
}

void Door_Uninit(void)
{
	delete pDoor;
	pDoor = NULL;
}

void Door_Update(void)
{
	pDoor->ColorUpdate();
}

void Door_Draw(void)
{
	pDoor->Draw();
}

void Door_Switch(int index)
{
	pDoor->Switch(index);
}

bool Door_Fin(void)
{
	return pDoor->Fin();
}