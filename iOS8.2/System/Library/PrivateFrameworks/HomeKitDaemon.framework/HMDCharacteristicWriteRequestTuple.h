/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:14 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class HMDCharacteristic, NSData;

@interface HMDCharacteristicWriteRequestTuple : NSObject {

	HMDCharacteristic* _characteristic;
	id _value;
	NSData* _authorizationData;

}

@property (nonatomic,readonly) HMDCharacteristic * characteristic;              //@synthesize characteristic=_characteristic - In the implementation block
@property (nonatomic,readonly) id value;                                        //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) NSData * authorizationData;                      //@synthesize authorizationData=_authorizationData - In the implementation block
+(id)tupleWithCharacteristic:(id)arg1 value:(id)arg2 authorizationData:(id)arg3 ;
-(id)value;
-(HMDCharacteristic *)characteristic;
-(NSData *)authorizationData;
@end
