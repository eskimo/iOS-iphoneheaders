/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:08 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSURLQueueNode;

@interface NSURLQueue : NSObject {

	unsigned long long count;
	NSURLQueueNode* head;
	NSURLQueueNode* tail;
	id monitor;
	bool waitOnTake;
	bool _pad1;
	bool _pad2;
	bool _pad3;

}
+(id)newNode;
-(void)put:(id)arg1 ;
-(id)take;
-(id)peek;
-(id)peekAt:(unsigned long long)arg1 ;
-(long long)indexOf:(id)arg1 ;
-(bool)waitOnTake;
-(void)setWaitOnTake:(bool)arg1 ;
-(void)dealloc;
-(unsigned long long)count;
-(id)init;
-(bool)isEmpty;
-(void)clear;
-(void)finalize;
-(bool)remove:(id)arg1 ;
@end
