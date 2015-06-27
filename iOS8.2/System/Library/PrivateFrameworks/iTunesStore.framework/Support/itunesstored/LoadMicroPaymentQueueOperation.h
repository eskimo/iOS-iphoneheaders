/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:26:56 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class NSDate, NSString, MicroPaymentQueueRequest, MicroPaymentQueueResponse;

@interface LoadMicroPaymentQueueOperation : ISOperation {

	int _expectedCount;
	NSDate* _lastQueueCheckDate;
	NSString* _queueCountURLBagKey;
	NSString* _queuePaymentsURLBagKey;
	MicroPaymentQueueRequest* _request;
	MicroPaymentQueueResponse* _response;

}

@property (assign) int expectedCount;                                 //@synthesize expectedCount=_expectedCount - In the implementation block
@property (retain) NSDate * lastQueueCheckDate;                       //@synthesize lastQueueCheckDate=_lastQueueCheckDate - In the implementation block
@property (retain) NSString * queueCountURLBagKey;                    //@synthesize queueCountURLBagKey=_queueCountURLBagKey - In the implementation block
@property (retain) NSString * queuePaymentsURLBagKey;                 //@synthesize queuePaymentsURLBagKey=_queuePaymentsURLBagKey - In the implementation block
@property (copy) MicroPaymentQueueRequest * request;                  //@synthesize request=_request - In the implementation block
@property (retain) MicroPaymentQueueResponse * response;              //@synthesize response=_response - In the implementation block
-(NSString *)queueCountURLBagKey;
-(NSDate *)lastQueueCheckDate;
-(void)setLastQueueCheckDate:(NSDate *)arg1 ;
-(void)setQueueCountURLBagKey:(NSString *)arg1 ;
-(void)setQueuePaymentsURLBagKey:(NSString *)arg1 ;
-(int)expectedCount;
-(void)setExpectedCount:(int)arg1 ;
-(NSString *)queuePaymentsURLBagKey;
-(char)_getQueueCount:(int*)arg1 error:(id*)arg2 ;
-(char)_loadPaymentsWithExpectedCount:(int)arg1 error:(id*)arg2 ;
-(void)dealloc;
-(MicroPaymentQueueRequest *)request;
-(void)run;
-(MicroPaymentQueueResponse *)response;
-(void)setResponse:(MicroPaymentQueueResponse *)arg1 ;
-(void)setRequest:(MicroPaymentQueueRequest *)arg1 ;
@end
