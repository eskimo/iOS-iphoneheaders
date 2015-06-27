/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:17:46 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UIColor, UIView;

@interface _UIFocusDebugOverlayView : UIView {

	UIColor* _overlayColor;
	UIView* _highlightView;

}

@property (nonatomic,copy) UIColor * overlayColor;                //@synthesize overlayColor=_overlayColor - In the implementation block
@property (nonatomic,retain) UIView * highlightView;              //@synthesize highlightView=_highlightView - In the implementation block
-(void)dealloc;
-(id)_focusItemsOverlayCreateIfNecessary:(char)arg1 ;
-(void)_removeFocusItemOverlayViews;
-(id)initWithView:(id)arg1 ;
-(void)_highlightPreferredFocusView:(id)arg1 ;
-(void)_unhighlightPreferredFocusView;
-(void)setOverlayColor:(UIColor *)arg1 ;
-(void)doesNotRecognizeSelector:(SEL)arg1 ;
-(UIColor *)overlayColor;
-(UIView *)highlightView;
-(void)setHighlightView:(UIView *)arg1 ;
@end
