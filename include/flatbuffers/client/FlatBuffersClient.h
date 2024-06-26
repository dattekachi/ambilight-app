#pragma once

// Qt includes
#include <QString>
#include <QTcpSocket>
#include <QLocalSocket>
#include <QTimer>
#include <QMap>

#include <utils/Image.h>
#include <utils/ColorRgb.h>
#include <utils/Logger.h>

#define AMBILIGHTAPP_DOMAIN_SERVER QStringLiteral("ambilightapp-domain")

class FlatBuffersClient : public QObject
{

	Q_OBJECT

public:
	FlatBuffersClient(QObject* parent, const QString& origin, const QString& address, int priority, bool skipReply);
	~FlatBuffersClient() override;

	void setSkipReply(bool skip);
	void setRegister(const QString& origin, int priority);
	void setColor(const ColorRgb& color, int priority, int duration = 1);
	void clear(int priority);
	void clearAll();
	void sendMessage(const uint8_t* buffer, uint32_t size);
	QString getErrorString();

public slots:
	void sendImage(const Image<ColorRgb>& image);
	void setColorHandler(ColorRgb color, int duration);

private slots:
	void connectToHost();
	void readData();

signals:
	void SignalImageToSend(const Image<ColorRgb>& image);
	void SignalSetColor(ColorRgb color, int duration);

private:
	bool initParserLibrary();

	QTcpSocket*		_socket;
	QLocalSocket*	_domain;
	QString			_origin;
	int				_priority;
	QString			_host;
	uint16_t		_port;

	QByteArray		_receiveBuffer;
	QTimer			_timer;
	QAbstractSocket::SocketState	_prevSocketState;
	QLocalSocket::LocalSocketState	_prevLocalState;

	Logger* _log;
	QString	_error;
	void*	_builder;

	bool	_registered;
	bool	_sent;
	uint64_t _lastSendImage;
};
