#pragma once

#include <base/GrabberWrapper.h>
#include <grabber/AVF/AVFGrabber.h>

class AVFWrapper : public GrabberWrapper
{
	Q_OBJECT

public:
	AVFWrapper(const QString& device, const QString& configurationPath);
};
