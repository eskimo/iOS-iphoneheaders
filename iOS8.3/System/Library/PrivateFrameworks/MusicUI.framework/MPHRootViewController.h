/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:47:11 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <MusicUI/MPUCoverZoomViewControllerDelegate.h>

@class MPUCoverZoomViewController, MusicTabBarController, NSString;

@interface MPHRootViewController : UIViewController <MPUCoverZoomViewControllerDelegate> {

	char _canShowCoverZoom;
	MPUCoverZoomViewController* _coverZoomViewController;
	char _isCoverZoomVisible;
	char _mediaLibrarySupportsCoverZoom;
	int _statusBarOrientation;
	MusicTabBarController* _tabBarController;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_mediaLibraryDidChangeNotification:(id)arg1 ;
-(void)dealloc;
-(unsigned)supportedInterfaceOrientations;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLoad;
-(char)shouldAutomaticallyForwardAppearanceMethods;
-(id)childViewControllerForStatusBarStyle;
-(id)childViewControllerForStatusBarHidden;
-(id)initWithTabBarController:(id)arg1 ;
-(id)detailViewControllerForEntity:(id)arg1 ;
-(id)_coverZoomViewController;
-(void)_updateInProgressDidChangeNotification:(id)arg1 ;
-(void)_applicationWillChangeStatusBarOrientationNotification:(id)arg1 ;
-(char)_updateMediaLibrarySupportsCoverZoom;
-(char)_updateCanShowCoverZoom;
-(void)_updateCoverFlowWithTraitCollection:(id)arg1 animated:(char)arg2 ;
-(void)_layoutCoverZoomView;
-(char)_shouldShowCoverZoomWithTraitCollection:(id)arg1 ;
-(void)_updateCoverFlow;
-(char)_canShowCoverZoom;
@end

