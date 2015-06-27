/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 12:53:33 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CameraKit/CAMFocusView.h>

@class CAKeyframeAnimation;

@interface CAMFocusLockView : CAMFocusView {

	CAKeyframeAnimation* _lockBoundsAnimation;

}
-(double)fadeInDuration;
-(void)startAnimatingContents:(char)arg1 bounds:(char)arg2 fadeIn:(char)arg3 ;
-(id)_createBoundsAnimation;
-(id)_createLockBoundsAnimation;
-(void)animateLock;
-(void)animateScaleDownWithCompletion:(/*^block*/id)arg1 ;
@end
