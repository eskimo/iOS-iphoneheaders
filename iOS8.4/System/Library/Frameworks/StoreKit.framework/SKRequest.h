/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:18:48 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class SKPaymentQueueClient;

@interface SKRequest : NSObject {

	id _requestInternal;

}

@property (assign,nonatomic) id<SKRequestDelegate> delegate; 
@property (nonatomic,copy) SKPaymentQueueClient * paymentQueueClient; 
-(void)_endBackgroundTask;
-(SKPaymentQueueClient *)paymentQueueClient;
-(void)_startWithMessage:(id)arg1 replyBlock:(/*^block*/id)arg2 ;
-(void)_sendXPCMessage;
-(void)setPaymentQueueClient:(SKPaymentQueueClient *)arg1 ;
-(void)cancel;
-(void)dealloc;
-(void)setDelegate:(id<SKRequestDelegate>)arg1 ;
-(id)init;
-(id<SKRequestDelegate>)delegate;
-(void)start;
-(void)_shutdownRequest;
-(void)_beginBackgroundTask;
@end
