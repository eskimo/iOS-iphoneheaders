/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:00 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <EventKitUI/EKEditItemViewControllerProtocol.h>

@protocol EKStyleProvider, EKEditItemViewControllerDelegate;
@class EKUIRecurrenceAlertController;

@interface EKEditItemViewController : UIViewController <EKEditItemViewControllerProtocol> {

	CGRect _initialFrame;
	int _subitem;
	bool _modal;
	<EKStyleProvider>* _styleProvider;
	<EKEditItemViewControllerDelegate>* _editDelegate;
	EKUIRecurrenceAlertController* _recurrenceAlertController;
	bool _showsDoneButton;
	int _subsection;

}

@property (assign,nonatomic) int subitem;                                                           //@synthesize subitem=_subitem - In the implementation block
@property (assign,nonatomic) int subsection;                                                        //@synthesize subsection=_subsection - In the implementation block
@property (assign,nonatomic) bool modal;                                                            //@synthesize modal=_modal - In the implementation block
@property (assign,nonatomic) bool showsDoneButton;                                                  //@synthesize showsDoneButton=_showsDoneButton - In the implementation block
@property (assign,nonatomic,__weak) <EKEditItemViewControllerDelegate> * editDelegate;              //@synthesize editDelegate=_editDelegate - In the implementation block
-(id)initWithFrame:(CGRect)arg1 styleProvider:(id)arg2 ;
-(void)setEditDelegate:(id)arg1 ;
-(id)editDelegate;
-(void)setShowsDoneButton:(bool)arg1 ;
-(bool)showsDoneButton;
-(void)saveAndDismissWithExtremePrejudice;
-(bool)fitsPopoverWhenKeyboardActive;
-(void)saveAndDismiss;
-(bool)validateAllowingAlert:(bool)arg1 ;
-(void)_saveAndDismissWithForce:(bool)arg1 ;
-(void)popIfNonModal;
-(void)setCell:(id)arg1 checked:(bool)arg2 ;
-(int)subitem;
-(void)setSubitem:(int)arg1 ;
-(int)subsection;
-(void)setSubsection:(int)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(void)didReceiveMemoryWarning;
-(unsigned long long)supportedInterfaceOrientations;
-(double)marginForTableView:(id)arg1 ;
-(void)viewWillAppear:(bool)arg1 ;
-(CGSize)preferredContentSize;
-(void)viewDidLoad;
-(void)viewWillDisappear:(bool)arg1 ;
-(void)cancel;
-(void).cxx_destruct;
-(bool)modal;
-(void)setModal:(bool)arg1 ;
@end
