/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:50 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIKeyboardCandidateToggleButton.h>

@class UIView, UIImage;

@interface UIKeyboardCandidateUnsplitKeyboardToggleButton : UIKeyboardCandidateToggleButton {

	UIView* _pocketShadow;
	UIImage* _backgroundNormal;
	UIImage* _backgroundHighlighted;
	BOOL _drawsBackground;
	BOOL _drawsPocketShadow;

}

@property (assign,nonatomic) BOOL drawsBackground;                //@synthesize drawsBackground=_drawsBackground - In the implementation block
@property (assign,nonatomic) BOOL drawsPocketShadow;              //@synthesize drawsPocketShadow=_drawsPocketShadow - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)setDrawsBackground:(BOOL)arg1 ;
-(BOOL)drawsBackground;
-(void)setDrawsPocketShadow:(BOOL)arg1 ;
-(void)updateBackgroundImages;
-(id)toggleButtonBackgroundImageWithHighlight:(BOOL)arg1 ;
-(BOOL)drawsPocketShadow;
@end

