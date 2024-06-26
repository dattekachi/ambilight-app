#pragma once

#include <effectengine/AnimationBase.h>

#define ANIM_PLASMA "Plasma"
#define PLASMA_WIDTH  80
#define PLASMA_HEIGHT 45
#define PAL_LEN       360
class Animation_Plasma : public AnimationBase
{
public:

	Animation_Plasma();

	void Init(
		AmbilightImage& hyperImage,
		int hyperLatchTime) override;

	bool Play(AmbilightImage& painter) override;

	static EffectDefinition getDefinition();

private:

	qint64  start;

	int     plasma[PLASMA_WIDTH * PLASMA_HEIGHT];
	uint8_t pal[PAL_LEN * 3];
};
