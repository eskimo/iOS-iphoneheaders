/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:47 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Radio/Radio-Structs.h>
#import <CoreFoundation/NSCopying.h>
#import <CoreFoundation/NSMutableCopying.h>

@class NSString, NSMapTable;

@interface RadioPlayEventCollection : NSObject <NSCopying, NSMutableCopying> {

	NSString* _deviceName;
	NSMapTable* _stationInformationToPlayEvents;

}

@property (nonatomic,readonly) NSString * deviceName;              //@synthesize deviceName=_deviceName - In the implementation block
-(id)initWithDeviceName:(id)arg1 ;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)mutableCopyWithZone:(NSZone)arg1 ;
-(void).cxx_destruct;
-(id)deviceName;
-(id)playInfoDictionary;
@end

