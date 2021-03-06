/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:13 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TelephonyUI/TelephonyUI-Structs.h>
#import <UIKit/UIButton.h>

@class TPRingView;

@interface TPFakeSixSquareButton : UIButton {

	UIEdgeInsets _contentInsets;
	TPRingView* _ringView;

}

@property (retain) TPRingView * ringView;              //@synthesize ringView=_ringView - In the implementation block
-(void)dealloc;
-(CGRect)titleRectForContentRect:(CGRect)arg1 ;
-(void)setContentRect:(CGRect)arg1 ;
-(CGRect)imageRectForContentRect:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 andIcon:(id)arg2 ;
-(TPRingView *)ringView;
-(void)setRingView:(TPRingView *)arg1 ;
@end

