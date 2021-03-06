/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:01:08 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Weather.app/Weather
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Weather/Weather-Structs.h>
#import <UIKit/UIScrollView.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol HourlyScrollerBeltDelegate;
@class NSMutableArray;

@interface HourlyScrollerBeltView : UIScrollView <UIScrollViewDelegate> {

	<HourlyScrollerBeltDelegate>* _hourlyScrollerDelegate;
	NSMutableArray* _cells;

}

@property (assign,nonatomic) <HourlyScrollerBeltDelegate> * hourlyScrollerDelegate;              //@synthesize hourlyScrollerDelegate=_hourlyScrollerDelegate - In the implementation block
@property (nonatomic,retain) NSMutableArray * cells;                                             //@synthesize cells=_cells - In the implementation block
-(void)setCells:(id)arg1 ;
-(void)setHourlyScrollerDelegate:(id)arg1 ;
-(void)resetScrollerOffsets;
-(id)forecasts;
-(id)hourlyScrollerDelegate;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)reloadData;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)cells;
@end

