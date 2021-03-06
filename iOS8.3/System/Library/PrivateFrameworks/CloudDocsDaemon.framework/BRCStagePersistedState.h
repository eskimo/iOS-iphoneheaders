/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:03:31 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudDocsDaemon/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class BRCAccountSession, NSObject;

@interface BRCStagePersistedState : NSObject <NSSecureCoding> {

	long _latestGCStartTime;
	BRCAccountSession* _session;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
+(char)supportsSecureCoding;
+(id)loadFromClientStateInSession:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(long long)timeSinceLatestGCStartTime;
-(void)setLatestGCStartTime:(long)arg1 ;
@end

