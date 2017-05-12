#include "stdafx.h"
#include "Condition.h"

Condition::~Condition()
{
}

bool Condition::compare(int value)
{
	int cmpValue = atoi(comparedValue.c_str());
	switch (this->operateType)
	{
	case INEQUAL: return cmpValue != value;
	case LESS: return cmpValue < value;
	case NO_MORE: return cmpValue <= value;
	case EQUAL: return cmpValue == value;
	case NO_LESS: return cmpValue >= value;
	case MORE: return cmpValue > value;
	default: return false;//No such comparision
	}
}

bool Condition::compare(float value)
{
	float cmpValue = atof(comparedValue.c_str());
	switch (this->operateType)
	{
	case INEQUAL: return cmpValue != value;
	case LESS: return cmpValue < value;
	case NO_MORE: return cmpValue <= value;
	case EQUAL: return cmpValue == value;
	case NO_LESS: return cmpValue >= value;
	case MORE: return cmpValue > value;
	default: return false;//No such comparision
	}
}

bool Condition::compare(string value)
{
	switch (this->operateType)
	{
	case INEQUAL: return comparedValue != value;
	case LESS: return comparedValue < value;
	case NO_MORE: return comparedValue <= value;
	case EQUAL: return comparedValue == value;
	case NO_LESS: return comparedValue >= value;
	case MORE: return comparedValue > value;
	default: return false;//No such comparision
	}
}