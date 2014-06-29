/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:43 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDRep.h>

@class CALayer, TSDMutableReflection, TSDShadow, TSDReflection;

@interface TSDStyledRep : TSDRep {

	CALayer* mShadowLayer;
	CALayer* mReflectionLayer;
	CGPoint mOriginalReflectionLayerPositionInScaledCanvas;
	bool mIsUpdatingReflectionOpacity;
	TSDMutableReflection* mDynamicReflection;
	bool mIsUpdatingShadow;
	TSDShadow* mDynamicShadow;
	struct {
		unsigned shadowInvalid : 1;
	}  mFlags;

}

@property (nonatomic,readonly) CALayer * shadowLayer; 
@property (nonatomic,readonly) CALayer * reflectionLayer; 
@property (nonatomic,readonly) TSDReflection * reflection; 
@property (nonatomic,readonly) double opacity; 
@property (nonatomic,readonly) TSDShadow * shadow; 
-(void)willUpdateLayer:(id)arg1 ;
-(void)didUpdateLayer:(id)arg1 ;
-(bool)shouldShowSelectionHighlight;
-(void)dynamicDragDidBegin;
-(void)viewScaleDidChange;
-(id)textureForContext:(id)arg1 ;
-(void)processChangedProperty:(int)arg1 ;
-(id)additionalLayersUnderLayer;
-(id)styledLayout;
-(id)reflectionLayer;
-(bool)shouldHideSelectionHighlightDueToRectangularPath;
-(void)invalidateShadowLayer;
-(bool)shouldShowShadow;
-(void)drawInContextWithoutEffects:(CGContextRef)arg1 withContent:(bool)arg2 withStroke:(bool)arg3 withOpacity:(bool)arg4 forAlphaOnly:(bool)arg5 drawChildren:(bool)arg6 ;
-(id)pathSourceForSelectionHighlightBehavior;
-(bool)canDrawShadowInOneStepWithChildren:(bool)arg1 ;
-(void)setMagicMoveTextureAttributes:(id)arg1 ;
-(bool)shouldShowReflection;
-(id)shadowLayer;
-(void)disposeReflectionLayer;
-(void)createReflectionLayer;
-(void)drawGradientWithAlphaOverReflection:(CGContextRef)arg1 applyingOpacity:(bool)arg2 reflectionSize:(CGSize)arg3 ;
-(id)styledInfo;
-(CGRect)clipRectWithoutEffects;
-(CGRect)rectWithEffectsAppliedToRect:(CGRect)arg1 ;
-(CGRect)p_rectWithEffectsAppliedToRect:(CGRect)arg1 additionalTransform:(CGAffineTransform)arg2 ;
-(CGRect)reflectionLayerFrameInRoot;
-(void)drawReflectionIntoReflectionFrameInContext:(CGContextRef)arg1 withTransparencyLayer:(bool)arg2 applyingOpacity:(bool)arg3 drawChildren:(bool)arg4 ;
-(void)p_drawReflectionInContext:(CGContextRef)arg1 ;
-(void)positionShadowLayer:(id)arg1 forShadow:(id)arg2 withNaturalBounds:(CGRect)arg3 ;
-(CGImageRef)newShadowImageWithSize:(CGSize)arg1 unflipped:(bool)arg2 withChildren:(bool)arg3 ;
-(void)drawInContextWithoutEffectsForAlphaOnly:(CGContextRef)arg1 ;
-(void)drawInContextWithoutEffectsOrChildrenForAlphaOnly:(CGContextRef)arg1 ;
-(CGImageRef)newShadowImageWithSize:(CGSize)arg1 shadow:(id)arg2 drawSelector:(SEL)arg3 unflipped:(bool)arg4 ;
-(void)p_drawReflectionIntoReflectionFrameInContext:(CGContextRef)arg1 withTransparencyLayer:(bool)arg2 applyingOpacity:(bool)arg3 shouldClipGradient:(bool)arg4 withBlock:(/*^block*/ id)arg5 ;
-(CGImageRef)p_newReflectionImageWithSize:(CGSize)arg1 applyOpacity:(bool)arg2 viewScale:(double)arg3 withBlock:(/*^block*/ id)arg4 ;
-(void)drawReflectionInContext:(CGContextRef)arg1 withTransparencyLayer:(bool)arg2 applyingOpacity:(bool)arg3 shouldClipGradient:(bool)arg4 withBlock:(/*^block*/ id)arg5 ;
-(void)drawShadowInContext:(CGContextRef)arg1 withChildren:(bool)arg2 withDrawableOpacity:(bool)arg3 ;
-(void)drawReflectionInContext:(CGContextRef)arg1 drawChildren:(bool)arg2 ;
-(void)willUpdateEffectLayersForLayer:(id)arg1 ;
-(void)didUpdateEffectLayersForLayer:(id)arg1 ;
-(CGRect)p_clipRectInRootForTransform:(CGAffineTransform)arg1 ;
-(CGRect)reflectionLayerFrame;
-(void)drawInContextWithoutEffects:(CGContextRef)arg1 ;
-(void)drawInContextWithoutEffectsOrChildren:(CGContextRef)arg1 ;
-(void)dynamicReflectionOpacityChangeDidBegin;
-(void)dynamicReflectionOpacityUpdateToValue:(double)arg1 ;
-(void)dynamicReflectionOpacityChangeDidEnd;
-(void)dynamicShadowChangeDidBegin;
-(void)dynamicShadowUpdateToValue:(id)arg1 ;
-(void)dynamicShadowChangeDidEnd;
-(void)dealloc;
-(void)setNeedsDisplay;
-(id)description;
-(double)opacity;
-(void)drawLayer:(id)arg1 inContext:(CGContextRef)arg2 ;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 ;
-(id)shadow;
-(bool)isInvisible;
-(id)reflection;
-(CGRect)clipRect;
-(void)drawInContext:(CGContextRef)arg1 ;
@end
