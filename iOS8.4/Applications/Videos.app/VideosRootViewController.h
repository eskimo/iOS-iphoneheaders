/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:17 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Videos.app/Videos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Videos/Videos-Structs.h>
#import <UIKit/UIViewController.h>
#import <Videos/MPUTabBarControllerDelegate.h>

@class UITraitCollection, VideosNavigationController, UIView, VideosTabBarController, VideosContentUnavailableView, NSString;

@interface VideosRootViewController : UIViewController <MPUTabBarControllerDelegate> {

	UITraitCollection* _overrideTraitCollection;
	VideosNavigationController* _selectedNavigationControllerForTraitsOverridingViewControllerPresentation;
	UIView* _statusBarSnapshotView;
	VideosTabBarController* _tabBarController;
	VideosContentUnavailableView* _contentUnavailableView;

}

@property (nonatomic,copy) UITraitCollection * overrideTraitCollection;                                                                           //@synthesize overrideTraitCollection=_overrideTraitCollection - In the implementation block
@property (nonatomic,retain) VideosNavigationController * selectedNavigationControllerForTraitsOverridingViewControllerPresentation;              //@synthesize selectedNavigationControllerForTraitsOverridingViewControllerPresentation=_selectedNavigationControllerForTraitsOverridingViewControllerPresentation - In the implementation block
@property (nonatomic,retain) UIView * statusBarSnapshotView;                                                                                      //@synthesize statusBarSnapshotView=_statusBarSnapshotView - In the implementation block
@property (nonatomic,retain) VideosTabBarController * tabBarController;                                                                           //@synthesize tabBarController=_tabBarController - In the implementation block
@property (nonatomic,retain) VideosContentUnavailableView * contentUnavailableView;                                                               //@synthesize contentUnavailableView=_contentUnavailableView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)willDismissTraitsOverridingViewController:(id)arg1 ;
-(void)didDismissTraitsOverridingViewController:(id)arg1 ;
-(void)_performBlockWithoutOverridingTraitCollection:(/*^block*/id)arg1 ;
-(void)setStatusBarSnapshotView:(UIView *)arg1 ;
-(void)setSelectedNavigationControllerForTraitsOverridingViewControllerPresentation:(VideosNavigationController *)arg1 ;
-(void)willPresentTraitsOverridingViewController:(id)arg1 ;
-(VideosNavigationController *)selectedNavigationControllerForTraitsOverridingViewControllerPresentation;
-(void)didPresentTraitsOverridingViewController:(id)arg1 ;
-(UIView *)statusBarSnapshotView;
-(char)showDetailsForItem:(id)arg1 ;
-(void)_mediaLibraryContentDidChangeNotification:(id)arg1 ;
-(VideosContentUnavailableView *)contentUnavailableView;
-(void)setContentUnavailableView:(VideosContentUnavailableView *)arg1 ;
-(void)_defaultMediaLibraryDidChangeNotification:(id)arg1 ;
-(void)dealloc;
-(int)preferredStatusBarStyle;
-(char)prefersStatusBarHidden;
-(unsigned)supportedInterfaceOrientations;
-(id)traitCollection;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(UITraitCollection *)overrideTraitCollection;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)setOverrideTraitCollection:(UITraitCollection *)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)dismissViewControllerAnimated:(char)arg1 completion:(/*^block*/id)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)_setContentOverlayInsets:(UIEdgeInsets)arg1 ;
-(void)viewDidLoad;
-(VideosTabBarController *)tabBarController;
-(char)tabBarController:(id)arg1 shouldSelectViewController:(id)arg2 ;
-(void)setTabBarController:(VideosTabBarController *)arg1 ;
-(char)tabBarController:(id)arg1 shouldDisplayTabForViewControllerForIdentifier:(id)arg2 ;
-(void)didReloadTabsForTabBarController:(id)arg1 ;
-(void)_availableMediaLibrariesDidChangeNotification:(id)arg1 ;
@end
