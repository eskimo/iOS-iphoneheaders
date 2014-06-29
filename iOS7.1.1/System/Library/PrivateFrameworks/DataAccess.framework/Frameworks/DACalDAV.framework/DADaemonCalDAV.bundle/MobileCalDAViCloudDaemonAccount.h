/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:14 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DADaemonCalDAV.bundle/DADaemonCalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DADaemonCalDAV/MobileCalDAVDaemonAccount.h>

@class NSString;

@interface MobileCalDAViCloudDaemonAccount : MobileCalDAVDaemonAccount {

	NSString* _host;
	int _useSSL;
	long long _port;

}
-(void)setPort:(long long)arg1 ;
-(void)setHost:(id)arg1 ;
-(void)dealloc;
-(id)host;
-(void)noteHomeSetOnDifferentHost:(id)arg1 ;
-(id)additionalHeaderValues;
-(bool)shouldHandleHTTPCookiesForURL:(id)arg1 ;
-(bool)shouldSendClientInfoHeaderForURL:(id)arg1 ;
-(bool)supportsReminders;
-(bool)shouldUseCalendarHomeSyncReport;
-(bool)useSSL;
-(id)initWithBackingAccountInfo:(id)arg1 ;
-(void)setUseSSL:(bool)arg1 ;
-(id)principalURL;
-(long long)port;
@end
