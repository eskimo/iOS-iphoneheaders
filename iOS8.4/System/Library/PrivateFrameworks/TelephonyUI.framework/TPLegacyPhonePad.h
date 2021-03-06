/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:26:05 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TelephonyUI/TelephonyUI-Structs.h>
#import <UIKit/UIControl.h>

@interface TPLegacyPhonePad : UIControl {

	long long _downKey;
	long long _highlightKey;
	id _delegate;
	BOOL _playsSounds;
	BOOL _supportsHardPause;
	double _topHeight;
	double _midHeight;
	double _bottomHeight;
	double _leftWidth;
	double _midWidth;
	double _rightWidth;
	CFSetRef _inflightSounds;
	CFDictionaryRef _keyToButtonMap;
	unsigned _incompleteSounds;
	unsigned _delegateSoundCallbacks : 1;
	unsigned _soundsActivated : 1;

}

@property (assign) BOOL supportsHardPause;              //@synthesize supportsHardPause=_supportsHardPause - In the implementation block
+(void)_delayedDeactivate;
+(BOOL)shouldStringAutoDial:(id)arg1 givenLastChar:(char)arg2 ;
+(BOOL)launchFieldTestIfNeeded:(id)arg1 ;
-(id)scriptingInfoWithChildren;
-(id)_highlightedImage;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)removeFromSuperview;
-(BOOL)cancelTouchTracking;
-(void)movedFromWindow:(id)arg1 ;
-(void)movedToWindow:(id)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)pointMostlyInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)_playSoundForKey:(unsigned long long)arg1 ;
-(void)_stopSoundForKey:(unsigned long long)arg1 ;
-(void)setNeedsDisplayForKey:(int)arg1 ;
-(void)_handleKey:(id)arg1 forUIEvent:(id)arg2 ;
-(void)setPlaysSounds:(BOOL)arg1 ;
-(void)_activateSounds:(BOOL)arg1 ;
-(void)_stopAllSoundsForcingCallbacks:(BOOL)arg1 ;
-(void)_appSuspended;
-(void)_appResumed;
-(CGRect)_rectForKey:(unsigned long long)arg1 ;
-(id)_keypadImage;
-(double)_yFudge;
-(CGRect)_updateRect:(CGRect)arg1 withScale:(double)arg2 ;
-(CGPoint)_keypadOrigin;
-(id)_imageByCroppingImage:(id)arg1 toRect:(CGRect)arg2 ;
-(id)_pressedImage;
-(int)_keyForPoint:(CGPoint)arg1 ;
-(BOOL)supportsHardPause;
-(void)setSupportsHardPause:(BOOL)arg1 ;
-(void)highlightKeyAtIndex:(long long)arg1 ;
-(long long)indexForHighlightedKey;
-(void)setButton:(id)arg1 forKeyAtIndex:(unsigned long long)arg2 ;
-(id)_buttonForKeyAtIndex:(unsigned long long)arg1 ;
-(void)_notifySoundCompletionIfNecessary:(unsigned)arg1 ;
-(void)_handleKeyPressAndHold:(id)arg1 ;
@end

