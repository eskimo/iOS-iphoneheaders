/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:16:30 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSMutableSet;

@interface SBOrientationLockManager : NSObject {

	NSMutableSet* _lockOverrideReasons;
	long long _userLockedOrientation;

}
+(id)sharedInstance;
-(void)restoreStateFromPrefs;
-(void)enableLockOverrideForReason:(id)arg1 forceOrientation:(long long)arg2 ;
-(void)setLockOverrideEnabled:(BOOL)arg1 forReason:(id)arg2 ;
-(void)enableLockOverrideForReason:(id)arg1 suggestOrientation:(long long)arg2 ;
-(void)lock:(long long)arg1 ;
-(BOOL)_effectivelyLocked;
-(void)_updateLockStateWithOrientation:(long long)arg1 forceUpdateHID:(BOOL)arg2 changes:(/*^block*/id)arg3 ;
-(void)_updateLockStateWithChanges:(/*^block*/id)arg1 ;
-(BOOL)lockOverrideEnabled;
-(long long)userLockOrientation;
-(void)updateLockOverrideForCurrentDeviceOrientation;
-(void)dealloc;
-(id)init;
-(void)lock;
-(void)unlock;
-(BOOL)isLocked;
@end

