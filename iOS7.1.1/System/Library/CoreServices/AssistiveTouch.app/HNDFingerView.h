/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:55:10 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <assistivetouchd/assistivetouchd-Structs.h>
#import <assistivetouchd/HNDView.h>

@class HNDCursorLayer;

@interface HNDFingerView : HNDView {

	BOOL _actualVisibility;
	HNDCursorLayer* _cursorLayer;

}

@property (assign,nonatomic,@dynamic) BOOL selected; 
@property (nonatomic,@dynamic,readonly) float radius; 
@property (nonatomic,retain) HNDCursorLayer * cursorLayer;              //@synthesize cursorLayer=_cursorLayer - In the implementation block
+(CGSize)fingerSize;
+(float)fingerInnerRadius;
+(id)strokeOutlineColor;
+(id)deselectedFillColor;
+(float)strokeOutlineWidth;
+(id)deselectedStrokeColor;
+(float)fingerInnerCircleInnerRadius;
+(id)selectedStrokeColor;
+(float)fingerRadius;
+(id)selectedFillColor;
+(float)fingerOuterRadius;
+(float)strokeWidth;
-(void)cancelImplodeAnimation;
-(void)implodeDisplayLinkFired:(id)arg1 ;
-(void)implode:(BOOL)arg1 ;
-(void)explode:(BOOL)arg1 ;
-(void)setIsPinchFinger:(int)arg1 ;
-(void)animateToTapWithDuration:(double)arg1 ;
-(id)cursorLayer;
-(void)setCursorLayer:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(BOOL)isUserInteractionEnabled;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)isVisible;
-(BOOL)selected;
-(void)setVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
@end
