/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:17:59 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <GameController/GameController-Structs.h>
@class NSTimer;

@interface GCControllerMBDelegate : NSObject {

	BTSessionImplRef _session;
	BTPairingAgentImplRef _pairingAgent;
	NSTimer* _timer;
	/*^block*/id _completionHandler;

}

@property (nonatomic,copy) id completionHandler;              //@synthesize completionHandler=_completionHandler - In the implementation block
-(void)scanTimeout:(id)arg1 ;
-(void)dealloc;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)stopScan;
-(void)fireCompletionHandler;
-(void)startScan;
@end
