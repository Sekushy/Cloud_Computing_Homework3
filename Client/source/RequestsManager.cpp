#include "RequestsManager.h"

#include "HandshakeRequest.h"
#include "SumRequest.h"
#include "WordCountRequest.h"
#include "DateRequest.h"

RequestsManager::RequestsManager()
{
	this->requests.emplace("Handshake", std::make_shared<HandshakeRequest>());
	this->requests.emplace("Sum", std::make_shared<SumRequest>());
	this->requests.emplace("WordCounter", std::make_shared<WordCountRequest>());
	this->requests.emplace("Date", std::make_shared<DateRequest>());
}


std::map<std::string, std::shared_ptr<Framework::Request>> RequestsManager::getMap() const
{
	return this->requests;
}
