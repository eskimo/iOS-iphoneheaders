/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:04:54 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKit/PKPaymentDataItem.h>

@class CNContact, NSString;

@interface PKPaymentShippingAddressDataItem : PKPaymentDataItem

@property (nonatomic,readonly) CNContact * shippingAddress; 
@property (nonatomic,readonly) NSString * shippingType; 
@property (nonatomic,readonly) char isShippingEditable; 
+(int)dataType;
-(CNContact *)shippingAddress;
-(char)isValidWithError:(id*)arg1 ;
-(char)isShippingEditable;
-(NSString *)shippingType;
@end

