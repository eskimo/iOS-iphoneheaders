/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:57:01 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSNumber, NSString;

@interface PKPaymentForbiddenResponse : PKPaymentWebServiceResponse {

	NSNumber* _errorCode;
	NSString* _localizedTitle;
	NSString* _localizedDescription;

}

@property (nonatomic,retain) NSNumber * errorCode;                         //@synthesize errorCode=_errorCode - In the implementation block
@property (nonatomic,retain) NSString * localizedTitle;                    //@synthesize localizedTitle=_localizedTitle - In the implementation block
@property (nonatomic,retain) NSString * localizedDescription;              //@synthesize localizedDescription=_localizedDescription - In the implementation block
-(void)setLocalizedTitle:(NSString *)arg1 ;
-(void)dealloc;
-(id)initWithData:(id)arg1 ;
-(NSString *)localizedDescription;
-(NSString *)localizedTitle;
-(void)setLocalizedDescription:(NSString *)arg1 ;
-(void)setErrorCode:(NSNumber *)arg1 ;
-(NSNumber *)errorCode;
@end

