#pragma once

// Ambilight App includes
#include "ProviderSpi.h"

class LedDeviceSk6812SPI : public ProviderSpi
{
public:
	explicit LedDeviceSk6812SPI(const QJsonObject& deviceConfig);
	static LedDevice* construct(const QJsonObject& deviceConfig);

private:
	bool init(const QJsonObject& deviceConfig) override;
	int write(const std::vector<ColorRgb>& ledValues) override;

	RGBW::WhiteAlgorithm _whiteAlgorithm;

	const int SPI_BYTES_PER_COLOUR;
	uint8_t bitpair_to_byte[4];

	ColorRgbw _temp_rgbw;
};
