/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:05:04 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <CloudKitDaemon/NSCopying.h>

@class NSString, NSData;

@interface CKDShareTokenInfo : NSObject <NSCopying> {

	NSString* _routingKey;
	NSData* _shortSharingTokenData;
	NSData* _publicTokenData;
	NSData* _privateTokenData;

}

@property (nonatomic,retain) NSString * routingKey;                             //@synthesize routingKey=_routingKey - In the implementation block
@property (nonatomic,retain) NSData * shortSharingTokenData;                    //@synthesize shortSharingTokenData=_shortSharingTokenData - In the implementation block
@property (nonatomic,readonly) NSString * shortSharingToken; 
@property (nonatomic,readonly) NSData * shortSharingTokenHashData; 
@property (nonatomic,retain) NSData * publicTokenData;                          //@synthesize publicTokenData=_publicTokenData - In the implementation block
@property (nonatomic,retain) NSData * privateTokenData;                         //@synthesize privateTokenData=_privateTokenData - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)shortSharingTokenData;
-(void)setPrivateTokenData:(NSData *)arg1 ;
-(void)setPublicTokenData:(NSData *)arg1 ;
-(NSString *)routingKey;
-(void)setRoutingKey:(NSString *)arg1 ;
-(NSData *)shortSharingTokenHashData;
-(NSData *)privateTokenData;
-(NSData *)publicTokenData;
-(void)setShortSharingTokenData:(NSData *)arg1 ;
-(NSString *)shortSharingToken;
@end
