#pragma once
#include "Thing.h"
#include "ThingCollection.g.h"

namespace winrt::A::implementation
{
    struct ThingCollection : ThingCollectionT<ThingCollection>
    {
        ThingCollection() = default;

        Windows::Foundation::Collections::IIterator<A::Thing> First();
        A::Thing GetAt(uint32_t index);
        uint32_t Size();
        Windows::Foundation::Collections::IVectorView<A::Thing> GetView();
        bool IndexOf(A::Thing const& value, uint32_t& index);
        void SetAt(uint32_t index, A::Thing const& value);
        void InsertAt(uint32_t index, A::Thing const& value);
        void RemoveAt(uint32_t index);
        void Append(A::Thing const& value);
        void RemoveAtEnd();
        void Clear();
        uint32_t GetMany(uint32_t startIndex, array_view<A::Thing> items);
        void ReplaceAll(array_view<A::Thing const> items);

		Windows::Foundation::Collections::IVector<A::Thing> m_Impl{ winrt::single_threaded_vector<A::Thing>() };

    };
}

namespace winrt::A::factory_implementation
{
    struct ThingCollection : ThingCollectionT<ThingCollection, implementation::ThingCollection>
    {
    };
}
