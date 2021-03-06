/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:18 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DASubCal.framework/DADaemonSubCal.bundle/DADaemonSubCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DADaemonSubCal/DADaemonSubCal-Structs.h>
#import <DADaemonSubCal/SubCalDaemonAccount.h>
#import <DADaemonSubCal/DADataclassLockWatcher.h>
#import <CoreDAV/CoreDAVAccountInfoProvider.h>

@class NSDate, NSTimer, CalDAVCalendarSearchTask, NSString;

@interface HolidayCalDaemonAccount : SubCalDaemonAccount <DADataclassLockWatcher, CoreDAVAccountInfoProvider> {

	NSDate* _lastRefreshDate;
	NSTimer* _refreshTimer;
	CalDAVCalendarSearchTask* _searchTask;

}

@property (nonatomic,retain) NSTimer * refreshTimer;                             //@synthesize refreshTimer=_refreshTimer - In the implementation block
@property (nonatomic,retain) CalDAVCalendarSearchTask * searchTask;              //@synthesize searchTask=_searchTask - In the implementation block
@property (nonatomic,readonly) NSString * region; 
@property (nonatomic,readonly) NSString * language; 
-(void)_unregisterForNotifications;
-(bool)isHolidaySubscribedCalendar;
-(void)dealloc;
-(id)language;
-(void)_localeDidChange:(id)arg1 ;
-(void)promptUserForNewCoreDAVPasswordWithCompletionBlock:(/*^block*/ id)arg1 ;
-(id)waiterID;
-(bool)monitorFoldersWithIDs:(id)arg1 ;
-(void)stopMonitoringFolders;
-(void)subCalRefreshTask:(id)arg1 finishedWithError:(id)arg2 ;
-(id)calendarExternalId;
-(void)_tearDownRefreshTimer;
-(void)setSearchTask:(id)arg1 ;
-(void*)_copyHolidaySubscribedCalendar;
-(void)_reallyRemoveHolidaySubscribedCalendar;
-(void)_removeHolidaySubscribedCalendar;
-(void)_handleCalendarSearchResults:(id)arg1 ;
-(id)_lastRefreshDate;
-(bool)_calendarHasCorrectLocale;
-(void)_fetchUpdatedSubscriptionURL;
-(void)_saveLastRefreshDate:(id)arg1 ;
-(void)_saveCurrentLanguageAndLocale;
-(void)_refreshTimerFired:(id)arg1 ;
-(void)_saveHolidayCalMetadata:(id)arg1 ;
-(id)refreshTimer;
-(void)setRefreshTimer:(id)arg1 ;
-(id)searchTask;
-(id)region;
-(void)_refresh:(bool)arg1 ;
@end

