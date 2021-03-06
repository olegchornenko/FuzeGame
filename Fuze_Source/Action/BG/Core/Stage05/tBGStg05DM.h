﻿// -------------------------------------------------------------------------- //
//! @file   tBGStg05DM.h
//! @brief  
//! @author Nal
//! @since  13/08/30(金)
//!
//! COPYRIGHT (C) 2013 EDELWEISS ALL RIGHT RESERVED
// -------------------------------------------------------------------------- //
#pragma	once
/* ====< インクルード >====================================================== */
#include "tBGStg05.h"

/* ========================================================================= */
//		DMBGStg05															 */
/* ========================================================================= */
class BGViewer;
class tBGStage5;

class DMBGStg05 : public TGL::DMenu
{
public:
	DMBGStg05( TGL::DMenuRoot* pRoot, BGViewer* pOwner, tBGStg05* pTask );
	virtual ~DMBGStg05();

public:
	// -----------------------------------------------------------------
	//		定義		
	// -----------------------------------------------------------------
	enum {
		//!	項目ID
		ITEMID_LENSFLARE = 0,	//!< レンズフレア
		ITEMID_MAX,

		//!	UV速度
		UVSPD_CITYFALL = 0,	//!< 都市滝 UV速度
		UVSPD_MAX,
	};

	// -----------------------------------------------------------------
	//		関数		
	// -----------------------------------------------------------------
	//!	セットアップ
	virtual void	setup();

	//!	更新
	virtual void	update();
	//!	項目更新
	virtual void	updateItem();
	//!	項目表示
	virtual void	dispItem( TGL::DMenuItem* pItem, bool bCurrent, RGBA32 uColor=0xFFFFFFFF );
	//!	表示判定
	virtual bool	isDisp() const	{ return !KBBTN_DAT(KBBTN_F3); }

	//		アクセサ		
	

private:
	// -----------------------------------------------------------------
	//		定義		
	// -----------------------------------------------------------------

	// -----------------------------------------------------------------
	//		関数		
	// -----------------------------------------------------------------
	//!	UV値取得
	TGL::Vec2*	getTaskUV( u8 uId );

	// -----------------------------------------------------------------
	//		変数		
	// -----------------------------------------------------------------
	BGViewer*	mpOwner;	//!< オーナー
	tBGStg05*	mpTask;		//!< 背景タスク
};

/* ========================================================================= */
/*		EOF																	 */
/* ========================================================================= */
