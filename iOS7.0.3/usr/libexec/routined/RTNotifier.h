/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:19:07 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/routined
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface RTNotifier : NSObject {

	NSObject<OS_dispatch_queue>* _queue;
	NSMutableDictionary* _observersMap;

}

@property (nonatomic,retain) NSObject<OS_dispatch_queue> * queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * observersMap;               //@synthesize observersMap=_observersMap - In the implementation block
-(id)observersMap;
-(int)getNumberOfObservers:(id)arg1 ;
-(void)internalAddObserver:(id)arg1 name:(id)arg2 ;
-(void)internalRemoveObserver:(id)arg1 name:(id)arg2 ;
-(void)removeObserver:(id)arg1 fromNotification:(id)arg2 ;
-(void)postNotification:(id)arg1 toObserver:(id)arg2 ;
-(void)setObserversMap:(id)arg1 ;
-(void)addObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3 ;
-(id)init;
-(void)removeObserver:(id)arg1 ;
-(void)postNotification:(id)arg1 ;
-(id)queue;
-(void)setQueue:(id)arg1 ;
-(void).cxx_destruct;
@end
