/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:23 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthKit/HKQuery.h>
#import <HealthKit/HKStatisticsQueryClient.h>

@class NSString;

@interface HKStatisticsQuery : HKQuery <HKStatisticsQueryClient> {

	/*^block*/id _completionHandler;
	unsigned long long _options;

}

@property (nonatomic,readonly) id completionHandler;                  //@synthesize completionHandler=_completionHandler - In the implementation block
@property (assign,nonatomic) unsigned long long options;              //@synthesize options=_options - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_configureClientInterface:(id)arg1 ;
+(id)_clientInterfaceProtocol;
-(void)_queue_validate;
-(void)_queue_cleanupAfterDeactivation;
-(void)_queue_requestServerProxyWithUUID:(id)arg1 connection:(id)arg2 handler:(/*^block*/id)arg3 ;
-(/*^block*/id)_queue_errorHandler;
-(void)deliverStatistics:(id)arg1 forQuery:(id)arg2 ;
-(id)initWithQuantityType:(id)arg1 quantitySamplePredicate:(id)arg2 options:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)completionHandler;
-(void)setOptions:(unsigned long long)arg1 ;
-(unsigned long long)options;
@end

