﻿/***********************************************************************
!!!!!! DO NOT MODIFY !!!!!!

Source: Host.sln

This file is generated by Workflow compiler
https://github.com/vczh-libraries
***********************************************************************/

#ifndef VCZH_WORKFLOW_COMPILER_GENERATED_DEMOINCLUDES
#define VCZH_WORKFLOW_COMPILER_GENERATED_DEMOINCLUDES

#include "Demo.h"
#include "MainWindow.h"

/***********************************************************************
Reflection
***********************************************************************/

namespace vl
{
	namespace reflection
	{
		namespace description
		{
#ifndef VCZH_DEBUG_NO_REFLECTION
			DECL_TYPE_INFO(::demo::DataGridTabPage)
			DECL_TYPE_INFO(::demo::DataGridTabPageConstructor)
			DECL_TYPE_INFO(::demo::IViewModel)
			DECL_TYPE_INFO(::demo::ListViewTabPage)
			DECL_TYPE_INFO(::demo::ListViewTabPageConstructor)
			DECL_TYPE_INFO(::demo::MainWindow)
			DECL_TYPE_INFO(::demo::MainWindowConstructor)
			DECL_TYPE_INFO(::demo::MyCategory)
			DECL_TYPE_INFO(::demo::MyDataItem)
			DECL_TYPE_INFO(::demo::MyGender)
			DECL_TYPE_INFO(::demo::MyTextItem)
			DECL_TYPE_INFO(::demo::TextListTabPage)
			DECL_TYPE_INFO(::demo::TextListTabPageConstructor)
			DECL_TYPE_INFO(::demo::TreeViewTabPage)
			DECL_TYPE_INFO(::demo::TreeViewTabPageConstructor)

			BEGIN_INTERFACE_PROXY_NOPARENT_SHAREDPTR(::demo::IViewModel)
				void AddTextItem(::vl::Ptr<::demo::MyTextItem> item) override
				{
					INVOKE_INTERFACE_PROXY(AddTextItem, item);
				}
				void ClearTextItems() override
				{
					INVOKE_INTERFACE_PROXY_NOPARAMS(ClearTextItems);
				}
				::vl::Ptr<::vl::reflection::description::IValueObservableList> GetTextItems() override
				{
					INVOKEGET_INTERFACE_PROXY_NOPARAMS(GetTextItems);
				}
				void RemoveTextItem(::vl::vint32_t index) override
				{
					INVOKE_INTERFACE_PROXY(RemoveTextItem, index);
				}
			END_INTERFACE_PROXY(::demo::IViewModel)
#endif

			extern bool LoadDemoTypes();
		}
	}
}

#endif
