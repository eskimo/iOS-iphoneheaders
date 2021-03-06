/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:10 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileSafari/MobileSafari-Structs.h>
#import <UIKit/UIViewController.h>

@class NSArray, CatalogViewController;

@interface BrowserRootViewController : UIViewController {

	NSArray* _keyCommands;
	int _preferredStatusBarStyle;
	int _lastKnownOrientation;
	CatalogViewController* _catalogViewController;

}

@property (assign,nonatomic) int preferredStatusBarStyle; 
@property (assign,nonatomic) int lastKnownOrientation;                                   //@synthesize lastKnownOrientation=_lastKnownOrientation - In the implementation block
@property (nonatomic,retain) CatalogViewController * catalogViewController;              //@synthesize catalogViewController=_catalogViewController - In the implementation block
-(id)catalogViewController;
-(void)setLastKnownOrientation:(int)arg1 ;
-(void)setCatalogViewController:(id)arg1 ;
-(void)_reloadKeyPressed;
-(void)_stopLoadingKeyPressed;
-(void)_navigateBackKeyPressed;
-(void)_navigateForwardKeyPressed;
-(void)_focusAddressFieldKeyPressed;
-(void)_newTabKeyPressed;
-(void)_closeActiveTabKeyPressed;
-(int)lastKnownOrientation;
-(void)dealloc;
-(id)init;
-(int)preferredStatusBarStyle;
-(id)keyCommands;
-(BOOL)canBecomeFirstResponder;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)rotatingHeaderView;
-(id)rotatingFooterView;
-(void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)_getRotationContentSettings:(SCD_Struct_Br7*)arg1 ;
-(void)didRotateFromInterfaceOrientation:(int)arg1 ;
-(void)setPreferredStatusBarStyle:(int)arg1 ;
@end

