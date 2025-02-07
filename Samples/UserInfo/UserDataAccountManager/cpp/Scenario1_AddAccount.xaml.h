//*********************************************************
//
// Copyright (c) Microsoft. All rights reserved.
// This code is licensed under the MIT License (MIT).
// THIS CODE IS PROVIDED *AS IS* WITHOUT WARRANTY OF
// ANY KIND, EITHER EXPRESS OR IMPLIED, INCLUDING ANY
// IMPLIED WARRANTIES OF FITNESS FOR A PARTICULAR
// PURPOSE, MERCHANTABILITY, OR NON-INFRINGEMENT.
//
//*********************************************************

#pragma once

#include "Scenario1_AddAccount.g.h"
#include "MainPage.xaml.h"

namespace SDKTemplate
{
    /// <summary>
    /// An empty page that can be used on its own or navigated to within a Frame.
    /// </summary>
    [Windows::Foundation::Metadata::WebHostHidden]
    public ref class Scenario1_AddAccount sealed
    {
    public:
        Scenario1_AddAccount();
    private:
        MainPage^ rootPage;
        bool addAccountLaunched;

        void AddAccount_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
        Concurrency::task<void> DisplayUserInformationAsync(Platform::String^ userID);
    };
}
