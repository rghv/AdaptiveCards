#include "pch.h"
#include "AdaptiveFact.h"
#include "Util.h"
#include <windows.foundation.collections.h>
#include "XamlCardRendererComponent.h"

using namespace Microsoft::WRL;
using namespace Microsoft::WRL::Wrappers;
using namespace ABI::AdaptiveCards::XamlCardRenderer;
using namespace ABI::Windows::Foundation::Collections;
using namespace ABI::Windows::UI::Xaml;
using namespace ABI::Windows::UI::Xaml::Controls;

namespace AdaptiveCards { namespace XamlCardRenderer
{
    HRESULT AdaptiveFact::RuntimeClassInitialize() noexcept try
    {
        m_sharedFact = std::make_shared<Fact>();
        return S_OK;
    } CATCH_RETURN;

    _Use_decl_annotations_
    HRESULT AdaptiveFact::RuntimeClassInitialize(const std::shared_ptr<AdaptiveCards::Fact>& sharedFact)
    {
        m_sharedFact = sharedFact;
        return S_OK;
    }

    _Use_decl_annotations_
    HRESULT AdaptiveFact::get_Title(HSTRING* title)
    {
        return UTF8ToHString(m_sharedFact->GetTitle(), title);
    }

    _Use_decl_annotations_
    HRESULT AdaptiveFact::put_Title(HSTRING title)
    {
        std::string out;
        RETURN_IF_FAILED(HStringToUTF8(title, out));
        m_sharedFact->SetTitle(out);
        return S_OK;
    }

    _Use_decl_annotations_
    HRESULT AdaptiveFact::get_Value(HSTRING* value)
    {
        return UTF8ToHString(m_sharedFact->GetValue(), value);
    }

    _Use_decl_annotations_
    HRESULT AdaptiveFact::put_Value(HSTRING value)
    {
        std::string out;
        RETURN_IF_FAILED(HStringToUTF8(value, out));
        m_sharedFact->SetValue(out);
        return S_OK;
    }

    _Use_decl_annotations_
    HRESULT AdaptiveFact::get_Speak(HSTRING* speak)
    {
        return UTF8ToHString(m_sharedFact->GetSpeak(), speak);
    }

    _Use_decl_annotations_
    HRESULT AdaptiveFact::put_Speak(HSTRING speak)
    {
        std::string out;
        RETURN_IF_FAILED(HStringToUTF8(speak, out));
        m_sharedFact->SetSpeak(out);
        return S_OK;
    }

    _Use_decl_annotations_
    HRESULT AdaptiveFact::get_ElementType(ElementType* elementType)
    {
        *elementType = ElementType::Fact;
        return S_OK;
    }

}}
