/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:37:04 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSObject, SSMetricsEventController, ISOperationQueue;

@interface MetricsController : NSObject {

	int _backoffRetryCount;
	NSObject*<OS_dispatch_source> _backoffRetryTimer;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	SSMetricsEventController* _eventController;
	ISOperationQueue* _operationQueue;

}
+(id)sharedInstance;
-(void)observeXPCServer:(id)arg1 ;
-(void)getInternalSettingsWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)insertEventWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)reportEventsWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)setInternalSettingsWithMessage:(id)arg1 connection:(id)arg2 ;
-(char)_hasEntitlements:(id)arg1 ;
-(void)_sendUnentitledResponseToMessage:(id)arg1 connection:(id)arg2 ;
-(void)_reportEvents;
-(void)_cancelBackoffRetryTimer;
-(void)_scheduleBackoffRetry;
-(void)_cancelBackoffRetry;
-(void)dealloc;
-(id)init;
-(id)_operationQueue;
@end

