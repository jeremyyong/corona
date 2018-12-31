//////////////////////////////////////////////////////////////////////////////
//
// Copyright (C) 2018 Corona Labs Inc.
// Contact: support@coronalabs.com
//
// This file is part of the Corona game engine.
//
// Commercial License Usage
// Licensees holding valid commercial Corona licenses may use this file in
// accordance with the commercial license agreement between you and 
// Corona Labs Inc. For licensing terms and conditions please contact
// support@coronalabs.com or visit https://coronalabs.com/com-license
//
// GNU General Public License Usage
// Alternatively, this file may be used under the terms of the GNU General
// Public license version 3. The license is as published by the Free Software
// Foundation and appearing in the file LICENSE.GPL3 included in the packaging
// of this file. Please review the following information to ensure the GNU 
// General Public License requirements will
// be met: https://www.gnu.org/licenses/gpl-3.0.html
//
// For overview and more information on licensing please refer to README.md
//
//////////////////////////////////////////////////////////////////////////////

#pragma once

#include "Resource.h"
#include <map>
#include <list>


/// Dialog used to select a sample project from the Samples directory.
class CSelectSampleProjectDlg : public CDialog
{
	DECLARE_DYNAMIC(CSelectSampleProjectDlg)

public:
	CSelectSampleProjectDlg(CWnd* pParent = NULL);
	virtual ~CSelectSampleProjectDlg();
	CString GetSelectedProjectPath();

	// Dialog Data
	enum { IDD = IDD_SELECT_SAMPLE_PROJECT };

private:
	struct SampleProjectInfo
	{
		CString ProjectName;
		CString ProjectPath;
		int ImageListIndex;
	};
	typedef std::map<CString, int> ImageListMapping;
	typedef std::list<SampleProjectInfo> SampleProjectInfoList;
	typedef std::map<CString, SampleProjectInfoList> CategorizedSampleProjectMap;

	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	BOOL OnInitDialog();
	void OnOK();
	void LoadProjects(CString &samplesDirectoryPath);
	void BuildList();
	int GetImageIndexForProjectName(CString &projectName);

	DECLARE_MESSAGE_MAP()
	afx_msg void OnFilterComboBoxSelectionChanged();
	afx_msg void OnSampleListDoubleClicked(NMHDR *pNMHDR, LRESULT *pResult);

	CComboBox fFilterComboBox;
	CListCtrl fSampleListCtrl;
	CImageList fImageList;
	CString fSelectedProjectPath;
	ImageListMapping fImageListIndexMapping;
	CategorizedSampleProjectMap fCategorizedProjects;
};
