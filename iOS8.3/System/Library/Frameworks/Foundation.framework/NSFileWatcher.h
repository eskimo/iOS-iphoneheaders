/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:50:42 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
#import <Foundation/Foundation-Structs.h>
@class NSObject, NSURL, NSFileWatcherObservations, NSMutableDictionary, NSString;

@interface NSFileWatcher : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSURL* _url;
	/*^block*/id _observer;
	char _isWatching;
	NSObject*<OS_dispatch_source> _eventSource;
	unsigned long long _lastObservedEventID;
	FSEventStreamRef _eventStream;
	char _eventsAreAboutDirectory;
	char _isUnsettled;
	NSFileWatcherObservations* _itemObservations;
	NSMutableDictionary* _subitemObservationsByEventPath;
	NSURL* _fileReferenceURL;
	NSString* _formerPath;
	NSURL* _formerURL;

}
-(void)setLastObservedEventID:(unsigned long long)arg1 ;
-(void)settle;
-(void)watchItem;
-(void)_coalesceSubitemObservations;
-(void)handleFSEventPath:(id)arg1 flags:(unsigned long)arg2 id:(unsigned long long)arg3 ;
-(void)unsettle;
-(void)dealloc;
-(id)initWithQueue:(id)arg1 ;
-(void)stop;
-(void)setObserver:(/*^block*/id)arg1 ;
-(void)start;
-(void)setURL:(id)arg1 ;
@end
