#include "pch.h"
#include "ThingCollection.h"

namespace winrt::A::implementation
{
    Windows::Foundation::Collections::IIterator<A::Thing> ThingCollection::First()
    {
		return m_Impl.First();
    }

    A::Thing ThingCollection::GetAt(uint32_t index)
    {
		return m_Impl.GetAt(index);
    }

    uint32_t ThingCollection::Size()
    {
		return m_Impl.Size();
    }

    Windows::Foundation::Collections::IVectorView<A::Thing> ThingCollection::GetView()
    {
		return m_Impl.GetView();
    }

    bool ThingCollection::IndexOf(A::Thing const& value, uint32_t& index)
    {
		return m_Impl.IndexOf(value, index);
    }

    void ThingCollection::SetAt(uint32_t index, A::Thing const& value)
    {
		m_Impl.SetAt(index, value);
    }

    void ThingCollection::InsertAt(uint32_t index, A::Thing const& value)
    {
		m_Impl.InsertAt(index, value);
    }

    void ThingCollection::RemoveAt(uint32_t index)
    {
		m_Impl.RemoveAt(index);
    }

    void ThingCollection::Append(A::Thing const& value)
    {
		m_Impl.Append(value);
    }

    void ThingCollection::RemoveAtEnd()
    {
		m_Impl.RemoveAtEnd();
    }

    void ThingCollection::Clear()
    {
		m_Impl.Clear();
    }

    uint32_t ThingCollection::GetMany(uint32_t startIndex, array_view<A::Thing> items)
    {
		return m_Impl.GetMany(startIndex, items);
    }

    void ThingCollection::ReplaceAll(array_view<A::Thing const> items)
    {
		m_Impl.ReplaceAll(items);
    }
}
