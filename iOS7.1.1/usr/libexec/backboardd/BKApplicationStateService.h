/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:32:28 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/libexec/backboardd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class BKWorkspaceServerManager, BKSystemAppSentinel;

@interface BKApplicationStateService : NSObject {

	BKWorkspaceServerManager* _serverManager;
	BKSystemAppSentinel* _systemAppSentinel;

}
-(id)_infoForApplication:(id)arg1 ;
-(id)applicationInfoForApplication:(id)arg1 ;
-(id)_infoForSystemApplication:(id)arg1 ;
-(unsigned)_stateForApplication:(id)arg1 ;
-(unsigned)_applicationStateFromLife:(int)arg1 activation:(int)arg2 suspended:(BOOL)arg3 ;
-(id)_infoForApplication:(id)arg1 withState:(unsigned)arg2 ;
-(id)applicationInfoForApplicationWithBundleID:(id)arg1 ;
-(id)applicationInfoForPID:(int)arg1 ;
-(unsigned)applicationStateForApplicationWithBundleID:(id)arg1 ;
-(void)_setWorkspaceServerManager:(id)arg1 ;
-(void)_setSystemAppSentinel:(id)arg1 ;
-(unsigned)applicationStateForApplication:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(unsigned)mostElevatedApplicationStateForPID:(int)arg1 ;
-(BOOL)isApplicationBeingDebugged:(id)arg1 ;
-(id)bundleInfoValueForKey:(id)arg1 PID:(int)arg2 ;
@end

