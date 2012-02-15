/** \file
 *  Game Develop
 *  2008-2012 Florian Rival (Florian.Rival@gmail.com)
 */

#if defined(GD_IDE_ONLY)

#ifndef PROPIMAGE_H
#define PROPIMAGE_H

//(*Headers(PropImage)
#include <wx/sizer.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
#include <wx/checkbox.h>
#include <wx/panel.h>
#include <wx/button.h>
#include <wx/scrolbar.h>
#include <wx/dialog.h>
//*)
#include "GDL/ResourcesManager.h"

class GD_API PropImage: public wxDialog
{
	public:

		PropImage(wxWindow* parent, ImageResource & image_);
		virtual ~PropImage();

		//(*Declarations(PropImage)
		wxButton* OkBt;
		wxScrollBar* scrollWidth;
		wxTextCtrl* FichierEdit;
		wxStaticText* StaticText2;
		wxPanel* apercuPanel;
		wxButton* BrowseBt;
		wxCheckBox* LissageCheck;
		wxStaticText* StaticText1;
		wxScrollBar* scrollHeight;
		wxStaticText* widthTxt;
		wxStaticText* StaticText5;
		wxTextCtrl* NomEdit;
		wxButton* AnnulerBt;
		wxStaticText* heightTxt;
		wxCheckBox* alwaysLoadedCheck;
		wxStaticText* StaticText4;
		//*)

		ImageResource & image;

	protected:

		//(*Identifiers(PropImage)
		static const long ID_STATICTEXT1;
		static const long ID_TEXTCTRL1;
		static const long ID_STATICTEXT2;
		static const long ID_TEXTCTRL2;
		static const long ID_BUTTON3;
		static const long ID_CHECKBOX1;
		static const long ID_CHECKBOX2;
		static const long ID_STATICTEXT4;
		static const long ID_STATICTEXT6;
		static const long ID_STATICTEXT5;
		static const long ID_STATICTEXT3;
		static const long ID_BUTTON1;
		static const long ID_BUTTON2;
		static const long ID_PANEL1;
		static const long ID_SCROLLBAR1;
		static const long ID_SCROLLBAR2;
		//*)

	private:

		//(*Handlers(PropImage)
		void OnOkBtClick(wxCommandEvent& event);
		void OnAnnulerBtClick(wxCommandEvent& event);
		void OnFichierEditText(wxCommandEvent& event);
		void OnapercuPanelPaint(wxPaintEvent& event);
		void OnscrollWidthScroll(wxScrollEvent& event);
		void OnscrollHeightScroll(wxScrollEvent& event);
		void OnBrowseBtClick(wxCommandEvent& event);
		//*)
        void OnSize(wxSizeEvent& event);

		DECLARE_EVENT_TABLE()
};

#endif
#endif