/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:02 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface WBSFluidProgressState : NSObject {

	long long _fluidProgressType;
	NSString* _loadURL;
	double _webKitProgressValue;
	double _linearFunctionM;
	double _linearFunctionB;
	double _startTimeForFluidProgress;
	double _lastTimeProgressValueWasUpdated;
	long long _fluidProgressAnimationPhase;
	double _previousDestinationPosition;
	double _animationDuration;
	double _minProgressPosition;
	bool _hasCompletedLoad;
	bool _hasCanceledLoad;
	bool _hasCommittedLoad;
	bool _shouldAnimateUsingInitialPosition;

}

@property (assign) long long fluidProgressType;                         //@synthesize fluidProgressType=_fluidProgressType - In the implementation block
@property (retain) NSString * loadURL;                                  //@synthesize loadURL=_loadURL - In the implementation block
@property (assign) double minProgressPosition; 
@property (assign) long long fluidProgressAnimationPhase; 
@property (assign) bool hasCompletedLoad;                               //@synthesize hasCompletedLoad=_hasCompletedLoad - In the implementation block
@property (assign) bool hasCanceledLoad;                                //@synthesize hasCanceledLoad=_hasCanceledLoad - In the implementation block
@property (assign) bool hasCommittedLoad;                               //@synthesize hasCommittedLoad=_hasCommittedLoad - In the implementation block
@property (assign) bool shouldAnimateUsingInitialPosition;              //@synthesize shouldAnimateUsingInitialPosition=_shouldAnimateUsingInitialPosition - In the implementation block
+(double)_estimatedLoadTimeRemainingFromProgressValue:(double)arg1 ;
-(double)_animationDuration;
-(void)_updateLinearFunction;
-(double)_fractionCompleteAtElapsedTime:(double)arg1 ;
-(double)_adjustProgressPosition:(double)arg1 ;
-(double)_nextProgressPosition:(double)arg1 ;
-(double)_estimatedLoadTimeRemaining;
-(void)dealloc;
-(id)description;
-(id)initWithType:(long long)arg1 ;
-(void)setMinProgressPosition:(double)arg1 ;
-(double)secondsElapsedSinceLoadBegan;
-(bool)isFluidProgressStalled;
-(double)fluidProgressValue;
-(long long)fluidProgressAnimationPhase;
-(void)setFluidProgressAnimationPhase:(long long)arg1 ;
-(void)setWebKitProgressValue:(double)arg1 ;
-(double)minProgressPosition;
-(id)nextFluidProgressAnimation;
-(long long)fluidProgressType;
-(void)setFluidProgressType:(long long)arg1 ;
-(id)loadURL;
-(void)setLoadURL:(id)arg1 ;
-(bool)hasCompletedLoad;
-(void)setHasCompletedLoad:(bool)arg1 ;
-(bool)hasCanceledLoad;
-(void)setHasCanceledLoad:(bool)arg1 ;
-(bool)hasCommittedLoad;
-(void)setHasCommittedLoad:(bool)arg1 ;
-(bool)shouldAnimateUsingInitialPosition;
-(void)setShouldAnimateUsingInitialPosition:(bool)arg1 ;
@end
