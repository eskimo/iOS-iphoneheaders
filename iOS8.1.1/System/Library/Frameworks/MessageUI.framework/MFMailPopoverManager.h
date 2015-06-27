/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:37 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MessageUI/MessageUI-Structs.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>
#import <UIKit/UIActionSheetDelegate.h>

@class NSArray, UIActionSheet, MFPopoverController, UIBarButtonItem, UIView, NSMutableArray, NSString;

@interface MFMailPopoverManager : NSObject <UIPopoverPresentationControllerDelegate, UIActionSheetDelegate> {

	id _delegate;
	id _actionSheetDelegate;
	NSArray* _explicitPassthroughViews;
	UIActionSheet* _actionSheet;
	MFPopoverController* _popoverController;
	UIBarButtonItem* _currentBarButtonItem;
	UIView* _currentView;
	CGRect _currentRect;
	NSMutableArray* _passThroughContexts;
	unsigned long long _currentArrowDirections;
	double _popoverDismissalEnd;
	BOOL _popoverBeingHiddenDuringRotation;
	BOOL _isHandlingActionSheetClick;
	BOOL _popoverDismissalIsDelayed;
	BOOL _popoverDismissalShouldBeAnimated;

}

@property (assign,nonatomic) BOOL popoverBeingHiddenDuringRotation;                  //@synthesize popoverBeingHiddenDuringRotation=_popoverBeingHiddenDuringRotation - In the implementation block
@property (assign,nonatomic) BOOL rasterizePopoverLayer; 
@property (nonatomic,retain) MFPopoverController * popoverController;                //@synthesize popoverController=_popoverController - In the implementation block
@property (nonatomic,retain) UIActionSheet * actionSheet;                            //@synthesize actionSheet=_actionSheet - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * currentBarButtonItem;                 //@synthesize currentBarButtonItem=_currentBarButtonItem - In the implementation block
@property (nonatomic,retain) UIView * currentView;                                   //@synthesize currentView=_currentView - In the implementation block
@property (assign,nonatomic) CGRect currentRect;                                     //@synthesize currentRect=_currentRect - In the implementation block
@property (assign,nonatomic) unsigned long long currentArrowDirections;              //@synthesize currentArrowDirections=_currentArrowDirections - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)managerForWindow:(id)arg1 createIfNeeded:(BOOL)arg2 ;
+(void)enumerateManagersUsingBlock:(/*^block*/id)arg1 ;
+(void)dismissPopover:(id)arg1 animated:(BOOL)arg2 ;
-(void)presentPopover:(id)arg1 fromRect:(CGRect)arg2 inView:(id)arg3 direction:(unsigned long long)arg4 allowInteractionWithViews:(id)arg5 withDelegate:(id)arg6 animated:(BOOL)arg7 ;
-(BOOL)popoverBeingHiddenDuringRotation;
-(void)popoverControllerDidDismissPopover:(id)arg1 isUserAction:(BOOL)arg2 ;
-(BOOL)popoverShowing;
-(BOOL)_isEquivalentToCurrentPopover:(id)arg1 ;
-(void)_cleanupCurrentPopover;
-(void)setCurrentBarButtonItem:(UIBarButtonItem *)arg1 ;
-(void)_willPresentPopover:(id)arg1 ;
-(id)_allPassthroughViewsIncludingViews:(id)arg1 excludingViews:(id)arg2 ;
-(void)setCurrentView:(UIView *)arg1 ;
-(void)_configureDelegate:(id)arg1 forPopoverController:(id)arg2 ;
-(void)setCurrentArrowDirections:(unsigned long long)arg1 ;
-(UIBarButtonItem *)currentBarButtonItem;
-(unsigned long long)currentArrowDirections;
-(void)setCurrentRect:(CGRect)arg1 ;
-(UIView *)currentView;
-(CGRect)currentRect;
-(void)_dismissPopoverNow;
-(void)_popoverDismissalDidFinish;
-(id)_currentPassthroughProviders;
-(BOOL)_delegateSupportsRotation;
-(void)setPopoverBeingHiddenDuringRotation:(BOOL)arg1 ;
-(void)presentPopover:(id)arg1 fromBarButtonItem:(id)arg2 animated:(BOOL)arg3 ;
-(void)presentPopover:(id)arg1 fromView:(id)arg2 animated:(BOOL)arg3 ;
-(void)presentPopover:(id)arg1 fromBarButtonItem:(id)arg2 withDelegate:(id)arg3 animated:(BOOL)arg4 ;
-(void)dismissPopoverAfterDelay:(double)arg1 animated:(BOOL)arg2 ;
-(BOOL)popoverDismissalIsDelayed;
-(double)delayUntilPopoverFinishesDismissing;
-(void)addPassthroughViewProvider:(id)arg1 ;
-(void)removePassthroughViewProvider:(id)arg1 ;
-(void)beginModalPassthroughContext;
-(void)endModalPassthroughContext;
-(void)addPassthroughView:(id)arg1 ;
-(void)removePassthroughView:(id)arg1 ;
-(BOOL)rasterizePopoverLayer;
-(void)setRasterizePopoverLayer:(BOOL)arg1 ;
-(void)dealloc;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)init;
-(id)_init;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)actionSheetCancel:(id)arg1 ;
-(void)willPresentActionSheet:(id)arg1 ;
-(void)didPresentActionSheet:(id)arg1 ;
-(void)actionSheet:(id)arg1 willDismissWithButtonIndex:(long long)arg2 ;
-(void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(long long)adaptivePresentationStyleForPresentationController:(id)arg1 ;
-(void)dismissPopoverAnimated:(BOOL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(void)willRotate;
-(void)didRotate;
-(void)setPopoverController:(MFPopoverController *)arg1 ;
-(MFPopoverController *)popoverController;
-(id)popover;
-(UIActionSheet *)actionSheet;
-(void)setActionSheet:(UIActionSheet *)arg1 ;
@end
