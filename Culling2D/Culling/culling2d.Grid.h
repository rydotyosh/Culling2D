#pragma once
#include "../Common/Math/culling2d.RectF.h"
#include "culling2d.Object.h"
#include <vector>
#include <array>
#include "../culling2d.ReferenceObject.h"

namespace culling2d
{
	class Grid
		:public ReferenceObject
	{
		int resolutionLevel;
		RectF gridRange;
		int index;
		std::set<Object*> objects;
		static std::array<int, 4> childrenIndices;
	public:
		Grid(int resolutionLevel,RectF gridRange);
		~Grid();
		int GetResolutionLevel() const;
		RectF GetGridRange() const;

		int GetCullingObjects(RectF cullingRange, std::vector<Object*> &cullingObjects);

		static std::array<int,4> &GetChildrenIndices(int index,int currentResolution);
		
		bool AddObject(Object* object);
		bool RemoveObject(Object* object);
	};
}