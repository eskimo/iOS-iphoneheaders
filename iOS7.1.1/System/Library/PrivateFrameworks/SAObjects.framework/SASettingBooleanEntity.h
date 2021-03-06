/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:56 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SASettingEntity.h>

@class NSNumber;

@interface SASettingBooleanEntity : SASettingEntity

@property (nonatomic,copy) NSNumber * previousValue; 
@property (assign,nonatomic) bool value; 
+(id)booleanEntity;
+(id)booleanEntityWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)booleanEntityWithValue:(bool)arg1 ;
-(id)initWithValue:(bool)arg1 ;
-(id)groupIdentifier;
-(void)setValue:(bool)arg1 ;
-(bool)value;
-(id)encodedClassName;
-(void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3 ;
-(id)previousValue;
-(void)setPreviousValue:(id)arg1 ;
@end

