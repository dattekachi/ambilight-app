#ifndef PCH_ENABLED
	#include <utils/Logger.h>
#endif

#include <cec/WrapperCEC.h>


WrapperCEC::WrapperCEC():
	_cecHandler(nullptr),
	_log(Logger::getInstance("CEC"))
{
}

WrapperCEC::~WrapperCEC()
{
	enable(false);
}

void WrapperCEC::sourceRequestHandler(hyperhdr::Components component, int hyperhdrInd, bool listen)
{
	if (component == hyperhdr::Components::COMP_CEC)
	{
		if (listen && !CEC_CLIENTS.contains(hyperhdrInd))
			CEC_CLIENTS.append(hyperhdrInd);
		else if (!listen)
			CEC_CLIENTS.removeOne(hyperhdrInd);

		if (CEC_CLIENTS.empty())
			enable(false);
		else
			enable(true);
	}
}

void WrapperCEC::enable(bool enabled)
{
	if (enabled)
	{
		if (_cecHandler == nullptr)
		{
			Info(_log, "Opening libCEC library.");

#if defined(ENABLE_CEC)
			_cecHandler = new cecHandler();
			connect(_cecHandler, &cecHandler::stateChange, this, &WrapperCEC::SignalStateChange);
			connect(_cecHandler, &cecHandler::keyPressed, this, &WrapperCEC::SignalKeyPressed);
			if (_cecHandler->start())
				Info(_log, "Success: libCEC library loaded.");
			else
			{
				Error(_log, "Could not open libCEC library");
				enable(false);
			}
#endif
		}
	}
	else
	{
		if (_cecHandler != nullptr)
		{
			Info(_log, "Disconnecting from libCEC library");

#if defined(ENABLE_CEC)
			disconnect(_cecHandler, &cecHandler::stateChange, this, &WrapperCEC::SignalStateChange);
			disconnect(_cecHandler, &cecHandler::keyPressed, this, &WrapperCEC::SignalKeyPressed);
			
			_cecHandler->stop();
			Info(_log, "Cleaning up libCEC");
			delete _cecHandler;
			_cecHandler = nullptr;
#endif
		}
	}
}
