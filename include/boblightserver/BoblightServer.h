#pragma once

// system includes
#include <cstdint>

// Qt includes
#include <QSet>
#include <QJsonDocument>

#include <utils/Logger.h>
#include <utils/Components.h>

// settings
#include <utils/settings.h>

class BoblightClientConnection;
class AmbilightAppInstance;
class QTcpServer;

///
/// This class creates a TCP server which accepts connections from boblight clients.
///
class BoblightServer : public QObject
{
	Q_OBJECT

public:
	///
	/// BoblightServer constructor
	/// @param ambilightapp Ambilight App instance
	/// @param port port number on which to start listening for connections
	///
	BoblightServer(AmbilightAppInstance* ambilightapp, const QJsonDocument& config);
	~BoblightServer() override;

	///
	/// @return the port number on which this TCP listens for incoming connections
	///
	uint16_t getPort() const;

	/// @return true if server is active (bind to a port)
	///
	bool active() const;

public slots:
	///
	/// bind server to network
	///
	void start();

	///
	/// close server
	///
	void stop();

	void compStateChangeRequest(ambilightapp::Components component, bool enable);

	///
	/// @brief Handle settings update from Ambilight App Settingsmanager emit or this constructor
	/// @param type   settingyType from enum
	/// @param config configuration object
	///
	void handleSettingsUpdate(settings::type type, const QJsonDocument& config);

private slots:
	///
	/// Slot which is called when a client tries to create a new connection
	///
	void newConnection();

	///
	/// Slot which is called when a client closes a connection
	/// @param connection The Connection object which is being closed
	///
	void closedConnection(BoblightClientConnection* connection);

private:
	/// AmbilightApp instance
	AmbilightAppInstance* _ambilightapp;

	/// The TCP server object
	QTcpServer* _server;

	/// List with open connections
	QSet<BoblightClientConnection*> _openConnections;

	/// ambilightapp priority
	int _priority;

	/// Logger instance
	Logger* _log;

	// current port
	uint16_t  _port;
};
