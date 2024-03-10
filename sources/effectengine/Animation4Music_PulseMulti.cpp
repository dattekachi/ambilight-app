/* Animation4Music_PulseMulti.cpp
*
*  MIT License
*
*  Copyright (c) 2020-2023 awawa-dev
*
*  Project homesite: https://github.com/awawa-dev/HyperHDR
*
*  Permission is hereby granted, free of charge, to any person obtaining a copy
*  of this software and associated documentation files (the "Software"), to deal
*  in the Software without restriction, including without limitation the rights
*  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
*  copies of the Software, and to permit persons to whom the Software is
*  furnished to do so, subject to the following conditions:
*
*  The above copyright notice and this permission notice shall be included in all
*  copies or substantial portions of the Software.

*  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
*  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
*  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
*  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
*  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
*  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
*  SOFTWARE.
 */

#include <effectengine/Animation4Music_PulseMulti.h>
#include <base/SoundCapture.h>

Animation4Music_PulseMulti::Animation4Music_PulseMulti() :
	AnimationBaseMusic(AMUSIC_PULSEMULTI),
	_internalIndex(0),
	_oldMulti(0)
{

};

EffectDefinition Animation4Music_PulseMulti::getDefinition()
{
	EffectDefinition ed(true, EffectFactory<Animation4Music_PulseMulti>);
	ed.name = AMUSIC_PULSEMULTI;
	return ed;
}

void Animation4Music_PulseMulti::Init(
	QImage& hyperImage,
	int hyperLatchTime
)
{
	SetSleepTime(15);
}

bool Animation4Music_PulseMulti::Play(QPainter* painter)
{
	return false;
}

bool Animation4Music_PulseMulti::hasOwnImage()
{
	return true;
};

bool Animation4Music_PulseMulti::getImage(Image<ColorRgb>& newImage)
{
	bool newData = false;
	auto r = _soundCapture->hasResult(this, _internalIndex, &newData, NULL, NULL, &_oldMulti);

	if (r == nullptr || !newData)
		return false;

	QColor color;
	uint32_t maxSingle, average;

	if (!r->GetStats(average, maxSingle, color))
		return false;

	int red = color.red();
	int green = color.green();
	int blue = color.blue();

	newImage.fastBox(0, 0, newImage.width() - 1, newImage.height() - 1, red, green, blue);

	return true;
};







