#pragma once

#include <string>

enum MediaWhatsappType
{
	MEDIA_WHATSAPP_TEXT,
	MEDIA_WHATSAPP_IMAGE,
	MEDIA_WHATSAPP_AUDIO,
	MEDIA_WHATSAPP_VIDEO,
	MEDIA_WHATSAPP_CONTACT,
	MEDIA_WHATSAPP_LOCATION
};

class WhatsappMessage
{
private:
	std::string chatId;
	bool fromMe;
	int status;
	std::string data;
	long long timestamp;
	long long receivedTimestamp;
	long long sendTimestamp;
	std::string mediaUrl;
	std::string mediaMimeType;
	int mediaWhatsappType;
	int mediaSize;
	std::string mediaName;
	int mediaDuration;
	double latitude;
	double longitude;
	unsigned char *thumbImage;
	int thumbImageSize;
	std::string remoteResource;
	unsigned char *rawData;
	int rawDataSize;
	unsigned char *thumbnailData;
	int thumbnailDataSize;

public:
	WhatsappMessage(std::string chatId, bool fromMe, int status, std::string data, long long timestamp,
					long long receivedTimestamp, long long sendTimestamp, std::string mediaUrl, std::string mediaMimeType,
					int mediaWhatsappType, int mediaSize, std::string mediaName, int mediaDuration, double latitude, double longitude,
					const void *thumbImage,int thumbImageSize, const std::string &remoteResource, const void *rawData, int rawDataSize,
					const void *thumbnailData, int thumbnailDataSize);
	~WhatsappMessage();

	const std::string &getData() const;
	bool isFromMe() const;
	long long getTimestamp() const;
	double getLatitude() const;
	double getLongitude() const;
	const std::string &getRemoteResource() const;
	int getMediaWhatsappType() const;
	const std::string &getMediaName() const;
	int getMediaDuration() const;

	bool hasThumbnail();
	unsigned char *getThumbnail();
	int getThumbnailSize();

};
