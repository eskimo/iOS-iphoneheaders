/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 5:51:11 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <itunesstored/itunesstored-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class NSArray, NSData;

@interface DaemonBiometricMatch : NSObject <NSCopying> {

	NSArray* _biometricIdentities;
	int _matchType;
	NSData* _tokenData;

}

@property (assign,nonatomic) int matchType;                            //@synthesize matchType=_matchType - In the implementation block
@property (nonatomic,copy) NSArray * biometricIdentities;              //@synthesize biometricIdentities=_biometricIdentities - In the implementation block
@property (nonatomic,copy) NSData * tokenData;                         //@synthesize tokenData=_tokenData - In the implementation block
-(id)biometricIdentities;
-(void)setBiometricIdentities:(id)arg1 ;
-(void)setMatchType:(int)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone)arg1 ;
-(void)setTokenData:(id)arg1 ;
-(id)tokenData;
-(int)matchType;
@end
