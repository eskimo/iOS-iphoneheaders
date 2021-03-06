/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:29:21 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIGestureRecognizer.h>

@class UIDelayedAction;

@interface UIScrollViewDelayedTouchesBeganGestureRecognizer : UIGestureRecognizer {

	UIDelayedAction* _touchDelay;
	CGPoint _startSceneReferenceLocation;

}
-(void)dealloc;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)sendDelayedTouches;
-(void)_resetGestureRecognizer;
-(void)clearTimer;
-(void)sendTouchesShouldBeginForDelayedTouches:(id)arg1 ;
-(void)sendTouchesShouldBeginForTouches:(id)arg1 withEvent:(id)arg2 ;
@end

