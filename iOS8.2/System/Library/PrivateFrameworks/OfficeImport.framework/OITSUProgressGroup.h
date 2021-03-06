/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:34 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OITSUProgress.h>

@protocol OS_dispatch_queue;
@class NSArray, NSObject;

@interface OITSUProgressGroup : OITSUProgress {

	NSArray* mChildren;
	NSArray* mChildrenProgressObservers;
	NSObject*<OS_dispatch_queue> mChildrenProgressObserversQueue;

}
-(double)maxValue;
-(void)dealloc;
-(double)value;
-(char)isIndeterminate;
-(id)addProgressObserverWithValueInterval:(double)arg1 queue:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)removeProgressObserver:(id)arg1 ;
-(void)p_updateChildrenProgressObservers;
-(id)initWithChildren:(id)arg1 ;
@end

