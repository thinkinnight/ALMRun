#ifndef _MERRY_APP_H_
#define _MERRY_APP_H_

#include "MerryFrame.h"
#include "ALMRunConfig.h"
class MerryApp : public wxApp
{
public:
	virtual int OnExit();
    virtual bool OnInit();
	void NewFrame();
	MerryFrame& GetFrame();
	void EvtActive(wxActivateEvent& e);
private:
	MerryFrame* m_frame;
};

DECLARE_APP(MerryApp)

#endif