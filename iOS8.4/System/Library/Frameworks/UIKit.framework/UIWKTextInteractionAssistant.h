/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:19:21 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UITextInteractionAssistant.h>

@class _UITextServiceSession, UITextChecker, NSString, UITapGestureRecognizer, UILongPressGestureRecognizer;

@interface UIWKTextInteractionAssistant : UITextInteractionAssistant {

	long long _selectionOperation;
	_UITextServiceSession* _definitionSession;
	_UITextServiceSession* _learnSession;
	UITextChecker* _textChecker;
	unsigned long long _options;
	CGRect _caretBeforeTap;
	NSString* _wordBeforeTap;
	UITapGestureRecognizer* _singleTapGesture;
	UILongPressGestureRecognizer* _loupeGesture;

}

@property (nonatomic,retain,readonly) UITapGestureRecognizer * singleTapGesture;                //@synthesize singleTapGesture=_singleTapGesture - In the implementation block
@property (nonatomic,retain,readonly) UILongPressGestureRecognizer * loupeGesture;              //@synthesize loupeGesture=_loupeGesture - In the implementation block
-(void)dealloc;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)selectionChanged;
-(id)initWithView:(id)arg1 ;
-(void)selectAll:(id)arg1 ;
-(void)selectWord;
-(void)scheduleReplacementsWithOptions:(unsigned long long)arg1 ;
-(UILongPressGestureRecognizer *)loupeGesture;
-(UITapGestureRecognizer *)singleTapGesture;
-(void)updateSelectionWithPoint:(CGPoint)arg1 ;
-(BOOL)containerIsBrowserView;
-(BOOL)containerIsAtom;
-(BOOL)containerIsPlainStyleAtom;
-(void)oneFingerDoubleTap:(id)arg1 ;
-(void)oneFingerTap:(id)arg1 ;
-(void)oneFingerTripleTap:(id)arg1 ;
-(void)twoFingerSingleTap:(id)arg1 ;
-(void)tapAndAHalf:(id)arg1 ;
-(void)loupeGesture:(id)arg1 ;
-(void)twoFingerRangedSelectGesture:(id)arg1 ;
-(id)_asText;
-(void)scrollSelectionToVisible;
-(void)updateWithMagnifierTerminalPoint:(BOOL)arg1 ;
-(BOOL)containerAllowsSelectionTintOnly;
-(BOOL)requiresImmediateUpdate;
-(BOOL)containerAllowsSelection;
-(void)rangeSelectionStarted:(CGPoint)arg1 ;
-(void)rangeSelectionEnded:(CGPoint)arg1 ;
-(void)rangeSelectionCanceled;
-(void)rangeSelectionMoved:(CGPoint)arg1 withTouchPoint:(CGPoint)arg2 ;
-(void)selectionChangedWithGestureAt:(CGPoint)arg1 withGesture:(long long)arg2 withState:(long long)arg3 withFlags:(long long)arg4 ;
-(void)selectionChangedWithTouchAt:(CGPoint)arg1 withSelectionTouch:(long long)arg2 withFlags:(long long)arg3 ;
-(void)showDictionaryFor:(id)arg1 fromRect:(CGRect)arg2 ;
-(void)selectionChangedWithGestureAt:(CGPoint)arg1 withGesture:(long long)arg2 withState:(long long)arg3 ;
-(void)selectionChangedWithTouchAt:(CGPoint)arg1 withSelectionTouch:(long long)arg2 ;
-(void)showTextServiceFor:(id)arg1 fromRect:(CGRect)arg2 ;
-(void)scheduleReplacementsForText:(id)arg1 withOptions:(unsigned long long)arg2 ;
-(BOOL)shouldTryReplacementsForText:(id)arg1 withOptions:(unsigned long long)arg2 ;
-(void)showReplacementsForText:(id)arg1 withOptions:(unsigned long long)arg2 ;
-(void)selectTextForReplacement:(id)arg1 withOptions:(unsigned long long)arg2 ;
-(void)selectWithTapGestureAt:(CGPoint)arg1 withGesture:(long long)arg2 withState:(long long)arg3 ;
-(void)scheduleChineseTransliterationForText:(id)arg1 ;
-(void)scheduleReplacementsForText:(id)arg1 ;
-(void)showTextStyleOptions;
-(void)hideTextStyleOptions;
@end

