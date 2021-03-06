/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:25:49 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, NSNumber;

@interface SADistance : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * unit; 
@property (nonatomic,copy) NSNumber * value; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)distance;
+(id)distanceWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)sirimovies_distanceAsString;
-(id)sirimovies_metersValue;
-(id)sirimovies_abbreviatedUnit;
-(int)sirimovies_compare:(id)arg1 ;
-(id)afui_metersValue;
-(id)afui_abbreviatedUnit;
-(int)afui_compare:(id)arg1 ;
-(id)groupIdentifier;
-(NSNumber *)value;
-(void)setValue:(NSNumber *)arg1 ;
-(NSString *)unit;
-(void)setUnit:(NSString *)arg1 ;
-(id)encodedClassName;
@end

