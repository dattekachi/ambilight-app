#pragma once

// QT include
#include <QString>
#include <QJsonObject>

struct ActiveEffectDefinition
{
	QString		name;
	int			priority;
	int			timeout;
};
