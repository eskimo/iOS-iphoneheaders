/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:26:43 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class WBReadingListPrivate, NSObject;

@interface WBReadingList : NSObject {

	WBReadingListPrivate* _private;
	NSObject*<OS_dispatch_queue> _serialQueue;

}
+(BOOL)supportsURL:(id)arg1 ;
+(id)defaultReadingList;
-(void)dealloc;
-(id)init;
-(id)_init;
-(BOOL)addReadingListItemWithURL:(id)arg1 title:(id)arg2 previewText:(id)arg3 error:(id*)arg4 ;
@end

