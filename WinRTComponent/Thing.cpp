#include "pch.h"
#include "Thing.h"
#include "ThingCollection.h"

namespace winrt::A::implementation
{
    hstring Thing::Name()
    {
		return m_Name;
    }

    void Thing::Name(hstring const& value)
    {
		m_Name = value;
    }

    hstring Thing::ToString()
    {
		return m_Name;
    }

	A::ThingCollection Thing::GetThings()
	{
		auto ar = winrt::make_self<ThingCollection>();
		return *ar;
	}
}
