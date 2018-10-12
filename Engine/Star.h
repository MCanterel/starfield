#pragma once

#define _USE_MATH_DEFINES

#include <vector>
#include <math.h>
#include "Vec2.h"

class Star
{
public:
	static std::vector<Vec2> Make(float outerRadius, float innerRadius, int nFlares = 5)
	{
		std::vector<Vec2> star;
		star.reserve(nFlares * 2);
		const float dTheta = 2.0 * M_PI / float(nFlares * 2);
		for (int i = 0; i < nFlares * 2; i++)
		{
			const float rad = (i % 2 == 0) ? outerRadius : innerRadius;
			star.emplace_back(
				rad * cos(float(i) * dTheta),
				rad * sin(float(i) * dTheta)
			);
		}


}
};