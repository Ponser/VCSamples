﻿//------------------------------------------------------------------------------
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
//------------------------------------------------------------------------------
#include "pch.h"

#pragma warning(push)
#pragma warning(disable: 4100) // unreferenced formal parameter

#if defined _DEBUG && !defined DISABLE_XAML_GENERATED_BINDING_DEBUG_OUTPUT
extern "C" __declspec(dllimport) int __stdcall IsDebuggerPresent();
#endif

#include "ProfileLocalUsageData.xaml.h"

void ::SDKSample::NetworkInformationApi::ProfileLocalUsageData::InitializeComponent()
{
    if (_contentLoaded)
    {
        return;
    }
    _contentLoaded = true;
    ::Windows::Foundation::Uri^ resourceLocator = ref new ::Windows::Foundation::Uri(L"ms-appx:///ProfileLocalUsageData.xaml");
    ::Windows::UI::Xaml::Application::LoadComponent(this, resourceLocator, ::Windows::UI::Xaml::Controls::Primitives::ComponentResourceLocation::Application);
}

void ::SDKSample::NetworkInformationApi::ProfileLocalUsageData::Connect(int __connectionId, ::Platform::Object^ __target)
{
    switch (__connectionId)
    {
    case 1:
        {
            this->LayoutRoot = safe_cast<::Windows::UI::Xaml::Controls::Grid^>(__target);
        }
        break;
    case 2:
        {
            this->Input = safe_cast<::Windows::UI::Xaml::Controls::Grid^>(__target);
        }
        break;
    case 3:
        {
            this->Output = safe_cast<::Windows::UI::Xaml::Controls::Grid^>(__target);
        }
        break;
    case 4:
        {
            this->Scenario2Input = safe_cast<::Windows::UI::Xaml::Controls::TextBlock^>(__target);
        }
        break;
    case 5:
        {
            this->ProfileLocalUsageDataButton = safe_cast<::Windows::UI::Xaml::Controls::Button^>(__target);
            (safe_cast<::Windows::UI::Xaml::Controls::Button^>(this->ProfileLocalUsageDataButton))->Click += ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::SDKSample::NetworkInformationApi::ProfileLocalUsageData::*)
                (::Platform::Object^, ::Windows::UI::Xaml::RoutedEventArgs^))&ProfileLocalUsageData::ProfileLocalUsageData_Click);
        }
        break;
    }
    _contentLoaded = true;
}

::Windows::UI::Xaml::Markup::IComponentConnector^ ::SDKSample::NetworkInformationApi::ProfileLocalUsageData::GetBindingConnector(int __connectionId, ::Platform::Object^ __target)
{
    __connectionId;         // unreferenced
    __target;               // unreferenced
    return nullptr;
}

#pragma warning(pop)


