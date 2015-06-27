/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:51 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SiriUI/SiriUI-Structs.h>
#import <UIKit/UIButton.h>

@class SiriUISiriStatusView;

@interface SiriUIMicButton : UIButton {

	SiriUISiriStatusView* _statusView;

}

@property (assign,nonatomic,__weak) SiriUISiriStatusView * statusView;              //@synthesize statusView=_statusView - In the implementation block
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(SiriUISiriStatusView *)statusView;
-(void)setStatusView:(SiriUISiriStatusView *)arg1 ;
@end
