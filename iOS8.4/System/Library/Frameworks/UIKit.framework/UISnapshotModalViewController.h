/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:18:56 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class UIViewController, UINavigationController;

@interface UISnapshotModalViewController : UIViewController {

	long long _interfaceOrientation;
	UIViewController* _disappearingViewController;
	UINavigationController* _parentController;

}

@property (nonatomic,retain) UIViewController * disappearingViewController;              //@synthesize disappearingViewController=_disappearingViewController - In the implementation block
-(void)dealloc;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)_isSupportedInterfaceOrientation:(long long)arg1 ;
-(UIViewController *)disappearingViewController;
-(id)initWithInterfaceOrientation:(long long)arg1 ;
-(void)setDisappearingViewController:(UIViewController *)arg1 ;
@end

