/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:37 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <CoreFoundation/NSCoding.h>
#import <CoreFoundation/NSCopying.h>
#import <QuartzCore/CAMediaTiming.h>
#import <QuartzCore/CAAction.h>
#import <CoreFoundation/NSMutableCopying.h>
#import <QuartzCore/CAPropertyInfo.h>

@class NSString, CAStateControllerTransition, CAMediaTimingFunction;

@interface CAAnimation : NSObject <NSCoding, NSCopying, CAMediaTiming, CAAction, NSMutableCopying, CAPropertyInfo> {

	void* _attr;
	unsigned _flags;

}

@property (assign) long long _mapkit_ID; 
@property (nonatomic,readonly) bool _mapkit_isScrollingAnimation; 
@property (nonatomic,copy) id animationDidStartBlock; 
@property (nonatomic,copy) id animationDidStopBlock; 
@property (getter=isEnabled) bool enabled; 
@property (copy) NSString * beginTimeMode; 
@property (assign) double frameInterval; 
@property (@dynamic) CAStateControllerTransition * CAStateControllerTransition; 
@property (retain) CAMediaTimingFunction * timingFunction; 
@property (retain) id delegate; 
@property (getter=isRemovedOnCompletion) bool removedOnCompletion; 
@property (assign) double beginTime; 
@property (assign) double duration; 
@property (assign) float speed; 
@property (assign) double timeOffset; 
@property (assign) float repeatCount; 
@property (assign) double repeatDuration; 
@property (assign) bool autoreverses; 
@property (copy) NSString * fillMode; 
+(bool)resolveInstanceMethod:(SEL)arg1 ;
+(void)CAMLParserStartElement:(id)arg1 ;
+(/*function pointer*/ void*)CA_setterForProperty:(const CAPropertyInfo*)arg1 ;
+(/*function pointer*/ void*)CA_getterForProperty:(const CAPropertyInfo*)arg1 ;
+(id)properties;
+(id)defaultValueForKey:(id)arg1 ;
+(bool)CA_automaticallyNotifiesObservers:(Class)arg1 ;
+(bool)CA_encodesPropertyConditionally:(unsigned)arg1 type:(int)arg2 ;
+(id)animation;
+(bool)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(void)set_mapkit_ID:(long long)arg1 ;
-(long long)_mapkit_ID;
-(bool)_mapkit_isScrollingAnimation;
-(/*^block*/ id)animationDidStartBlock;
-(void)setAnimationDidStartBlock:(/*^block*/ id)arg1 ;
-(/*^block*/ id)animationDidStopBlock;
-(void)setAnimationDidStopBlock:(/*^block*/ id)arg1 ;
-(void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3 ;
-(void)encodeWithCAMLWriter:(id)arg1 ;
-(id)CAMLTypeForKey:(id)arg1 ;
-(Object*)CA_copyRenderValue;
-(void)setDefaultDuration:(double)arg1 ;
-(id)beginTimeMode;
-(void)setFrameInterval:(double)arg1 ;
-(void)setBeginTimeMode:(id)arg1 ;
-(bool)isEnabled;
-(void)setEnabled:(bool)arg1 ;
-(double)frameInterval;
-(id)mutableCopyWithZone:(NSZone)arg1 ;
-(void)applyForTime:(double)arg1 presentationObject:(id)arg2 modelObject:(id)arg3 ;
-(void)runActionForKey:(id)arg1 object:(id)arg2 arguments:(id)arg3 ;
-(bool)_setCARenderAnimation:(Animation*)arg1 layer:(id)arg2 ;
-(unsigned)_propertyFlagsForLayer:(id)arg1 ;
-(bool)shouldArchiveValueForKey:(id)arg1 ;
-(bool)removedOnCompletion;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)debugDescription;
-(id)delegate;
-(void)setSpeed:(float)arg1 ;
-(double)duration;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(void)setDuration:(double)arg1 ;
-(id)valueForKey:(id)arg1 ;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)valueForKeyPath:(id)arg1 ;
-(void)setFillMode:(id)arg1 ;
-(void)setValue:(id)arg1 forKeyPath:(id)arg2 ;
-(void)setTimingFunction:(id)arg1 ;
-(void)setBeginTime:(double)arg1 ;
-(void)setRepeatCount:(float)arg1 ;
-(void)setAutoreverses:(bool)arg1 ;
-(double)beginTime;
-(float)speed;
-(double)timeOffset;
-(id)timingFunction;
-(void)setRemovedOnCompletion:(bool)arg1 ;
-(void)setTimeOffset:(double)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(double)repeatDuration;
-(void)setRepeatDuration:(double)arg1 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(float)repeatCount;
-(bool)autoreverses;
-(id)fillMode;
-(bool)isRemovedOnCompletion;
@end

