/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:19 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PreferenceBundles/ManagedConfigurationUI.bundle/ManagedConfigurationUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <ManagedConfigurationUI/PSStateRestoration.h>

@class MCUIProfile, NSArray, NSString;

@interface MCProfileDetailsViewController : UITableViewController <PSStateRestoration> {

	char _showTitleIfOnlyOneSection;
	char _viewControllerCanPop;
	int _mode;
	MCUIProfile* _UIProfile;
	NSArray* _sections;

}

@property (assign,nonatomic) int mode;                                    //@synthesize mode=_mode - In the implementation block
@property (nonatomic,retain) MCUIProfile * UIProfile;                     //@synthesize UIProfile=_UIProfile - In the implementation block
@property (assign,nonatomic) char showTitleIfOnlyOneSection;              //@synthesize showTitleIfOnlyOneSection=_showTitleIfOnlyOneSection - In the implementation block
@property (assign,nonatomic) char viewControllerCanPop;                   //@synthesize viewControllerCanPop=_viewControllerCanPop - In the implementation block
@property (nonatomic,retain) NSArray * sections;                          //@synthesize sections=_sections - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(float)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(void)didReceiveMemoryWarning;
-(id)initWithStyle:(int)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)setMode:(int)arg1 ;
-(int)mode;
-(void)setSections:(NSArray *)arg1 ;
-(NSArray *)sections;
-(void)contentSizeCategoryDidChangeNotification:(id)arg1 ;
-(void)_profileChanged:(id)arg1 ;
-(void)setUIProfile:(MCUIProfile *)arg1 ;
-(void)setUIProfile:(id)arg1 mode:(int)arg2 ;
-(MCUIProfile *)UIProfile;
-(void)setViewControllerCanPop:(char)arg1 ;
-(void)setProfileDetailsMode:(int)arg1 ;
-(void)reloadSectionArray;
-(char)viewControllerCanPop;
-(char)showTitleIfOnlyOneSection;
-(void)setShowTitleIfOnlyOneSection:(char)arg1 ;
-(void)_setup;
-(char)canBeShownFromSuspendedState;
@end
