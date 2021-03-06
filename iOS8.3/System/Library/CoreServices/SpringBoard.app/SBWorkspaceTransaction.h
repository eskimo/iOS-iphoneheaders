/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:20:34 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FrontBoard/FBTransaction.h>

@class SBAlertManager;

@interface SBWorkspaceTransaction : FBTransaction {

	SBAlertManager* _alertManager;
	char _clearsCompletionAsynchronously;

}

@property (nonatomic,readonly) SBAlertManager * alertManager;                  //@synthesize alertManager=_alertManager - In the implementation block
@property (assign,nonatomic) char clearsCompletionAsynchronously;              //@synthesize clearsCompletionAsynchronously=_clearsCompletionAsynchronously - In the implementation block
-(SBAlertManager *)alertManager;
-(void)setClearsCompletionAsynchronously:(char)arg1 ;
-(char)clearsCompletionAsynchronously;
-(void)_performDeviceCoherencyCheck;
-(void)keepAliveForAsyncBlock:(/*^block*/id)arg1 ;
-(void)dealloc;
-(void)_didComplete;
-(char)_canBeInterrupted;
-(id)initWithAlertManager:(id)arg1 ;
@end

