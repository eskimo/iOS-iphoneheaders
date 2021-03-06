/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:25:10 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSArray, NSURL, NSDate, NSNumber, NSString;

@interface SACalendarEvent : SADomainObject

@property (nonatomic,copy) NSArray * alerts; 
@property (assign,nonatomic) char allDay; 
@property (nonatomic,copy) NSArray * attendees; 
@property (nonatomic,copy) NSURL * calendarId; 
@property (nonatomic,copy) NSURL * calendarPunchoutURI; 
@property (nonatomic,copy) NSDate * endDate; 
@property (nonatomic,copy) NSNumber * includeRecurrences; 
@property (nonatomic,copy) NSString * location; 
@property (nonatomic,copy) NSString * notes; 
@property (nonatomic,copy) NSNumber * readOnly; 
@property (nonatomic,copy) NSArray * recurrences; 
@property (nonatomic,copy) NSDate * startDate; 
@property (nonatomic,copy) NSString * timeZoneId; 
@property (nonatomic,copy) NSString * title; 
+(id)event;
+(id)eventWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSArray *)attendees;
-(NSString *)notes;
-(void)setNotes:(NSString *)arg1 ;
-(void)setAttendees:(NSArray *)arg1 ;
-(id)groupIdentifier;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(NSString *)location;
-(NSNumber *)readOnly;
-(void)setAllDay:(char)arg1 ;
-(char)allDay;
-(void)setReadOnly:(NSNumber *)arg1 ;
-(void)setLocation:(NSString *)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(id)encodedClassName;
-(void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3 ;
-(NSArray *)alerts;
-(void)setAlerts:(NSArray *)arg1 ;
-(NSURL *)calendarId;
-(void)setCalendarId:(NSURL *)arg1 ;
-(NSURL *)calendarPunchoutURI;
-(void)setCalendarPunchoutURI:(NSURL *)arg1 ;
-(NSNumber *)includeRecurrences;
-(void)setIncludeRecurrences:(NSNumber *)arg1 ;
-(NSArray *)recurrences;
-(void)setRecurrences:(NSArray *)arg1 ;
-(NSString *)timeZoneId;
-(void)setTimeZoneId:(NSString *)arg1 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
@end

