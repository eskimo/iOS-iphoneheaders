/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:25:08 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/CloudServices.framework/XPCServices/com.apple.lakitu.xpc/com.apple.lakitu
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <com.apple.lakitu/LakituResponse.h>

@class NSString;

@interface EscrowGenericResponse : LakituResponse

@property (nonatomic,readonly) int version; 
@property (nonatomic,readonly) int status; 
@property (nonatomic,readonly) NSString * message; 
@property (nonatomic,readonly) int errorCode; 
-(NSString *)message;
-(int)version;
-(int)status;
-(id)initWithHTTPResponse:(id)arg1 data:(id)arg2 ;
-(int)errorCode;
@end
