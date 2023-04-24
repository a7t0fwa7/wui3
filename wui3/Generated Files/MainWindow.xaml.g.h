﻿//------------------------------------------------------------------------------
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
//------------------------------------------------------------------------------
#pragma once


namespace winrt::wui3::implementation
{
    using IInspectable = ::winrt::Windows::Foundation::IInspectable;

    template <typename D, typename ... I>
    struct MainWindowT : public ::winrt::wui3::implementation::MainWindow_base<D,
        ::winrt::Microsoft::UI::Xaml::Markup::IComponentConnector,
        I...>
    {
        using base_type = typename MainWindowT::base_type;
        using base_type::base_type;
        using class_type = typename MainWindowT::class_type;

        void InitializeComponent();
        virtual void Connect(int32_t connectionId, IInspectable const& target);
        virtual ::winrt::Microsoft::UI::Xaml::Markup::IComponentConnector GetBindingConnector(int32_t connectionId, IInspectable const& target);
        void UnloadObject(::winrt::Microsoft::UI::Xaml::DependencyObject const& dependencyObject);
        void DisconnectUnloadedObject(int32_t connectionId);

        ::winrt::Microsoft::UI::Xaml::Controls::StackPanel AskText()
        {
            return _AskText;
        }
        void AskText(::winrt::Microsoft::UI::Xaml::Controls::StackPanel value)
        {
            _AskText = value;
        }

        ::winrt::Microsoft::UI::Xaml::Controls::StackPanel Message1()
        {
            return _Message1;
        }
        void Message1(::winrt::Microsoft::UI::Xaml::Controls::StackPanel value)
        {
            _Message1 = value;
        }

        ::winrt::Microsoft::UI::Xaml::Controls::InfoBar Message1_Question()
        {
            return _Message1_Question;
        }
        void Message1_Question(::winrt::Microsoft::UI::Xaml::Controls::InfoBar value)
        {
            _Message1_Question = value;
        }

        ::winrt::Microsoft::UI::Xaml::Controls::Button Message1_OK()
        {
            return _Message1_OK;
        }
        void Message1_OK(::winrt::Microsoft::UI::Xaml::Controls::Button value)
        {
            _Message1_OK = value;
        }

        ::winrt::Microsoft::UI::Xaml::Controls::InfoBar AskText_Question()
        {
            return _AskText_Question;
        }
        void AskText_Question(::winrt::Microsoft::UI::Xaml::Controls::InfoBar value)
        {
            _AskText_Question = value;
        }

        ::winrt::Microsoft::UI::Xaml::Controls::TextBox AskText_Response()
        {
            return _AskText_Response;
        }
        void AskText_Response(::winrt::Microsoft::UI::Xaml::Controls::TextBox value)
        {
            _AskText_Response = value;
        }

        ::winrt::Microsoft::UI::Xaml::Controls::Button AskText_OK()
        {
            return _AskText_OK;
        }
        void AskText_OK(::winrt::Microsoft::UI::Xaml::Controls::Button value)
        {
            _AskText_OK = value;
        }

        ::winrt::Microsoft::UI::Xaml::Controls::Button AskText_Cancel()
        {
            return _AskText_Cancel;
        }
        void AskText_Cancel(::winrt::Microsoft::UI::Xaml::Controls::Button value)
        {
            _AskText_Cancel = value;
        }
        
    protected:
        bool _contentLoaded{false};

    private:
        struct MainWindow_obj1_Bindings;

        ::winrt::Microsoft::UI::Xaml::Controls::StackPanel _AskText{nullptr};
        ::winrt::Microsoft::UI::Xaml::Controls::StackPanel _Message1{nullptr};
        ::winrt::Microsoft::UI::Xaml::Controls::InfoBar _Message1_Question{nullptr};
        ::winrt::Microsoft::UI::Xaml::Controls::Button _Message1_OK{nullptr};
        ::winrt::Microsoft::UI::Xaml::Controls::InfoBar _AskText_Question{nullptr};
        ::winrt::Microsoft::UI::Xaml::Controls::TextBox _AskText_Response{nullptr};
        ::winrt::Microsoft::UI::Xaml::Controls::Button _AskText_OK{nullptr};
        ::winrt::Microsoft::UI::Xaml::Controls::Button _AskText_Cancel{nullptr};
    };
}
