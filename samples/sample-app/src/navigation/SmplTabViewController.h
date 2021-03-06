/*
 * Copyright (c) 2014-2016 Samsung Electronics Co., Ltd. All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

#ifndef _SMPL_TAB_VIEW_CONTROLLER_H_
#define _SMPL_TAB_VIEW_CONTROLLER_H_

#include "WContentViewController.h"

class SmplTabViewController: public app_assist::WContentViewController {
public:
	SmplTabViewController();
protected:
	~SmplTabViewController();

//	static constexpr const char* SC_EVENT_END_OF_VIEW = "SmplTabViewController:END_OF_VIEW";

private:
	virtual Evas_Object* onCreateView(Evas_Object* parent, void* viewParam) override;
	virtual void onDestroy() override;
	virtual Elm_Object_Item* onPushToNaviframe(Evas_Object* naviFrame) override;
	virtual void onPushed(Elm_Object_Item* naviItem) override;

private:
	static void _tabAlarmChangedCb(void* data, Evas_Object* btn, void* event_info);
	static void _tabClockChangedCb(void* data, Evas_Object* btn, void* event_info);
	static void _tabStopwatchChangedCb(void* data, Evas_Object* btn, void* event_info);

	void _unsetPrevContent();
private:
	Evas_Object* _tabbar;
	WContentViewController* _alarmView;
	WContentViewController* _clockView;
	WContentViewController* _stopWatchView;

};

#endif // _SMPL_TAB_VIEW_CONTROLLER_H_
