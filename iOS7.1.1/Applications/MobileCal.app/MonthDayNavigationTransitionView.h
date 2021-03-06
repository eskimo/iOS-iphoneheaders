/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:05 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileCal/MobileCal-Structs.h>
#import <UIKit/UIView.h>

@class NSArray, NSMutableArray, TopLineView;

@interface MonthDayNavigationTransitionView : UIView {

	BOOL _debug;
	NSArray* _strings;
	NSArray* _weekendIndices;
	int _selectedIndex;
	int _todayIndex;
	NSArray* _eventCounts;
	float _firstDayCellInset;
	int _firstDayCellIndex;
	float _monthRowHeight;
	int _firstMonthCellIndex;
	NSArray* _monthCellWidths;
	int _monthBreakIndex;
	NSMutableArray* _cells;
	TopLineView* _topLineLeft;
	TopLineView* _topLineRight;
	CGPoint _dayBaseLocation;
	CGSize _dayCellSize;
	CGPoint _monthBaseLocation;

}

@property (nonatomic,retain) NSArray * strings;                       //@synthesize strings=_strings - In the implementation block
@property (nonatomic,retain) NSArray * weekendIndices;                //@synthesize weekendIndices=_weekendIndices - In the implementation block
@property (assign,nonatomic) int selectedIndex;                       //@synthesize selectedIndex=_selectedIndex - In the implementation block
@property (assign,nonatomic) int todayIndex;                          //@synthesize todayIndex=_todayIndex - In the implementation block
@property (nonatomic,retain) NSArray * eventCounts;                   //@synthesize eventCounts=_eventCounts - In the implementation block
@property (assign,nonatomic) CGPoint dayBaseLocation;                 //@synthesize dayBaseLocation=_dayBaseLocation - In the implementation block
@property (assign,nonatomic) float firstDayCellInset;                 //@synthesize firstDayCellInset=_firstDayCellInset - In the implementation block
@property (assign,nonatomic) int firstDayCellIndex;                   //@synthesize firstDayCellIndex=_firstDayCellIndex - In the implementation block
@property (assign,nonatomic) CGSize dayCellSize;                      //@synthesize dayCellSize=_dayCellSize - In the implementation block
@property (assign,nonatomic) CGPoint monthBaseLocation;               //@synthesize monthBaseLocation=_monthBaseLocation - In the implementation block
@property (assign,nonatomic) float monthRowHeight;                    //@synthesize monthRowHeight=_monthRowHeight - In the implementation block
@property (assign,nonatomic) int firstMonthCellIndex;                 //@synthesize firstMonthCellIndex=_firstMonthCellIndex - In the implementation block
@property (nonatomic,retain) NSArray * monthCellWidths;               //@synthesize monthCellWidths=_monthCellWidths - In the implementation block
@property (assign,nonatomic) int monthBreakIndex;                     //@synthesize monthBreakIndex=_monthBreakIndex - In the implementation block
@property (assign,nonatomic) BOOL debug;                              //@synthesize debug=_debug - In the implementation block
@property (nonatomic,retain) NSMutableArray * cells;                  //@synthesize cells=_cells - In the implementation block
@property (nonatomic,retain) TopLineView * topLineLeft;               //@synthesize topLineLeft=_topLineLeft - In the implementation block
@property (nonatomic,retain) TopLineView * topLineRight;              //@synthesize topLineRight=_topLineRight - In the implementation block
-(void)setEventCounts:(id)arg1 ;
-(id)eventCounts;
-(void)setDayCellSize:(CGSize)arg1 ;
-(void)setTodayIndex:(int)arg1 ;
-(void)setWeekendIndices:(id)arg1 ;
-(void)setDayBaseLocation:(CGPoint)arg1 ;
-(void)setFirstDayCellInset:(float)arg1 ;
-(void)setFirstDayCellIndex:(int)arg1 ;
-(void)setMonthBaseLocation:(CGPoint)arg1 ;
-(void)setFirstMonthCellIndex:(int)arg1 ;
-(void)setMonthCellWidths:(id)arg1 ;
-(void)setMonthRowHeight:(float)arg1 ;
-(void)setMonthBreakIndex:(int)arg1 ;
-(void)completeSetup;
-(CGSize)dayCellSize;
-(void)animateToDayLayout;
-(void)_animateView:(id)arg1 toPosition:(CGPoint)arg2 ;
-(void)animateToMonthLayout;
-(void)setTopLineLeft:(id)arg1 ;
-(void)setTopLineRight:(id)arg1 ;
-(id)topLineLeft;
-(id)topLineRight;
-(void)setCells:(id)arg1 ;
-(int)todayIndex;
-(id)monthCellWidths;
-(void)_updateWeekendIndices;
-(void)_updateEventCounts;
-(id)weekendIndices;
-(void)_setToMonthState;
-(void)_setUpLayerAnimationsToDay;
-(void)_setToDayState;
-(void)_setUpLayerAnimationsToMonth;
-(float)firstDayCellInset;
-(id)_todayCell;
-(CGPoint)dayBaseLocation;
-(int)firstDayCellIndex;
-(int)monthBreakIndex;
-(id)_selectedCell;
-(int)firstMonthCellIndex;
-(CGPoint)monthBaseLocation;
-(float)monthRowHeight;
-(BOOL)debug;
-(void)setDebug:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(int)selectedIndex;
-(void)setSelectedIndex:(int)arg1 ;
-(void)setStrings:(id)arg1 ;
-(id)strings;
-(void).cxx_destruct;
-(id)cells;
@end

