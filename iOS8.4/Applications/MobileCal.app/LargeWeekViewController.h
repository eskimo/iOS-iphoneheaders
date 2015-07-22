/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:45 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileCal/MobileCal-Structs.h>
#import <MobileCal/WeekViewController.h>
#import <MobileCal/EKEventViewDelegate.h>
#import <MobileCal/EKEventEditViewDelegate.h>
#import <MobileCal/EKEventViewDelegatePrivate.h>
#import <MobileCal/ABPersonViewControllerDelegate.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>
#import <MobileCal/MainViewController.h>

@class EKEventEditViewController, EKEventGestureController, EKDayOccurrenceView, EventDetailContainerViewController, NSString;

@interface LargeWeekViewController : WeekViewController <EKEventViewDelegate, EKEventEditViewDelegate, EKEventViewDelegatePrivate, ABPersonViewControllerDelegate, UIPopoverPresentationControllerDelegate, MainViewController> {

	EKEventEditViewController* _editViewController;
	char _shouldRePresentPopoverAfterDrag;
	EKEventGestureController* _gestureController;
	EKDayOccurrenceView* _selectedOccurrenceView;
	EKDayOccurrenceView* _selectedOccurrenceFrontmostClonedView;
	EventDetailContainerViewController* _presentedEventViewController;
	char _isTransformingInterfaceSize;
	char _shouldPresentEventDetailsForSelectedOccurrence;
	char _shouldPresentEventCommentsForSelectedOccurrence;

}

@property (assign,nonatomic) char shouldPresentEventDetailsForSelectedOccurrence; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)_shouldForwardViewWillTransitionToSize;
-(void)showEvent:(id)arg1 animated:(char)arg2 showDetails:(char)arg3 ;
-(void)showEvent:(id)arg1 animated:(char)arg2 showDetails:(char)arg3 showComments:(char)arg4 ;
-(void)selectDate:(id)arg1 animated:(char)arg2 ;
-(void)showEvent:(id)arg1 animated:(char)arg2 ;
-(char)allowsOverriddenRightNavigationBarItems;
-(char)allowsOverriddenToolbarItems;
-(void)presentDetailsViewWhenReady:(id)arg1 animated:(char)arg2 ;
-(void)updatePalette:(id)arg1 ;
-(void)updateNavigationBarDisplayedDateString;
-(char)shouldPresentEventDetailsForSelectedOccurrence;
-(void)setShouldPresentEventDetailsForSelectedOccurrence:(char)arg1 ;
-(id)pushedDayViewControllerWithDate:(id)arg1 animated:(char)arg2 ;
-(void)_closeEventPresentationAnimated:(char)arg1 ;
-(char)shouldUseInternalNavigationControllerForEventDetailsContainer:(id)arg1 ;
-(float)headerVerticalOffset;
-(float)scrollToDisplayedDateAnimated:(char)arg1 ;
-(void)overlayCalendarDidChange;
-(void)updateBannerDateStrings;
-(void)customizeWeekGroupView:(id)arg1 ;
-(NSRange)visibleRangeForOffset:(float)arg1 ;
-(void)snapTargetScrollOffset:(inout CGPoint*)arg1 withVelocity:(CGPoint)arg2 ;
-(void)draggingDone;
-(void)_resizeInterfaceForWindowSize:(CGSize)arg1 ;
-(void)_setSelectedEvent:(id)arg1 ;
-(void)_showMonthOverlayInCellAtOffset:(float)arg1 animated:(char)arg2 ;
-(void)_weekViewDidEndScrolling:(id)arg1 ;
-(void)_occurrenceViewDidEndSelection:(id)arg1 ;
-(void)_displayEventDetailsViewControllerForEvent:(id)arg1 showComment:(char)arg2 ;
-(char)_tooFarToAnimate:(id)arg1 ;
-(void)_presentEventDetailsPopoverForOccurrenceView:(id)arg1 animated:(char)arg2 showComments:(char)arg3 ;
-(void)_displayOccurrenceViewAsSelectedAndFrontmost:(id)arg1 ;
-(void)_displayEventDetailsViewControllerForSelectedEventWithOccurrenceView:(id)arg1 showComments:(char)arg2 ;
-(void)_rePresentEditPopoverFromTargetView:(id)arg1 ;
-(void)_displayEventEditPopoverForEvent:(id)arg1 withOccurrenceView:(id)arg2 ;
-(void)_showSelectedEvent;
-(void)eventEditViewController:(id)arg1 didCompleteWithAction:(int)arg2 ;
-(float)minimumHourScale;
-(void)eventGestureController:(id)arg1 didSetUpAtDate:(double)arg2 isAllDay:(char)arg3 ;
-(char)eventGestureController:(id)arg1 didCommitOccurrence:(id)arg2 toDate:(double)arg3 isAllDay:(char)arg4 span:(int)arg5 ;
-(void)eventGestureController:(id)arg1 didCancelEditingOccurrence:(id)arg2 fadedOut:(char)arg3 ;
-(void)eventGestureController:(id)arg1 didSingleTapOccurrence:(id)arg2 ;
-(char)eventEditorPopoverActiveWhileDraggingForEventGestureController:(id)arg1 ;
-(void)eventViewController:(id)arg1 didCompleteWithAction:(int)arg2 ;
-(void)eventViewControllerWillBeginEditingEvent:(id)arg1 ;
-(char)eventViewDelegateShouldCreateOwnEditViewController:(id)arg1 ;
-(char)eventViewDelegateShouldHandlePresentationOfEditViewController:(id)arg1 ;
-(void)eventViewController:(id)arg1 requestsDisplayOfEditViewController:(id)arg2 animated:(char)arg3 ;
-(void)eventViewControllerWillFinishEditingEvent:(id)arg1 deleted:(char)arg2 ;
-(char)eventViewControllerShouldHideInlineEditButton;
-(char)eventViewControllerShouldHandleInlineEdit:(id)arg1 ;
-(void)eventViewControllerInlineEditButtonWasTapped:(id)arg1 ;
-(char)eventViewControllerShouldShowInlineEditButtonForInvitations:(id)arg1 ;
-(int)editorShowTransition;
-(int)editorHideTransition;
-(char)shouldAutorotate;
-(unsigned)supportedInterfaceOrientations;
-(int)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)loadView;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(char)popoverPresentationControllerShouldDismissPopover:(id)arg1 ;
-(void)popoverPresentationControllerDidDismissPopover:(id)arg1 ;
-(void)popoverPresentationController:(id)arg1 willRepositionPopoverToRect:(inout CGRect*)arg2 inView:(inout id*)arg3 ;
-(id)initWithModel:(id)arg1 ;
-(char)personViewController:(id)arg1 shouldPerformDefaultActionForPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4 ;
@end
