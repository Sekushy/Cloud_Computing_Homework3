#pragma once

#include "Request.h"

class DateRequest : public Framework::Request
{
public:
	DateRequest();
private:
	int year;
	int month;
	int day;
};