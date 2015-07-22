/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:17:48 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <EventKitUI/EKEventTitleDetailItemDelegate.h>
#import <EventKitUI/EKUIEventStatusButtonsViewDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>

@protocol EKEventViewDelegate;
@class _UIAccessDeniedView, EKEventDetailItem, EKEventEditViewController, EKUIRecurrenceAlertController, EKUIEventStatusButtonsView, SingleToolbarItemContainerView, UITableView, NSArray, UIView, EKEvent, UIViewController, NSString;

@interface EKEventViewController : UIViewController <EKEventTitleDetailItemDelegate, EKUIEventStatusButtonsViewDelegate, UIAlertViewDelegate> {

	BOOL _ignoreDBChanges;
	long long _lastAuthorizationStatus;
	_UIAccessDeniedView* _accessDeniedView;
	EKEventDetailItem* _selectedEditItem;
	long long _disclosedTableSection;
	NSRange _disclosedTableRange;
	int _pendingStatus;
	EKEventEditViewController* _activeEventEditor;
	EKUIRecurrenceAlertController* _recurrenceAlertController;
	EKUIEventStatusButtonsView* _statusButtonsView;
	SingleToolbarItemContainerView* _statusButtonsContainerView;
	double _statusButtonsViewCachedFontSize;
	long long _lastOrientation;
	EKEventDetailItem* _currentEditItem;
	UITableView* _tableView;
	BOOL _didAppear;
	BOOL _viewIsVisible;
	BOOL _autoPop;
	BOOL _allowsSubitems;
	BOOL _showsPreview;
	BOOL _forcePreview;
	BOOL _trustsStatus;
	BOOL _allowsInviteResponses;
	BOOL _showsAddToCalendar;
	BOOL _ICSPreview;
	BOOL _needsReload;
	BOOL _showsDoneButton;
	BOOL _showsOutOfDateMessage;
	BOOL _showsDelegatorMessage;
	BOOL _showsDelegateMessage;
	BOOL _dead;
	BOOL _tableIsBeingEdited;
	NSArray* _items;
	NSArray* _currentSections;
	int _scrollToSection;
	UIView* _blankFooterView;
	BOOL _showingBlankFooterView;
	BOOL _allowsEditing;
	BOOL _hideNavigationBar;
	BOOL _minimalMode;
	int _editorShowTransition;
	int _editorHideTransition;
	id<EKEventViewDelegate> _delegate;
	EKEvent* _event;
	UIViewController* _eventDetailContainer;
	double _leftInset;
	double _rightInset;

}

@property (assign,nonatomic,__weak) id<EKEventViewDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) EKEvent * event;                                             //@synthesize event=_event - In the implementation block
@property (assign,nonatomic) BOOL allowsEditing;                                          //@synthesize allowsEditing=_allowsEditing - In the implementation block
@property (assign,nonatomic) BOOL allowsCalendarPreview; 
@property (assign,nonatomic) BOOL alwaysShowsCalendarPreview; 
@property (assign,nonatomic) int scrollToSection; 
@property (assign,getter=isICSPreview,nonatomic) BOOL ICSPreview;                         //@synthesize ICSPreview=_ICSPreview - In the implementation block
@property (assign,nonatomic) BOOL allowsInviteResponses;                                  //@synthesize allowsInviteResponses=_allowsInviteResponses - In the implementation block
@property (assign,nonatomic) BOOL showsAddToCalendar;                                     //@synthesize showsAddToCalendar=_showsAddToCalendar - In the implementation block
@property (assign,nonatomic) BOOL allowsSubitems;                                         //@synthesize allowsSubitems=_allowsSubitems - In the implementation block
@property (assign,nonatomic) BOOL showsDoneButton;                                        //@synthesize showsDoneButton=_showsDoneButton - In the implementation block
@property (assign,nonatomic) BOOL showsOutOfDateMessage;                                  //@synthesize showsOutOfDateMessage=_showsOutOfDateMessage - In the implementation block
@property (assign,nonatomic) BOOL showsDelegatorMessage;                                  //@synthesize showsDelegatorMessage=_showsDelegatorMessage - In the implementation block
@property (assign,nonatomic) BOOL showsDelegateMessage;                                   //@synthesize showsDelegateMessage=_showsDelegateMessage - In the implementation block
@property (assign,nonatomic) BOOL hideNavigationBar;                                      //@synthesize hideNavigationBar=_hideNavigationBar - In the implementation block
@property (assign,nonatomic) BOOL minimalMode;                                            //@synthesize minimalMode=_minimalMode - In the implementation block
@property (assign,nonatomic) int editorShowTransition;                                    //@synthesize editorShowTransition=_editorShowTransition - In the implementation block
@property (assign,nonatomic) int editorHideTransition;                                    //@synthesize editorHideTransition=_editorHideTransition - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * eventDetailContainer;              //@synthesize eventDetailContainer=_eventDetailContainer - In the implementation block
@property (assign,nonatomic) double topInset; 
@property (assign,nonatomic) double leftInset;                                            //@synthesize leftInset=_leftInset - In the implementation block
@property (assign,nonatomic) double rightInset;                                           //@synthesize rightInset=_rightInset - In the implementation block
@property (nonatomic,retain) EKEventEditViewController * activeEventEditor; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)setDefaultDatesForEvent:(id)arg1 ;
+(void)adjustLayoutForCell:(id)arg1 tableViewWidth:(double)arg2 numRowsInSection:(unsigned long long)arg3 cellRow:(unsigned long long)arg4 forceLayout:(BOOL)arg5 ;
-(id)initWithEvent:(id)arg1 ;
-(void)eventStatusButtonsView:(id)arg1 didSelectAction:(long long)arg2 ;
-(double)eventStatusButtonsViewButtonFontSize:(id)arg1 ;
-(void)eventStatusButtonsView:(id)arg1 calculatedFontSizeToFit:(double)arg2 ;
-(void)_storeChanged:(id)arg1 ;
-(void)eventEditViewController:(id)arg1 didCompleteWithAction:(int)arg2 ;
-(void)editButtonPressed;
-(BOOL)shouldShowEditButtonInline;
-(void)_localeChanged;
-(void)setICSPreview:(BOOL)arg1 ;
-(void)setShowsAddToCalendar:(BOOL)arg1 ;
-(void)setShowsOutOfDateMessage:(BOOL)arg1 ;
-(void)setShowsDelegatorMessage:(BOOL)arg1 ;
-(void)setShowsDelegateMessage:(BOOL)arg1 ;
-(void)setAllowsInviteResponses:(BOOL)arg1 ;
-(void)setAllowsSubitems:(BOOL)arg1 ;
-(BOOL)allowsSubitems;
-(void)setScrollToSection:(int)arg1 ;
-(void)setAllowsCalendarPreview:(BOOL)arg1 ;
-(void)_updateTableContentInsetForKeyboard:(id)arg1 ;
-(void)eventItemDidStartEditing:(id)arg1 ;
-(void)eventItemDidEndEditing:(id)arg1 ;
-(void)eventItemDidCommit:(id)arg1 ;
-(void)_deleteClicked:(id)arg1 ;
-(void)_presentValidationAlert:(id)arg1 ;
-(id)viewControllerForEventItem:(id)arg1 ;
-(id)accessDeniedView;
-(void)_presentDetachSheet;
-(BOOL)_performSave:(int)arg1 animated:(BOOL)arg2 ;
-(void)_performDelete:(int)arg1 ;
-(void)setEditorShowTransition:(int)arg1 ;
-(void)setEditorHideTransition:(int)arg1 ;
-(void)_teardownTableView;
-(BOOL)minimalMode;
-(void)_updateResponseVisibility;
-(void)_updateResponse;
-(void)_updateFooterIfNeeded;
-(void)_setNeedsReload;
-(id)_indexPathForSection:(int)arg1 ;
-(void)_updateTableContentForSizeCategoryChange:(id)arg1 ;
-(void)_setObservesKeyboardNotifications:(BOOL)arg1 ;
-(void)_updateNavBarAnimated:(BOOL)arg1 ;
-(void)_reloadIfNeeded;
-(id)_indexPathForAttendeesDetailItem;
-(UIViewController *)eventDetailContainer;
-(BOOL)_shouldShowEditButton;
-(void)editEvent;
-(BOOL)_shouldDisplayDoneButton;
-(void)doneButtonPressed;
-(void)_setUpForEvent;
-(void)_configureItemsForStoreConstraintsGivenCalendar:(id)arg1 ;
-(void)_updateStatusButtonsActions;
-(void)_dismissEditor:(BOOL)arg1 deleted:(BOOL)arg2 ;
-(void)_updateFrameForInsets;
-(void)_keyboardWasShown:(id)arg1 ;
-(void)_keyboardWasHidden:(id)arg1 ;
-(void)completeWithAction:(int)arg1 ;
-(void)_refreshEventAndReload;
-(void)_setUpAttendeesWithAcceptedItem:(id)arg1 declinedItem:(id)arg2 maybeItem:(id)arg3 noReplyItem:(id)arg4 ;
-(BOOL)allowsInviteResponses;
-(BOOL)showsOutOfDateMessage;
-(BOOL)showsDelegatorMessage;
-(BOOL)showsDelegateMessage;
-(BOOL)_shouldDisplayDelegateOrOutOfDateMessage;
-(id)_footerLabelContainingText:(id)arg1 ;
-(void)_prepareEventForEdit;
-(id)_statusButtons;
-(BOOL)_isDisplayingInvitation;
-(void)setActiveEventEditor:(EKEventEditViewController *)arg1 ;
-(void)presentEditorAnimated:(BOOL)arg1 ;
-(int)editorShowTransition;
-(id)_viewControllerForEditorPresentation;
-(CGSize)_idealSize;
-(void)_saveStatus:(int)arg1 span:(int)arg2 ;
-(int)editorHideTransition;
-(void)_saveStatus:(int)arg1 ;
-(id)_statusButtonsView;
-(void)_addToCalendarClicked:(id)arg1 ;
-(BOOL)_shouldDisplayStatusButtons;
-(id)_statusButtonsContainerView;
-(BOOL)showsAddToCalendar;
-(BOOL)isICSPreview;
-(BOOL)_isDisplayingDeletableEvent;
-(void)invokeAction:(long long)arg1 ;
-(void)setMinimalMode:(BOOL)arg1 ;
-(unsigned long long)_sectionForDetailItem:(id)arg1 ;
-(void)openAttendeesDetailItem;
-(BOOL)allowsCalendarPreview;
-(BOOL)alwaysShowsCalendarPreview;
-(void)setAlwaysShowsCalendarPreview:(BOOL)arg1 ;
-(int)scrollToSection;
-(void)setHideNavigationBar:(BOOL)arg1 ;
-(EKEventEditViewController *)activeEventEditor;
-(void)_layoutStatusButtonsForInterfaceOrientation:(long long)arg1 ;
-(void)detailItem:(id)arg1 performActionsOnCellAtIndexPath:(id)arg2 actions:(/*^block*/id)arg3 ;
-(void)detailItem:(id)arg1 wantsRowReload:(id)arg2 ;
-(void)detailItem:(id)arg1 wantsRowInsertions:(id)arg2 rowDeletions:(id)arg3 rowReloads:(id)arg4 ;
-(void)detailItem:(id)arg1 wantsIndexPathsScrolledToVisible:(id)arg2 ;
-(BOOL)hideNavigationBar;
-(void)setEventDetailContainer:(UIViewController *)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<EKEventViewDelegate>)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didUnhighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id<EKEventViewDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewWillLayoutSubviews;
-(CGSize)preferredContentSize;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)_items;
-(id)tableView;
-(BOOL)allowsEditing;
-(void)setAllowsEditing:(BOOL)arg1 ;
-(void)setEvent:(EKEvent *)arg1 ;
-(EKEvent *)event;
-(void)_pop;
-(BOOL)allowContextProvider:(id)arg1 ;
-(id)getCurrentContext;
-(void)setShowsDoneButton:(BOOL)arg1 ;
-(BOOL)showsDoneButton;
-(double)leftInset;
-(double)rightInset;
-(void)setLeftInset:(double)arg1 ;
-(void)setTopInset:(double)arg1 ;
-(void)setRightInset:(double)arg1 ;
-(double)topInset;
@end
