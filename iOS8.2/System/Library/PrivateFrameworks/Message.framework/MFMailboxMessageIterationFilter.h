/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:25 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Message/Message-Structs.h>
#import <Message/MFMessageIterationFilter.h>

@class NSIndexSet, NSString;

@interface MFMailboxMessageIterationFilter : NSObject <MFMessageIterationFilter> {

	NSIndexSet* _mailboxes;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(char)filterMessageWithStatement:(sqlite3_stmtRef)arg1 ;
-(id)initWithMailboxes:(id)arg1 ;
@end

