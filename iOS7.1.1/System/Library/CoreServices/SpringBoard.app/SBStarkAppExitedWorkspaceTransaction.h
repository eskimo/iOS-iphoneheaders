/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:58:01 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBStarkAppToAppWorkspaceTransaction.h>

@interface SBStarkAppExitedWorkspaceTransaction : SBStarkAppToAppWorkspaceTransaction
-(id)initWithWorkspace:(id)arg1 mainScreenAlertManager:(id)arg2 starkScreenController:(id)arg3 exitedApp:(id)arg4 ;
-(int)_setupMilestonesFrom:(id)arg1 to:(id)arg2 ;
-(BOOL)_shouldDisallowSuspension;
-(id)_setupAnimationFrom:(id)arg1 to:(id)arg2 ;
@end
