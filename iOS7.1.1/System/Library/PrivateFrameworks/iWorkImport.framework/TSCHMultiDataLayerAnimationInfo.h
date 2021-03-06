/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:37 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class NSArray, NSMutableArray, CAMediaTimingFunction;

@interface TSCHMultiDataLayerAnimationInfo : NSObject <NSCopying> {

	bool mShouldAnimate;
	bool mAboveIntercept;
	bool mCrossesIntercept;
	NSArray* mKeyTimes;
	CGRect mInterceptRect;
	bool mHorizontalChart;
	double mDuration;
	CGRect mChartBodyFrameInRepElementSpace;
	NSMutableArray* mLayerAnimationValues;
	CAMediaTimingFunction* mTimingFunction;
	bool mElementUndefined;
	bool mAtIntercept;
	bool mCurrentAtIntercept;
	bool mCurrentAboveIntercept;

}

@property (assign,nonatomic) bool shouldAnimate; 
@property (assign,nonatomic) bool aboveIntercept; 
@property (assign,nonatomic) bool crossesIntercept; 
@property (nonatomic,copy) NSArray * keyTimes; 
@property (assign,nonatomic) CGRect interceptRect; 
@property (assign,nonatomic) bool horizontalChart; 
@property (assign,nonatomic) double duration; 
@property (assign,nonatomic) CGRect chartBodyFrameInRepElementSpace; 
@property (nonatomic,readonly) NSArray * layerAnimationValues; 
@property (nonatomic,retain) CAMediaTimingFunction * timingFunction; 
@property (assign,nonatomic) bool elementUndefined; 
@property (assign,nonatomic) bool atIntercept; 
@property (assign,nonatomic) bool currentAtIntercept; 
@property (assign,nonatomic) bool currentAboveIntercept; 
+(id)animationInfo;
-(void)addAnimationForLayer:(id)arg1 key:(id)arg2 values:(id)arg3 keyTimes:(id)arg4 ;
-(bool)elementUndefined;
-(void)setElementUndefined:(bool)arg1 ;
-(void)addImageContentsAnimationForLayer:(id)arg1 fromImage:(id)arg2 toImage:(id)arg3 keyTimes:(id)arg4 ;
-(void)addAnimationForLayer:(id)arg1 key:(id)arg2 values:(id)arg3 keyTimes:(id)arg4 needPresentationLayerValues:(bool)arg5 ;
-(bool)crossesIntercept;
-(CGRect)interceptRect;
-(void)setHorizontalChart:(bool)arg1 ;
-(id)layerAnimationValues;
-(bool)aboveIntercept;
-(void)setAboveIntercept:(bool)arg1 ;
-(void)setCrossesIntercept:(bool)arg1 ;
-(void)setInterceptRect:(CGRect)arg1 ;
-(bool)horizontalChart;
-(CGRect)chartBodyFrameInRepElementSpace;
-(void)setChartBodyFrameInRepElementSpace:(CGRect)arg1 ;
-(bool)currentAtIntercept;
-(void)setCurrentAtIntercept:(bool)arg1 ;
-(bool)atIntercept;
-(void)setAtIntercept:(bool)arg1 ;
-(bool)currentAboveIntercept;
-(void)setCurrentAboveIntercept:(bool)arg1 ;
-(void)setShouldAnimate:(bool)arg1 ;
-(void)dealloc;
-(id)init;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(id)copyWithZone:(NSZone)arg1 ;
-(void)setTimingFunction:(id)arg1 ;
-(void)setKeyTimes:(id)arg1 ;
-(id)timingFunction;
-(id)keyTimes;
-(id).cxx_construct;
-(bool)shouldAnimate;
@end

