/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:13 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ICDeviceDelegate <NSObject>
@optional
-(void)device:(id)arg1 didOpenSessionWithError:(id)arg2;
-(void)deviceDidBecomeReady:(id)arg1;
-(void)device:(id)arg1 didCloseSessionWithError:(id)arg2;
-(void)device:(id)arg1 didReceiveStatusInformation:(id)arg2;
-(void)device:(id)arg1 didEncounterError:(id)arg2;

@required
-(void)didRemoveDevice:(id)arg1;

@end
