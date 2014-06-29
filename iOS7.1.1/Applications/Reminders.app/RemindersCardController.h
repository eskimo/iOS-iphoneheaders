/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:14 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Reminders.app/Reminders
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Reminders/Reminders-Structs.h>
#import <UIKit/UIViewController.h>

@class RemindersCardBackgroundView, NSString, NSLayoutConstraint, RemindersListController;

@interface RemindersCardController : UIViewController {

	RemindersCardBackgroundView* _bgView;
	BOOL _displayed;
	NSString* _ID;
	NSLayoutConstraint* _bottomConstraint;
	RemindersListController* _listController;

}

@property (readonly) RemindersCardBackgroundView * backgroundView; 
@property (nonatomic,retain) RemindersListController * listController;              //@synthesize listController=_listController - In the implementation block
+(UIEdgeInsets)backgroundEdgeInsets;
+(CGRect)cardContentRect;
-(void)setListController:(id)arg1 ;
-(id)listController;
-(void)alarmsFired;
-(id)displayedCalendar;
-(void)setBeingDisplayed:(BOOL)arg1 ;
-(void)setBeingDisplayed:(BOOL)arg1 reloadModelIfNeeded:(BOOL)arg2 ;
-(void)cardFinishedPresenting;
-(BOOL)isScheduled;
-(void)dealloc;
-(void)setContentOffset:(CGPoint)arg1 ;
-(id)backgroundView;
-(void)loadView;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1 ;
-(void).cxx_destruct;
-(id)ID;
@end
