/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:13 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TelephonyUI/TelephonyUI-Structs.h>
#import <UIKit/UIImageView.h>

@class TPLegacyBottomLockBar, UIAlphaAnimation;

@interface TPLegacyLockKnobView : UIImageView {

	TPLegacyBottomLockBar* _track;
	UIAlphaAnimation* _animation;
	double _centerDelta;
	BOOL _tracking;

}
-(void)dealloc;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)initWithImage:(id)arg1 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)isTracking;
-(BOOL)shouldBeginTracking:(id)arg1 ;
-(void)beginTracking:(id)arg1 ;
-(void)setLockView:(id)arg1 ;
@end

