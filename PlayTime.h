#ifndef PLAYTIME_H
#define PLAYTIME_H

#ifndef WX_PRECOMP
	//(*HeadersPCH(PlayTime)
	#include <wx/sizer.h>
	#include <wx/button.h>
	#include <wx/panel.h>
	#include <wx/frame.h>
	//*)
#endif
//(*Headers(PlayTime)
//*)

class PlayTime: public wxFrame
{
	public:

		PlayTime(wxWindow* parent,wxWindowID id=wxID_ANY);
		virtual ~PlayTime();

		//(*Declarations(PlayTime)
		wxPanel* Panel1;
		wxButton* Button4;
		wxButton* Button1;
		wxButton* Button2;
		wxButton* Button3;
		wxButton* Button8;
		wxButton* Button5;
		wxButton* Button7;
		wxButton* Button6;
		//*)

	protected:

		//(*Identifiers(PlayTime)
		static const long ID_BUTTON1;
		static const long ID_BUTTON3;
		static const long ID_BUTTON2;
		static const long ID_BUTTON4;
		static const long ID_BUTTON5;
		static const long ID_BUTTON6;
		static const long ID_BUTTON7;
		static const long ID_BUTTON8;
		static const long ID_PANEL1;
		//*)

	private:

		//(*Handlers(PlayTime)
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
                                                                                                    