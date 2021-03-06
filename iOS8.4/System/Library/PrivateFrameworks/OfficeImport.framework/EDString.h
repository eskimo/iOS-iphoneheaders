/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:24:17 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/NSCopying.h>
#import <OfficeImport/EDImmutableObject.h>

@class NSString, EDRunsCollection, EDPhoneticInfo;

@interface EDString : NSObject <NSCopying, EDImmutableObject> {

	NSString* mString;
	EDRunsCollection* mRuns;
	EDPhoneticInfo* mPhoneticInfo;
	BOOL mDoNotModify;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)string;
+(id)edStringWithString:(id)arg1 ;
+(id)edStringWithString:(id)arg1 runs:(id)arg2 ;
-(BOOL)isEmpty;
-(BOOL)areThereRuns;
-(id)firstRunFont;
-(BOOL)isEqualToString:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)appendString:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)string;
-(id)initWithString:(id)arg1 ;
-(void)setString:(id)arg1 ;
-(id)runs;
-(void)setRuns:(id)arg1 ;
-(id)phoneticInfo;
-(id)initWithString:(id)arg1 runs:(id)arg2 ;
-(BOOL)isEqualToEDString:(id)arg1 ;
-(void)setPhoneticInfo:(id)arg1 ;
-(void)prependString:(id)arg1 ;
-(void)setDoNotModify:(BOOL)arg1 ;
@end

