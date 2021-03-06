#include "ResponsesManager.h"

#include "HandshakeResponse.h"
#include "SumResponse.h"
#include "WordCountResponse.h"
#include "DateResponse.h"

ResponsesManager::ResponsesManager()
{
	this->Responses.emplace("Handshake", std::make_shared<HandshakeResponse>());
	this->Responses.emplace("Sum", std::make_shared<SumResponse>());
	this->Responses.emplace("WordCounter", std::make_shared<WordCountResponse>());
	this->Responses.emplace("Date", std::make_shared<DateResponse>());
}

std::map<std::string, std::shared_ptr<Framework::Response>> ResponsesManager::getMap() const
{
	return this->Responses;
}
