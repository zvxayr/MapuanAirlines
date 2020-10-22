#include "Interop.h"
#include <msclr\marshal_cppstd.h>

std::string Interop::ConvertString(System::String^ str)
{
	return msclr::interop::marshal_as<std::string>(str);
}

System::String^ Interop::ConvertString(const std::string& str)
{
	return gcnew System::String(str.c_str());
}
