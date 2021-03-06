/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:48 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDPathSource.h>
#import <iWorkImport/TSDSmartPathSource.h>
#import <iWorkImport/TSDMixing.h>

@interface TSDCalloutPathSource : TSDPathSource <TSDSmartPathSource, TSDMixing> {

	float mCornerRadius;
	float mTailSize;
	CGPoint mTailPosition;
	CGSize mNaturalSize;
	BOOL mIsTailAtCenter;

}

@property (assign,nonatomic) float cornerRadius; 
@property (nonatomic,readonly) float maxCornerRadius; 
@property (assign,nonatomic) CGPoint tailKnobPosition; 
@property (assign,nonatomic) float tailSize; 
@property (nonatomic,readonly) float maxTailSize; 
@property (assign,nonatomic) CGPoint tailSizeKnobPosition; 
@property (nonatomic,readonly) CGPoint tailCenter; 
@property (nonatomic,readonly) BOOL isTailAtCenter; 
@property (readonly) unsigned numberOfControlKnobs; 
+(id)quoteBubbleWithTailPosition:(CGPoint)arg1 tailSize:(float)arg2 naturalSize:(CGSize)arg3 ;
+(id)calloutWithCornerRadius:(float)arg1 tailPosition:(CGPoint)arg2 tailSize:(float)arg3 naturalSize:(CGSize)arg4 ;
-(CGPoint)tailCenter;
-(float)tailSize;
-(void)saveToArchive:(PathSourceArchive*)arg1 ;
-(int)mixingTypeWithObject:(id)arg1 ;
-(id)mixedObjectWithFraction:(float)arg1 ofObject:(id)arg2 ;
-(id)bezierPathWithoutFlips;
-(id)interiorWrapPath;
-(void)scaleToNaturalSize:(CGSize)arg1 ;
-(id)valueForSetSelector:(SEL)arg1 ;
-(void)setControlKnobPosition:(unsigned)arg1 toPoint:(CGPoint)arg2 ;
-(CGPoint)getControlKnobPosition:(unsigned)arg1 ;
-(id)getFeedbackStringForKnob:(unsigned)arg1 ;
-(CGPathRef)newFeedbackPathForKnob:(unsigned)arg1 ;
-(unsigned)numberOfControlKnobs;
-(CGPoint)p_getControlKnobPointForRoundedRect;
-(void)p_setControlKnobPointForRoundedRect:(CGPoint)arg1 ;
-(id)initWithCornerRadius:(float)arg1 tailPosition:(CGPoint)arg2 tailSize:(float)arg3 naturalSize:(CGSize)arg4 tailAtCenter:(BOOL)arg5 ;
-(void)p_setNaturalSize:(CGSize)arg1 ;
-(void)p_setCornerRadius:(float)arg1 ;
-(void)p_setTailPosition:(CGPoint)arg1 ;
-(void)p_setTailSize:(float)arg1 ;
-(void)p_setTailAtCenter:(BOOL)arg1 ;
-(CGPoint)p_tailPosition;
-(CGPoint)tailKnobPosition;
-(CGPoint)tailSizeKnobPosition;
-(void)setTailKnobPosition:(CGPoint)arg1 ;
-(void)setTailSizeKnobPosition:(CGPoint)arg1 ;
-(float)maxCornerRadius;
-(id)p_basePath;
-(void)p_getTailPath:(id)arg1 center:(CGPoint*)arg2 tailSize:(float*)arg3 intersections:(CGPoint)arg4 ;
-(CGPoint)p_adjustedCenterForPath:(id)arg1 ;
-(id)p_buildPath;
-(float)maxTailSize;
-(void)setTailSize:(float)arg1 ;
-(BOOL)isTailAtCenter;
-(void)setNaturalSize:(CGSize)arg1 ;
-(BOOL)isOval;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(float)cornerRadius;
-(void)setCornerRadius:(float)arg1 ;
-(CGSize)naturalSize;
-(id)initWithArchive:(const PathSourceArchive*)arg1 ;
-(BOOL)isRectangular;
-(BOOL)isCircular;
@end

