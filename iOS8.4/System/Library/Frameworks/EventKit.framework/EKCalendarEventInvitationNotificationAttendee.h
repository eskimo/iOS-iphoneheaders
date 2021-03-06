/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:17:42 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKit/EKIdentityProtocol.h>

@class NSString, NSURL;

@interface EKCalendarEventInvitationNotificationAttendee : NSObject <EKIdentityProtocol> {

	BOOL _statusChanged;
	BOOL _commentChanged;
	int _participantStatus;
	NSString* _name;
	NSString* _firstName;
	NSString* _lastName;
	NSString* _emailAddress;
	NSURL* _url;
	NSString* _comment;

}

@property (nonatomic,readonly) NSString * name;                      //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * firstName;                 //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,readonly) NSString * lastName;                  //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,readonly) NSString * emailAddress;              //@synthesize emailAddress=_emailAddress - In the implementation block
@property (nonatomic,readonly) NSURL * url;                          //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) BOOL statusChanged;                   //@synthesize statusChanged=_statusChanged - In the implementation block
@property (nonatomic,readonly) BOOL commentChanged;                  //@synthesize commentChanged=_commentChanged - In the implementation block
@property (nonatomic,readonly) int participantStatus;                //@synthesize participantStatus=_participantStatus - In the implementation block
@property (nonatomic,readonly) NSString * comment;                   //@synthesize comment=_comment - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)commentChanged;
-(BOOL)statusChanged;
-(id)initWithAttendee:(id)arg1 ;
-(void)dealloc;
-(NSString *)name;
-(NSURL *)url;
-(int)participantStatus;
-(NSString *)firstName;
-(NSString *)lastName;
-(NSString *)emailAddress;
-(NSString *)comment;
@end

