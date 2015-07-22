/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:16:31 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol SBLockScreenNotificationViewDelegate <SBLockScreenActionHandler>
@required
-(id)lockScreenScrollView;
-(void)noteUnlockActionChanged:(id)arg1;
-(void)listViewDidBeginScrolling:(id)arg1;
-(void)listViewDidEndScrolling:(id)arg1;
-(void)listView:(id)arg1 cellDidBeginScrolling:(id)arg2;
-(void)listView:(id)arg1 cellDidEndScrolling:(id)arg2;
-(void)noteListViewReadyForModelUpdate;

@end
