/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:26 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/CoreAuthUI.app/CoreAuthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreAuthUI/CoreAuthUI-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIKeyInput.h>
#import <CoreAuthUI/PinFieldDelegate.h>

@protocol PinViewDelegate;
@class UILabel, PinField, UIView, PinKeypad, UIViewController, UIButton, NSString;

@interface PinView : UIView <UIKeyInput, PinFieldDelegate> {

	UILabel* _titleLabel;
	PinField* _pinField;
	UIView* _dividerLine;
	float _scale;
	char _autoKeyboard;
	char _keypadActive;
	PinKeypad* _keypad;
	CGRect _keyboardDefaultFrame;
	UIViewController* _viewController;
	id<PinViewDelegate> _delegate;
	UIButton* _cancelButton;
	NSString* _title;

}

@property (assign,nonatomic) UIViewController * viewController;                          //@synthesize viewController=_viewController - In the implementation block
@property (assign,nonatomic,__weak) id<PinViewDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIButton * cancelButton;                                    //@synthesize cancelButton=_cancelButton - In the implementation block
@property (nonatomic,retain) NSString * title;                                           //@synthesize title=_title - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) int autocapitalizationType; 
@property (assign,nonatomic) int autocorrectionType; 
@property (assign,nonatomic) int spellCheckingType; 
@property (assign,nonatomic) int keyboardType; 
@property (assign,nonatomic) int keyboardAppearance; 
@property (assign,nonatomic) int returnKeyType; 
@property (assign,nonatomic) char enablesReturnKeyAutomatically; 
@property (assign,getter=isSecureTextEntry,nonatomic) char secureTextEntry; 
-(id)initWithPinLength:(id)arg1 ;
-(void)_activateKeypadView;
-(void)_dismissKeypad;
-(void)_layoutSubviewsWithKeyboard:(CGRect)arg1 ;
-(float)_roundToPixel:(float)arg1 ;
-(CGRect)_roundRectToPixel:(CGRect)arg1 ;
-(void)_deactivateKeypadView;
-(void)_setKeyboardUserInteractionEnabled:(char)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<PinViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(NSString *)arg1 ;
-(id<PinViewDelegate>)delegate;
-(char)resignFirstResponder;
-(NSString *)title;
-(char)becomeFirstResponder;
-(char)canBecomeFirstResponder;
-(int)keyboardAppearance;
-(char)hasText;
-(void)insertText:(id)arg1 ;
-(void)deleteBackward;
-(char)isSecureTextEntry;
-(int)autocorrectionType;
-(int)spellCheckingType;
-(int)keyboardType;
-(UIButton *)cancelButton;
-(void)setCancelButton:(UIButton *)arg1 ;
-(void)setViewController:(UIViewController *)arg1 ;
-(UIViewController *)viewController;
-(void)keyboardDidShow:(id)arg1 ;
-(void)pinEntered:(id)arg1 ;
@end
