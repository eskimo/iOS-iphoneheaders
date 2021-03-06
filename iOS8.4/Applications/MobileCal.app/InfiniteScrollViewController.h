/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:44 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileCal/MobileCal-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <MobileCal/_InfiniteScrollViewControllerDelegate.h>

@class NSMutableArray, EKCalendarDate, UIScrollView, CalendarModel, NSString;

@interface InfiniteScrollViewController : UIViewController <UIScrollViewDelegate, _InfiniteScrollViewControllerDelegate> {

	NSMutableArray* _views;
	EKCalendarDate* _startingDate;
	NSMutableArray* _reusableViews;
	EKCalendarDate* _lastKnownShownDate;
	char _viewCullingDisabledForScrollAnimation;
	char _isUserFingerDown;
	char _viewIsVisible;
	char _isRelayingOut;
	char _suppressViewAdjustments;
	UIScrollView* _scrollView;
	CalendarModel* _model;

}

@property (nonatomic,readonly) UIScrollView * scrollView;               //@synthesize scrollView=_scrollView - In the implementation block
@property (assign) char isUserFingerDown;                               //@synthesize isUserFingerDown=_isUserFingerDown - In the implementation block
@property (readonly) char viewIsVisible;                                //@synthesize viewIsVisible=_viewIsVisible - In the implementation block
@property (nonatomic,readonly) CalendarModel * model;                   //@synthesize model=_model - In the implementation block
@property (nonatomic,readonly) char isRelayingOut;                      //@synthesize isRelayingOut=_isRelayingOut - In the implementation block
@property (nonatomic,readonly) int subviewCount; 
@property (assign,nonatomic) char suppressViewAdjustments;              //@synthesize suppressViewAdjustments=_suppressViewAdjustments - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)_view:(id)arg1 containsCalendarDate:(id)arg2 ;
+(char)_shouldForwardViewWillTransitionToSize;
-(void)showDate:(id)arg1 animated:(char)arg2 ;
-(id)initWithCalendarDate:(id)arg1 model:(id)arg2 ;
-(void)showSelectedDateIfNeeded;
-(id)pastMajorBoundaryCalendarDateForCalendarDate:(id)arg1 ;
-(float)unobstructedScrollViewHeight;
-(id)calendarDateForSubviewBelowSubviewWithCalendarDate:(id)arg1 ;
-(float)heightForSubviewWithCalendarDate:(id)arg1 ;
-(id)dateOfCenterViewInBuffer;
-(void)willBeginDragging;
-(CGPoint)nearestMajorBoundaryForPoint:(CGPoint)arg1 ;
-(void)didEndScrolling;
-(void)reinitializeAllViewsWithCalendarDate:(id)arg1 ;
-(CGPoint)nearestMajorBoundaryForPoint:(CGPoint)arg1 date:(id*)arg2 ;
-(char)isUserFingerDown;
-(id)subviewForPoint:(CGPoint)arg1 ;
-(float)showDateVerticalOffset;
-(char)shouldAnimateScrollToDate:(id)arg1 fromClosestDate:(id)arg2 ;
-(id)futureMajorBoundaryCalendarDateForCalendarDate:(id)arg1 ;
-(id)calendarDateForSubviewAboveSubviewWithCalendarDate:(id)arg1 ;
-(void)willEndDraggingWithVelocity:(CGPoint)arg1 targetContentOffset:(inout CGPoint*)arg2 ;
-(id)subviewForDate:(id)arg1 ;
-(void)scrollViewDidLayoutSubviews;
-(void)_setUpInitialViewWithDate:(id)arg1 ;
-(void)_recenterContentIfNeededWithForce:(char)arg1 ;
-(id)createInitialViewForDate:(id)arg1 ;
-(id)_addNewTopView;
-(id)_addNewBottomView;
-(void)_layoutInitialSubviews;
-(void)_adjustLoadedViewRange;
-(void)_reloadDataForAllViews;
-(char)suppressViewAdjustments;
-(float)subviewBufferExtensionMultiplier;
-(float)topInsetForSubviewWithCalendarDate:(id)arg1 ;
-(unsigned)maximumCachedReusableViews;
-(void)_removeTopView;
-(void)_removeBottomView;
-(void)_recenterContentIfNeeded;
-(char)shouldUpdateSelectedDateWithCentralView;
-(void)_updateSelectedDateWithCentralView;
-(id)centerViewOnScreen;
-(void)setIsUserFingerDown:(char)arg1 ;
-(void)didEndDraggingWillDecelerate:(char)arg1 ;
-(void)didLoadInitialViews;
-(id)newTopViewAboveViewWithCalendarDate:(id)arg1 ;
-(id)newBottomViewBelowViewWithCalendarDate:(id)arg1 ;
-(void)showDate:(id)arg1 animated:(char)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)dateOfViewInBufferIndexRelativeToCenter:(int)arg1 ;
-(int)subviewCount;
-(id)dateOfCenterViewOnScreen;
-(void)enumerateScrollViewSubviews:(/*^block*/id)arg1 ;
-(id)dequeueReusableView;
-(char)isRelayingOut;
-(void)setSuppressViewAdjustments:(char)arg1 ;
-(char)viewIsVisible;
-(NSString *)description;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)viewDidLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)loadView;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(CalendarModel *)model;
-(UIScrollView *)scrollView;
-(void)didScroll;
-(id)firstView;
@end

