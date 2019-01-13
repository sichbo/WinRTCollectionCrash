#pragma once

#include "Thing.g.h"

namespace winrt::A::implementation
{
    struct Thing : ThingT<Thing>
    {
        Thing() = default;

        hstring Name();
        void Name(hstring const& value);
        hstring ToString();

		static A::ThingCollection GetThings();
		
		Thing(hstring name) : m_Name(name){}

		hstring m_Name;
    };
}

namespace winrt::A::factory_implementation
{
    struct Thing : ThingT<Thing, implementation::Thing>
    {
    };
}
