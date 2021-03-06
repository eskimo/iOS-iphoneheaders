/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:32:28 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/libexec/backboardd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol BKProcessAssertionDelegate, OS_xpc_object;
@class NSObject, NSString, NSLock;

@interface BKProcessAssertion : NSObject {

	<BKProcessAssertionDelegate>* _delegate;
	NSObject<OS_xpc_object>* _client;
	unsigned _reason;
	NSString* _identifier;
	NSLock* _lock;
	int _ownerPID;
	unsigned _savedFlags;
	unsigned _preventSuspend : 1;
	unsigned _preventThrottleDownCPU : 1;
	unsigned _preventThrottleDownUI : 1;
	unsigned _preventIdleSleep : 1;
	unsigned _preventingIdleSleep : 1;
	unsigned _allowIdleSleepOverrideEnabled : 1;
	unsigned _wantsForegroundResourcePriority : 1;
	unsigned _preventSuspendOnSleep : 1;

}

@property (assign,nonatomic) <BKProcessAssertionDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned reason;                                              //@synthesize reason=_reason - In the implementation block
@property (nonatomic,retain) NSString * identifier;                                //@synthesize identifier=_identifier - In the implementation block
@property (readonly) double permittedBackgroundDuration; 
@property (getter=isTimeLimited,readonly) BOOL timeLimited; 
@property (readonly) BOOL hasFixedStartTime; 
@property (readonly) int ownerPID;                                                 //@synthesize ownerPID=_ownerPID - In the implementation block
@property (assign) NSObject<OS_xpc_object> * client;                               //@synthesize client=_client - In the implementation block
@property (assign) BOOL preventSuspend; 
@property (assign) BOOL preventThrottleDownCPU; 
@property (assign) BOOL preventThrottleDownUI; 
@property (assign) BOOL preventIdleSleep; 
@property (assign) BOOL allowIdleSleepOverrideEnabled; 
@property (assign) BOOL wantsForegroundResourcePriority; 
@property (assign) BOOL preventSuspendOnSleep; 
+(BOOL)isValidProcessAssertionReason:(unsigned)arg1 ;
+(double)GetTaskCompletionMustTerminateDuration;
+(BOOL)isRateLimitedReason:(unsigned)arg1 ;
+(BOOL)isEligibleForLoweredJetsamPriority:(unsigned)arg1 ;
-(id)initWithClient:(id)arg1 ownerPID:(int)arg2 reason:(unsigned)arg3 name:(id)arg4 flags:(unsigned)arg5 ;
-(void)setPreventIdleSleep:(BOOL)arg1 ;
-(void)setAllowIdleSleepOverrideEnabled:(BOOL)arg1 ;
-(double)permittedBackgroundDuration;
-(BOOL)_lock_shouldActuallyPreventIdleSleep;
-(void)setPreventSuspend:(BOOL)arg1 ;
-(void)setPreventThrottleDownUI:(BOOL)arg1 ;
-(void)setPreventThrottleDownCPU:(BOOL)arg1 ;
-(void)setWantsForegroundResourcePriority:(BOOL)arg1 ;
-(void)setPreventSuspendOnSleep:(BOOL)arg1 ;
-(unsigned)_savedFlags;
-(BOOL)_hasSavedFlags;
-(void)_setSavedFlags:(unsigned)arg1 ;
-(BOOL)hasFixedStartTime;
-(id)initWithReason:(unsigned)arg1 identifier:(id)arg2 ;
-(BOOL)isTimeLimited;
-(BOOL)preventSuspend;
-(BOOL)preventThrottleDownCPU;
-(BOOL)preventThrottleDownUI;
-(BOOL)allowIdleSleepOverrideEnabled;
-(BOOL)preventIdleSleep;
-(BOOL)shouldReallyPreventIdleSleep;
-(BOOL)wantsForegroundResourcePriority;
-(BOOL)wantsForegroundResourcePriority_withoutLocking;
-(BOOL)preventSuspendOnSleep;
-(void)saveFlagsAndApplyNewFlags:(unsigned)arg1 ;
-(void)restoreSavedFlags;
-(unsigned)assertionState;
-(int)ownerPID;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)description;
-(id)delegate;
-(void)invalidate;
-(BOOL)isValid;
-(id)identifier;
-(void)setIdentifier:(id)arg1 ;
-(unsigned)reason;
-(unsigned)flags;
-(void)setFlags:(unsigned)arg1 ;
-(void)setClient:(id)arg1 ;
-(id)client;
@end

