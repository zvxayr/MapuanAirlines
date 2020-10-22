#pragma once
#include <memory>
#include <string>

namespace Interop
{
	std::string ConvertString(System::String^ str);
	System::String^ ConvertString(const std::string&);

	template <typename T>
	public ref class Managed
	{
	public:
		template <typename... Args>
		Managed(Args&&... args)
		{
			m_Impl = new T(std::forward<Args>(args)...);
		}

		~Managed()
		{
			delete m_Impl;
		}

		T* operator->()
		{
			return m_Impl;
		}

	private:
		T* m_Impl;
	};
};
