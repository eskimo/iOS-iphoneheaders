/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:31 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface AVPingTest : NSObject {

	NSString* ipAsString;
	BOOL usingWifi;
	NSString* interfaceNameToTest;
	float min;
	float max;
	float avg;
	float stddev;
	float packetLossRate;
	long long lastReturnedError;

}

@property (nonatomic,readonly) BOOL usingWifi; 
@property (nonatomic,readonly) float min; 
@property (nonatomic,readonly) float max; 
@property (nonatomic,readonly) float avg; 
@property (nonatomic,readonly) float stddev; 
@property (nonatomic,readonly) float packetLossRate; 
-(long long)parseResults:(char*)arg1 secondLastLine:(char*)arg2 ;
-(BOOL)parsePingLineForBadInterface:(char*)arg1 ;
-(BOOL)parsePingLineForBadCommand:(char*)arg1 ;
-(BOOL)parsePingLineForPLR:(char*)arg1 ;
-(BOOL)parsePingLineForLatencyStats:(char*)arg1 ;
-(void)dealloc;
-(id)description;
-(long long)start;
-(float)packetLossRate;
-(void)calculateInterfaceName;
-(id)initWithIPAsString:(id)arg1 usingWifi:(BOOL)arg2 ;
-(BOOL)usingWifi;
-(float)avg;
-(float)stddev;
-(float)max;
-(float)min;
@end
