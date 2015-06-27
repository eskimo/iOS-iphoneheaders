/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:47 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CAStateController, CALayer, CAStateTransition, NSString, NSMutableArray;

@interface CAStateControllerTransition : NSObject {

	CAStateController* _controller;
	CALayer* _layer;
	CAStateTransition* _transition;
	double _beginTime;
	double _duration;
	float _speed;
	NSString* _masterKey;
	NSMutableArray* _animations;

}

@property (nonatomic,readonly) CALayer * layer;                             //@synthesize layer=_layer - In the implementation block
@property (nonatomic,readonly) CAStateTransition * transition;              //@synthesize transition=_transition - In the implementation block
@property (nonatomic,readonly) double beginTime;                            //@synthesize beginTime=_beginTime - In the implementation block
@property (nonatomic,readonly) double duration;                             //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) float speed;                                 //@synthesize speed=_speed - In the implementation block
-(void)removeAnimationFromLayer:(id)arg1 forKey:(id)arg2 ;
-(void)dealloc;
-(CALayer *)layer;
-(id)init;
-(double)duration;
-(void)invalidate;
-(void)animationDidStop:(id)arg1 finished:(char)arg2 ;
-(double)beginTime;
-(float)speed;
-(CAStateTransition *)transition;
-(void)addAnimation:(id)arg1 ;
@end
