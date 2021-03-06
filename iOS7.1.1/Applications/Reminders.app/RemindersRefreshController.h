/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:14 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Reminders.app/Reminders
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, NSMutableDictionary, NSDate, ACAccountStore, NSMutableSet;

@interface RemindersRefreshController : NSObject {

	NSMutableArray* _calendarsPendingRefresh;
	BOOL _isPendingRefreshForCalendarList;
	NSMutableDictionary* _lastCalendarRefreshDates;
	NSDate* _lastCalendarListRefreshDate;
	ACAccountStore* _accountStore;
	NSMutableSet* _allRemindersSyncingAccountIDs;
	BOOL _paused;

}

@property (nonatomic,retain) NSDate * lastCalendarListRefreshDate;              //@synthesize lastCalendarListRefreshDate=_lastCalendarListRefreshDate - In the implementation block
+(id)sharedRefreshController;
-(void)scheduleRefreshForCalendarList;
-(void)pauseScheduledRefreshes;
-(void)resumeScheduledRefreshes;
-(void)scheduleRefreshForAllCalendars;
-(void)scheduleRefreshForCalendarWithIdentifier:(id)arg1 ;
-(id)_allRemindersSyncingAccountIDs;
-(void)setLastCalendarListRefreshDate:(id)arg1 ;
-(BOOL)_needsRefreshForCalendarWithIdentifier:(id)arg1 ;
-(void)_refreshCalendarWithIdentifier:(id)arg1 ;
-(BOOL)_needsRefreshForCalendarList;
-(void)_refreshCalendarList;
-(id)lastCalendarListRefreshDate;
-(void)_accountStoreDidChange:(id)arg1 ;
-(void)dealloc;
-(void).cxx_destruct;
-(id)_accountStore;
@end

