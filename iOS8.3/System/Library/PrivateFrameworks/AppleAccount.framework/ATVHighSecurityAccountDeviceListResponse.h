/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 12:39:56 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppleAccount/AAResponse.h>

@class NSArray, NSDictionary, NSString;

@interface ATVHighSecurityAccountDeviceListResponse : AAResponse

@property (nonatomic,readonly) NSArray * devices; 
@property (nonatomic,readonly) NSDictionary * userDisplayStrings; 
@property (nonatomic,readonly) NSString * errorTitle; 
@property (nonatomic,readonly) NSString * errorMessage; 
@property (nonatomic,readonly) int errorCode; 
-(NSDictionary *)userDisplayStrings;
-(NSString *)errorTitle;
-(NSString *)errorMessage;
-(NSArray *)devices;
-(int)errorCode;
@end

