#pragma once

#include "Android/AndroidJava.h"
#include "CoreMinimal.h"

namespace SimlabsStream
{

class FAndroidOnConnectionResult
	: public FJavaClassObject {
private:
	static bool isPresent;
	static bool lastResult;
	
public:
	static void SetResult(bool result);
	static bool IsPresent();
	static bool GetLastResult();

	FAndroidOnConnectionResult();
};


} // namespace SimlabsStream
