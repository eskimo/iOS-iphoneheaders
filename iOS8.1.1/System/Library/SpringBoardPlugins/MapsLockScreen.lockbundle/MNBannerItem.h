/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:36:06 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/SpringBoardPlugins/MapsLockScreen.lockbundle/MapsLockScreen
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapsLockScreen/MapsLockScreen-Structs.h>
#import <SpringBoardUI/SBUIBannerItem.h>

@class NSArray, NSString, NSDate, UIImage;

@interface MNBannerItem : SBUIBannerItem {

	int _maneuver;
	int _drivingSide;
	NSArray* _instructions;
	NSString* _distanceText;
	NSDate* _sortDate;
	BOOL _withinManeuver;
	UIImage* _shieldImage;
	CGPoint _shieldCenterPoint;

}

@property (assign,nonatomic) int maneuver;                                             //@synthesize maneuver=_maneuver - In the implementation block
@property (assign,nonatomic) int drivingSide;                                          //@synthesize drivingSide=_drivingSide - In the implementation block
@property (nonatomic,copy) NSArray * instructions;                                     //@synthesize instructions=_instructions - In the implementation block
@property (nonatomic,copy) NSString * distanceText;                                    //@synthesize distanceText=_distanceText - In the implementation block
@property (nonatomic,retain) NSDate * sortDate;                                        //@synthesize sortDate=_sortDate - In the implementation block
@property (assign,getter=isWithinManeuver,nonatomic) BOOL withinManeuver;              //@synthesize withinManeuver=_withinManeuver - In the implementation block
@property (nonatomic,copy) UIImage * shieldImage;                                      //@synthesize shieldImage=_shieldImage - In the implementation block
@property (assign,nonatomic) CGPoint shieldCenterPoint;                                //@synthesize shieldCenterPoint=_shieldCenterPoint - In the implementation block
-(void)setDistanceText:(NSString *)arg1 ;
-(void)setWithinManeuver:(BOOL)arg1 ;
-(BOOL)isWithinManeuver;
-(CGPoint)shieldCenterPoint;
-(NSString *)distanceText;
-(void)setShieldCenterPoint:(CGPoint)arg1 ;
-(UIImage *)shieldImage;
-(int)maneuver;
-(void)setShieldImage:(UIImage *)arg1 ;
-(void)setManeuver:(int)arg1 ;
-(id)description;
-(/*^block*/id)action;
-(NSDate *)sortDate;
-(unsigned long long)priority;
-(void)setSortDate:(NSDate *)arg1 ;
-(void)setDrivingSide:(int)arg1 ;
-(void)setInstructions:(NSArray *)arg1 ;
-(NSArray *)instructions;
-(BOOL)isSticky;
-(BOOL)canShowInAssistant;
-(int)drivingSide;
@end

