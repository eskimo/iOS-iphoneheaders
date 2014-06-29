/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:12 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSProgress.h>

@protocol NSProgressPublisher;
@interface NSProgressProxy : NSProgress {

	<NSProgressPublisher>* _forwarder;
	bool _isOld;
	/*^block*/ id _unpublishingHandler;

}
-(void)setCompletedUnitCount:(long long)arg1 ;
-(void)setTotalUnitCount:(long long)arg1 ;
-(void)becomeCurrentWithPendingUnitCount:(long long)arg1 ;
-(void)resignCurrent;
-(void)publish;
-(void)unpublish;
-(void)acknowledgeWithSuccess:(bool)arg1 ;
-(void)prioritize;
-(void)setLocalizedDescription:(id)arg1 ;
-(void)setCancellable:(bool)arg1 ;
-(void)setPausable:(bool)arg1 ;
-(void)setPausingHandler:(/*^block*/ id)arg1 ;
-(bool)isOld;
-(void)setPrioritizable:(bool)arg1 ;
-(void)setPrioritizationHandler:(/*^block*/ id)arg1 ;
-(id)_initWithForwarder:(id)arg1 values:(id)arg2 isOld:(bool)arg3 ;
-(void)_invokePublishingHandler:(/*^block*/ id)arg1 ;
-(void)_invokeUnpublishingHandler;
-(void)dealloc;
-(void)setCancellationHandler:(/*^block*/ id)arg1 ;
-(void)cancel;
-(void)pause;
-(void)setKind:(id)arg1 ;
-(void)setUserInfoObject:(id)arg1 forKey:(id)arg2 ;
@end
