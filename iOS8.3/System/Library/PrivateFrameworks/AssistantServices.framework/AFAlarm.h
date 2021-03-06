/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 12:45:03 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <AssistantServices/AFSiriModelObject.h>
#import <AssistantServices/NSCopying.h>

@class NSString;

@interface AFAlarm : AFSiriModelObject <NSCopying> {

	char _enabled;
	int _daysOfWeek;
	int _hourOfDay;
	int _minuteOfHour;
	NSString* _label;

}

@property (assign,getter=isEnabled,nonatomic) char enabled;              //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) int daysOfWeek;                             //@synthesize daysOfWeek=_daysOfWeek - In the implementation block
@property (assign,nonatomic) int hourOfDay;                              //@synthesize hourOfDay=_hourOfDay - In the implementation block
@property (assign,nonatomic) int minuteOfHour;                           //@synthesize minuteOfHour=_minuteOfHour - In the implementation block
@property (nonatomic,copy) NSString * label;                             //@synthesize label=_label - In the implementation block
+(char)supportsSecureCoding;
-(int)hourOfDay;
-(int)minuteOfHour;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setEnabled:(char)arg1 ;
-(char)isEnabled;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(int)daysOfWeek;
-(void)setDaysOfWeek:(int)arg1 ;
-(void)setHourOfDay:(int)arg1 ;
-(void)setMinuteOfHour:(int)arg1 ;
@end

