/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:33 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/IDSCore.framework/IDSCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IDSCore/IDSCore-Structs.h>
#import <IDSFoundation/IDSBaseMessage.h>
#import <CoreFoundation/NSCopying.h>

@class NSData;

@interface IDSValidationCertificateMessage : IDSBaseMessage <NSCopying> {

	NSData* _responseCertificateData;
	NSData* _pushToken;

}

@property (nonatomic,copy) NSData * responseCertificateData;              //@synthesize responseCertificateData=_responseCertificateData - In the implementation block
@property (nonatomic,copy) NSData * pushToken;                            //@synthesize pushToken=_pushToken - In the implementation block
-(void)setPushToken:(id)arg1 ;
-(id)bagKey;
-(id)pushToken;
-(long long)command;
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)responseCertificateData;
-(id)additionalMessageHeaders;
-(void)handleResponseDictionary:(id)arg1 ;
-(bool)wantsBagKey;
-(bool)wantsHTTPHeaders;
-(bool)wantsCompressedBody;
-(bool)wantsBinaryPush;
-(long long)responseCommand;
-(void)setResponseCertificateData:(id)arg1 ;
-(bool)wantsHTTPGet;
-(id)messageBody;
-(id)requiredKeys;
@end

