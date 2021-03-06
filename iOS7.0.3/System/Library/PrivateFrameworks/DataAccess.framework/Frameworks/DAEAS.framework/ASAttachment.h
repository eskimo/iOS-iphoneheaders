/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:54 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <DAEAS/ASItem.h>
#import <DAEAS/DAMailMessageAttachment.h>
#import <CoreFoundation/NSCoding.h>

@class NSString, NSNumber;

@interface ASAttachment : ASItem <DAMailMessageAttachment, NSCoding> {

	NSString* _attName;
	NSNumber* _attSize;
	NSNumber* _attMethod;
	NSString* _attDisplayName;
	NSString* _attContentId;
	NSString* _attContentLocation;
	NSNumber* _attIsInline;
	NSNumber* _hasBase64Transfer;

}

@property (copy) NSString * name;                           //@synthesize attName=_attName - In the implementation block
@property (copy) NSNumber * size;                           //@synthesize attSize=_attSize - In the implementation block
@property (copy) NSNumber * method;                         //@synthesize attMethod=_attMethod - In the implementation block
@property (copy) NSString * displayName;                    //@synthesize attDisplayName=_attDisplayName - In the implementation block
@property (copy) NSString * contentId;                      //@synthesize attContentId=_attContentId - In the implementation block
@property (copy) NSString * contentLocation;                //@synthesize attContentLocation=_attContentLocation - In the implementation block
@property (copy) NSNumber * isInline;                       //@synthesize attIsInline=_attIsInline - In the implementation block
@property (copy) NSNumber * hasBase64Transfer;              //@synthesize hasBase64Transfer=_hasBase64Transfer - In the implementation block
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(id)asParseRules;
-(id)contentId;
-(void)setContentId:(id)arg1 ;
-(void)setContentLocation:(id)arg1 ;
-(void)dealloc;
-(id)size;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)setSize:(id)arg1 ;
-(void)setName:(id)arg1 ;
-(id)name;
-(id)displayName;
-(id)method;
-(void)setPercentEscapedName:(id)arg1 ;
-(void)setIsInline:(id)arg1 ;
-(id)isInline;
-(id)hasBase64Transfer;
-(void)setHasBase64Transfer:(id)arg1 ;
-(id)contentLocation;
-(BOOL)isMostDefinitelyBase64ed;
-(void)setDisplayName:(id)arg1 ;
-(void)setMethod:(id)arg1 ;
@end

