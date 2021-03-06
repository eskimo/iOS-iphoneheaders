/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:32:28 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/libexec/aosnotifyd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <aosnotifyd/AOSFMRequest.h>

@class AOSFindBaseServiceProvider, CLLocation, NSDictionary;

@interface AOSFMRequestCurrentLocation : AOSFMRequest {

	BOOL _finalLocation;
	AOSFindBaseServiceProvider* _provider;
	CLLocation* _location;
	NSDictionary* _locateCommand;
	int _publishReason;
	double _accuracyChange;

}

@property (nonatomic,retain) AOSFindBaseServiceProvider * provider;              //@synthesize provider=_provider - In the implementation block
@property (nonatomic,retain) CLLocation * location;                              //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) BOOL finalLocation;                                 //@synthesize finalLocation=_finalLocation - In the implementation block
@property (nonatomic,retain) NSDictionary * locateCommand;                       //@synthesize locateCommand=_locateCommand - In the implementation block
@property (assign,nonatomic) int publishReason;                                  //@synthesize publishReason=_publishReason - In the implementation block
@property (assign,nonatomic) double accuracyChange;                              //@synthesize accuracyChange=_accuracyChange - In the implementation block
+(id)serializedFormOfLocation:(id)arg1 ;
-(id)initWithProvider:(id)arg1 location:(id)arg2 finalLocation:(BOOL)arg3 locateCommand:(id)arg4 reason:(int)arg5 accuracyChange:(double)arg6 ;
-(BOOL)canReplace:(id)arg1 ;
-(void)deinitializeRequest;
-(id)requestUrl;
-(BOOL)canRequestBeRetriedNow;
-(int)maxNonNetworkRelatedRetries;
-(int)maxConsecutiveNetworkNotificationRetries;
-(int)maxTimerBasedNetworkRetries;
-(void)setLocateCommand:(id)arg1 ;
-(id)locateCommand;
-(void)setPublishReason:(int)arg1 ;
-(void)setAccuracyChange:(double)arg1 ;
-(int)publishReason;
-(double)accuracyChange;
-(void)setProvider:(id)arg1 ;
-(id)location;
-(void).cxx_destruct;
-(id)requestBody;
-(void)setFinalLocation:(BOOL)arg1 ;
-(BOOL)finalLocation;
-(void)setLocation:(id)arg1 ;
-(id)provider;
@end

