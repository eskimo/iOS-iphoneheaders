/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:07 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAReminderPayload.h>

@class NSString;

@interface SAReminderPhonePayload : AceObject <SAReminderPayload>

@property (nonatomic,copy) NSString * recipient; 
+(id)phonePayload;
+(id)phonePayloadWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)recipient;
-(void)setRecipient:(id)arg1 ;
-(id)encodedClassName;
@end

