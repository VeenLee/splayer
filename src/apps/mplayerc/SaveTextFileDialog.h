/* 
 *	Copyright (C) 2003-2006 Gabest
 *	http://www.gabest.org
 *
 *  This Program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2, or (at your option)
 *  any later version.
 *   
 *  This Program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *  GNU General Public License for more details.
 *   
 *  You should have received a copy of the GNU General Public License
 *  along with GNU Make; see the file COPYING.  If not, write to
 *  the Free Software Foundation, 675 Mass Ave, Cambridge, MA 02139, USA. 
 *  http://www.gnu.org/copyleft/gpl.html
 *
 */

#pragma once

#include "..\..\subtitles\TextFile.h"

// CSaveTextFileDialog

class CSaveTextFileDialog : public CFileDialog
{
	DECLARE_DYNAMIC(CSaveTextFileDialog)

private:
	CTextFile::enc m_e;

public:
	CSaveTextFileDialog(
		CTextFile::enc e,
		LPCTSTR lpszDefExt = NULL, LPCTSTR lpszFileName = NULL, 
		LPCTSTR lpszFilter = NULL, CWnd* pParentWnd = NULL);
	virtual ~CSaveTextFileDialog();

	CComboBox m_encoding;

	CTextFile::enc GetEncoding() {return(m_e);}

protected:
	DECLARE_MESSAGE_MAP()
	virtual void DoDataExchange(CDataExchange* pDX);
	virtual BOOL OnInitDialog();
	virtual BOOL OnFileNameOK();

public:
	afx_msg void OnEncodingChange();
};


