﻿
#pragma once

//----------------------------------------------------------------------------------
// Include
//----------------------------------------------------------------------------------
#include <array>
#include "../culling2d.common.Base.h"
#include "culling2d.Vector2DF.h"
#include "culling2d.Circle.h"

//----------------------------------------------------------------------------------
//
//----------------------------------------------------------------------------------
namespace culling2d { 
//----------------------------------------------------------------------------------
//
//----------------------------------------------------------------------------------
	/**
	@brief	長方形(浮動小数点)の構造体
	*/
	struct RectF
	{
	public:
		/**
		@brief	左上X座標
		*/
		float X;

		/**
		@brief	左上Y座標
		*/
		float Y;

		/**
		@brief	横幅
		*/
		float Width;

		/**
		@brief	縦幅
		*/
		float Height;

		/**
		@brief	コンストラクタ
		*/
		RectF();

		/**
		@brief	コンストラクタ
		@param	x	左上X座標
		@param	y	左上Y座標
		@param	width	横幅
		@param	height	縦幅
		*/
		RectF(float x, float y, float width, float height);

		/**
		@brief	左上座標を取得する。
		@return	左上座標
		*/
		Vector2DF GetPosition() const;

		/**
		@brief	大きさを取得する。
		@return	大きさ
		*/
		Vector2DF GetSize() const;

		/**
		@brief	四隅の座標を(X,Y)、(X+Width,Y)、(X+Width,Y+Height)、(X,Y+Height)の順に配列として取得する。
		@return	座標
		*/
		std::array<Vector2DF, 4> GetVertexes() const;

		/**
		@brief	円と衝突しているか否かを調べる。
		@param circle 円
		@return	衝突しているか否か
		*/
		bool GetCollision(Circle circle);
	};

//----------------------------------------------------------------------------------
//
//----------------------------------------------------------------------------------
 } 
//----------------------------------------------------------------------------------
//
//----------------------------------------------------------------------------------
