/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:21:10 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface MCAirPlayDestination : NSObject {

	NSString* _deviceID;
	NSString* _deviceName;
	NSString* _password;

}

@property (nonatomic,retain) NSString * deviceID;                //@synthesize deviceID=_deviceID - In the implementation block
@property (nonatomic,retain) NSString * deviceName;              //@synthesize deviceName=_deviceName - In the implementation block
@property (nonatomic,retain) NSString * password;                //@synthesize password=_password - In the implementation block
-(NSString *)deviceID;
-(NSString *)password;
-(NSString *)deviceName;
-(void)setDeviceID:(NSString *)arg1 ;
-(void)setPassword:(NSString *)arg1 ;
-(void)setDeviceName:(NSString *)arg1 ;
@end

